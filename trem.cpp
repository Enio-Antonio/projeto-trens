#include "trem.h"
#include <QtCore>
#include <QDebug>

QMutex mutex1; // T1 e T2
QMutex mutex2; // T1 e T3
QMutex mutex3; // T2 e T3 (A sua bolinha vermelha da esquerda!)
QMutex mutex4; // T2 e T4
QMutex mutex5; // T3 e T4
QMutex mutex6; // T2 e 5
QMutex mutex7; // T2 e T6 (A sua bolinha vermelha da direita!)
QMutex mutex8; // T4 e T6
QMutex mutex9; // T5 e T6

//Construtor
Trem::Trem(int ID, int x, int y){
    this->ID = ID;
    this->x = x;
    this->y = y;
    velocidade = 100;
}

//Função a ser executada após executar trem->START
void Trem::run(){
    while(true){
        if (velocidade < 201) {
        switch(ID){
        case 1: // TREM 1 (Topo Esquerda)

            if (x == 310 && y == 30) mutex1.lock(); // Entra na direita (T2)
            if (x == 330 && y == 150) mutex2.lock(); // Entra embaixo (T3)
            if (x == 310 && y == 170) mutex1.unlock(); // Sai da direita
            if (x == 60 && y == 150) mutex2.unlock(); // Sai de embaixo


            if (y == 30 && x < 330) x += 10;      // Topo: vai para direita

            else if (x == 330 && y < 170) y += 10; // Direita: vai para baixo

            else if (y == 170 && x > 60) x -= 10;  // Base: vai para esquerda

            else y -= 10;                         // Esquerda: vai para cima

            break;



        case 2: // TREM 2 (Topo Meio)

            if (x == 580 && y == 30) mutex6.lock(); // Entra na dir sup (T5)

            //  SOLUÇÃO DO DEADLOCK DIREITO: T2 pede a chave do T4 mais cedo!
            if (x == 600 && y == 140) mutex4.lock();
            if (x == 600 && y == 150) mutex7.lock(); // Entra na dir inf (T6)

            if (x == 600 && y == 190) mutex6.unlock(); // Sai da dir sup (T5)
            if (x == 580 && y == 220) mutex7.unlock(); // Sai da dir inf (T6)

            //  SOLUÇÃO DO DEADLOCK ESQUERDO: T2 pede a chave do T1 mais cedo!
            if (x == 370 && y == 220) mutex1.lock();
            if (x == 350 && y == 220) mutex3.lock(); // Entra na esq inf (T3)

            if (x == 330 && y == 200) mutex4.unlock(); // Sai de embaixo (T4)
            if (x == 330 && y == 150) mutex3.unlock(); // Sai da esq inf (T3)
            if (x == 350 && y == 30) mutex1.unlock(); // Sai da esq sup (T1)


            if (y == 30 && x < 600) x += 10;      // Topo: vai para direita

            else if (x == 600 && y < 220) y += 10; // Direita: vai para baixo

            else if (y == 220 && x > 330) x -= 10; // Base: vai para esquerda

            else y -= 10;                         // Esquerda: vai para cima

            break;



        case 5: // TREM 5 (Topo Direita) - Ajuste o 1000 conforme seu desenho

            //  SOLUÇÃO DO DEADLOCK CIRCULAR: Pede as duas chaves juntas lá na direita!
            if (x == 870 && y == 150) {
                mutex6.lock(); // Pede a chave do T2 de longe
                mutex9.lock(); // Pede a chave do T6
            }

            if (x == 600 && y == 150) mutex9.unlock(); // Sai de embaixo (T6)
            if (x == 620 && y == 30) mutex6.unlock(); // Sai da esquerda (T2)


            if (y == 30 && x < 870) x += 10;

            else if (x == 870 && y < 170) y += 10;

            else if (y == 170 && x > 600) x -= 10;

            else y -= 10;

            break;



        case 3: // TREM 3 (Baixo Esquerda)

            if (x == 60 && y == 190) mutex2.lock(); // Entra no topo (T1)
            if (x == 310 && y == 170) mutex3.lock(); // Entra na dir sup (T2)
            if (x == 330 && y == 190) mutex2.unlock(); // Sai do topo (T1)

            if (x == 330 && y == 200) mutex5.lock(); // Entra na dir inf (T4)
            if (x == 330 && y == 240) mutex3.unlock(); // Sai da dir sup (T2)

            if (x == 310 && y == 330) mutex5.unlock(); // Sai da dir inf (T4)


            if (y == 170 && x < 330) x += 10;       // Topo: vai para direita (grudado no T1)

            else if (x == 330 && y < 330) y += 10;  // Direita: vai para baixo

            else if (y == 330 && x > 60) x -= 10;   // Base: vai para esquerda (ajustado para 60)

            else y -= 10;                           // Esquerda: vai para cima

            break;



        case 4: // TREM 4 (Baixo Meio)

            // 🔥 SOLUÇÃO DO DEADLOCK ESQUERDO: T4 pede a chave do T2 lá embaixo!
            if (x == 350 && y == 330) {
                mutex4.lock(); // Pede a licença do trilho horizontal (T2) primeiro
                mutex5.lock(); // Pede a licença do trilho vertical (T3)
            }

            if (x == 350 && y == 220) mutex5.unlock(); // Sai da esquerda (T3)

            if (x == 580 && y == 220) mutex8.lock(); // Entra na direita (T6)
            if (x == 600 && y == 240) mutex4.unlock(); // Sai do topo (T2)

            if (x == 580 && y == 330) mutex8.unlock(); // Sai da direita (T6)


            if (y == 220 && x < 600) x += 10;       // Topo: vai para direita

            else if (x == 600 && y < 330) y += 10;  // Direita: vai para baixo

            else if (y == 330 && x > 330) x -= 10;  // Base: vai para esquerda (AQUI ESTAVA O ERRO: mudamos de 400 para 330)

            else y -= 10;                           // Esquerda: vai para cima

            break;



        case 6: // TREM 6 (Baixo Direita)

            if (x == 600 && y == 190) mutex9.lock(); // Entra no topo (T5)
            if (x == 620 && y == 170) mutex7.unlock(); // Sai da esq sup (T2)

            if (x == 870 && y == 190) mutex9.unlock(); // Sai do topo (T5)

            if (x == 620 && y == 330) mutex8.lock(); // Entra na esq inf (T4)
            if (x == 600 && y == 240) mutex7.lock(); // Entra na esq sup (T2)
            if (x == 600 && y == 200) mutex8.unlock(); // Sai da esq inf (T4)


            if (y == 170 && x < 870) x += 10;

            else if (x == 870 && y < 330) y += 10;

            else if (y == 330 && x > 600) x -= 10;

            else y -= 10;

            break;
        }
        emit updateGUI(ID, x, y);    // Envia a nova posição para a tela
        msleep(velocidade);          // Controla a velocidade
    }
}
}

void Trem::setVelocidade(int vol){
    velocidade = 201 - vol;
}



