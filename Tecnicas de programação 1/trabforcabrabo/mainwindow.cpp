#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    btns(nullptr),
    jogo(nullptr)
{
    ui->setupUi(this);
    jogo=new Jogo;
    btns=new QPushButton*[26];  //inicializar vetor de botoes
    criarBotoes();


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::btnClicked()
{
    QPushButton *btn=qobject_cast<QPushButton*>(sender());  //converter Qobjetc para QPushButton
    QString letra = btn->text();
    btn->setEnabled(false); //desabilitar botao
    QMessageBox::information(this, "Tecla pressionada", "A tecla "+letra+" foi pressionado");

}

void MainWindow::criarBotoes()
{
    int tb=35;  //tamanho da largura e altura
    QHBoxLayout *caxinha1H=new QHBoxLayout[2];
    QVBoxLayout *vertizin=new QVBoxLayout;

    QString Letras= "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    for (int l = 0, x=0 ; l < 2; ++l) {
        for (int i = 0; i < 13; ++i,x++) {
            QPushButton *btn=new QPushButton;
            btn->setText(Letras.at(x));
            btn->setMinimumWidth(tb);   //largura minima
            btn->setMinimumHeight(tb);   //altura minima
            btn->setMaximumWidth(tb);   //largura max
            btn->setMaximumHeight(tb);   //altura max
            (caxinha1H+l)->addWidget(btn);
            btns[x]=btn;
            connect(btn,SIGNAL(clicked()),this,SLOT(btnClicked()));
        }
        vertizin->addLayout(caxinha1H+l);   //adicionar o layout horizonatal no vertical
    }

    ui->botoesArea->setLayout(vertizin);

}

void MainWindow::habilitarBotoes()
{
    for (int i = 0; i < 26; ++i) {
        btns[i]->setEnabled(true);  //habilitar botoes
    }
}

void MainWindow::desabilitarBotoes()
{
    for (int i = 0; i < 26; ++i) {
        btns[i]->setEnabled(false); //desabilitar botoes
    }
}

void MainWindow::inicioJogo()
{
    habilitarBotoes();
    if (jogo) delete jogo;
    jogo=new Jogo;
    QString nome=QInputDialog::getText(this,"Game Start","Type your name");
}

void MainWindow::on_actionNew_Game_triggered()
{
    inicioJogo();
}
