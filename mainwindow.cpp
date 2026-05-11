#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Cria o trem com seu (ID, posição X, posição Y)
    trem1 = new Trem(1,60,30);
    trem2 = new Trem(2,400,30);
    trem3 = new Trem(3, 60, 220);
    trem4 = new Trem(4, 400, 330);
    trem5 = new Trem(5, 700, 30);
    trem6 = new Trem(6, 700, 330);

    /*
     * Conecta o sinal UPDATEGUI à função UPDATEINTERFACE.
     * Ou seja, sempre que o sinal UPDATEGUI foi chamado, será executada a função UPDATEINTERFACE.
     * Os 3 parâmetros INT do sinal serão utilizados na função.
     * Trem1 e Trem2 são os objetos que podem chamar o sinal. Se um outro objeto chamar o
     * sinal UPDATEGUI, não haverá execução da função UPDATEINTERFACE
     */
    connect(trem1,SIGNAL(updateGUI(int,int,int)),SLOT(updateInterface(int,int,int)));
    connect(trem2,SIGNAL(updateGUI(int,int,int)),SLOT(updateInterface(int,int,int)));
    connect(trem3, SIGNAL(updateGUI(int,int,int)), SLOT(updateInterface(int,int,int)));
    connect(trem4, SIGNAL(updateGUI(int,int,int)), SLOT(updateInterface(int,int,int)));
    connect(trem5, SIGNAL(updateGUI(int,int,int)), SLOT(updateInterface(int,int,int)));
    connect(trem6, SIGNAL(updateGUI(int,int,int)), SLOT(updateInterface(int,int,int)));
    connect(ui->slider_trem1, SIGNAL(valueChanged(int)), trem1, SLOT(setVelocidade(int)));
    connect(ui->slider_trem2, SIGNAL(valueChanged(int)), trem2, SLOT(setVelocidade(int)));
    connect(ui->slider_trem3, SIGNAL(valueChanged(int)), trem3, SLOT(setVelocidade(int)));
    connect(ui->slider_trem4, SIGNAL(valueChanged(int)), trem4, SLOT(setVelocidade(int)));
    connect(ui->slider_trem5, SIGNAL(valueChanged(int)), trem5, SLOT(setVelocidade(int)));
    connect(ui->slider_trem6, SIGNAL(valueChanged(int)), trem6, SLOT(setVelocidade(int)));

    // Inicia os trens automaticamente ao abrir o programa
    trem1->start();
    trem2->start();
    trem3->start();
    trem4->start();
    trem5->start();
    trem6->start();

}

//Função que será executada quando o sinal UPDATEGUI for emitido
void MainWindow::updateInterface(int id, int x, int y){
    switch(id){
    case 1: ui->label_trem1->setGeometry(x,y,21,17); break;
    case 2: ui->label_trem2->setGeometry(x,y,21,17); break;
    case 3: ui->label_trem3->setGeometry(x,y,21,17); break;
    case 4: ui->label_trem4->setGeometry(x,y,21,17); break;
    case 5: ui->label_trem5->setGeometry(x,y,21,17); break;
    case 6: ui->label_trem6->setGeometry(x,y,21,17); break;
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

