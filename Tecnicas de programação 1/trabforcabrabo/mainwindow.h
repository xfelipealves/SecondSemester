#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>      //String do Qt
#include <QPushButton>  //include do botao
#include <QHBoxLayout>  //include do layout horizontal
#include <QVBoxLayout>  //include do layout vertical
#include <QMessageBox>  //janela de mensagem
#include <jogo.h>
#include <QInputDialog> //include da janela de entrada de dados

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void btnClicked();

    void on_actionNew_Game_triggered();

private:
    Ui::MainWindow *ui;
    QPushButton **btns; //vetor de botoes
    Jogo *jogo;
    void criarBotoes();
    void habilitarBotoes();
    void desabilitarBotoes();
    void inicioJogo();
};

#endif // MAINWINDOW_H
