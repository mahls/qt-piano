#include "pianowindow.h"
#include "ui_pianowindow.h"
#include <QPushButton>
#include <QMessageBox>
#include <QSoundEffect>


pianoWindow::pianoWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::pianoWindow)
{
    ui->setupUi(this);

    //Make buttons
    for(int i = 0; i < 12; i++)
    {
        QPushButton *button = new QPushButton("", this);
        pushBtnArr[i] = button;
        button->move(i*66+180, 110);
        button->setFixedWidth(65);
        button->setMinimumHeight(310);
    }

    //white keys style and text
    pushBtnArr[0]->setStyleSheet("background-color:"); pushBtnArr[0]->setText("C");
    pushBtnArr[1]->setStyleSheet("background-color: "); pushBtnArr[1]->setText("D");
    pushBtnArr[2]->setStyleSheet("background-color: "); pushBtnArr[2]->setText("E");
    pushBtnArr[3]->setStyleSheet("background-color: "); pushBtnArr[3]->setText("F");
    pushBtnArr[4]->setStyleSheet("background-color: "); pushBtnArr[4]->setText("G");
    pushBtnArr[5]->setStyleSheet("background-color: "); pushBtnArr[5]->setText("A");
    pushBtnArr[6]->setStyleSheet("background-color: "); pushBtnArr[6]->setText("B");

    //black keys color, text and position
    pushBtnArr[7]->setStyleSheet("background-color: rgb(26, 29, 29); color: white"); pushBtnArr[7]->setText("C#"); pushBtnArr[7]->move(237-10,110);
    pushBtnArr[8]->setStyleSheet("background-color: rgb(26, 29, 29); color: white"); pushBtnArr[8]->setText("D#"); pushBtnArr[8]->move(304-10,110);
    pushBtnArr[9]->setStyleSheet("background-color: rgb(26, 29, 29); color: white"); pushBtnArr[9]->setText("F#"); pushBtnArr[9]->move(433-10,110);
    pushBtnArr[10]->setStyleSheet("background-color: rgb(26, 29, 29); color: white"); pushBtnArr[10]->setText("G#"); pushBtnArr[10]->move(500-10,110);
    pushBtnArr[11]->setStyleSheet("background-color: rgb(26, 29, 29); color: white"); pushBtnArr[11]->setText("A#"); pushBtnArr[11]->move(567-10,110);

    //black keys width and height
    pushBtnArr[7]->setFixedWidth(37); pushBtnArr[7]->setFixedHeight(225);
    pushBtnArr[8]->setFixedWidth(37); pushBtnArr[8]->setFixedHeight(225);
    pushBtnArr[9]->setFixedWidth(37); pushBtnArr[9]->setFixedHeight(225);
    pushBtnArr[10]->setFixedWidth(37); pushBtnArr[10]->setFixedHeight(225);
    pushBtnArr[11]->setFixedWidth(37); pushBtnArr[11]->setFixedHeight(225);

    //set window fixed size
    this->setFixedWidth(800);
    this->setFixedHeight(500);


    connect(pushBtnArr[0], &QPushButton::clicked, this, &pianoWindow::buttonClickedc);
    connect(pushBtnArr[1], &QPushButton::clicked, this, &pianoWindow::buttonClickedd);
    connect(pushBtnArr[2], &QPushButton::clicked, this, &pianoWindow::buttonClickede);
    connect(pushBtnArr[3], &QPushButton::clicked, this, &pianoWindow::buttonClickedf);
    connect(pushBtnArr[4], &QPushButton::clicked, this, &pianoWindow::buttonClickedg);
    connect(pushBtnArr[5], &QPushButton::clicked, this, &pianoWindow::buttonClickeda);
    connect(pushBtnArr[6], &QPushButton::clicked, this, &pianoWindow::buttonClickedb);

    connect(pushBtnArr[7], &QPushButton::clicked, this, &pianoWindow::buttonClickedcs);
    connect(pushBtnArr[8], &QPushButton::clicked, this, &pianoWindow::buttonClickedds);
    connect(pushBtnArr[9], &QPushButton::clicked, this, &pianoWindow::buttonClickedfs);
    connect(pushBtnArr[10], &QPushButton::clicked, this, &pianoWindow::buttonClickedgs);
    connect(pushBtnArr[11],&QPushButton::clicked, this, &pianoWindow::buttonClickedas);

    loadSounds();
}
//end constructor

pianoWindow::~pianoWindow()
{
    delete ui;
}

void pianoWindow::buttonClickedc(){c_sound.play();}
void pianoWindow::buttonClickedd(){d_sound.play();}
void pianoWindow::buttonClickede(){e_sound.play();}
void pianoWindow::buttonClickedf(){f_sound.play();}
void pianoWindow::buttonClickedg(){g_sound.play();}
void pianoWindow::buttonClickeda(){a_sound.play();}
void pianoWindow::buttonClickedb(){b_sound.play();}

void pianoWindow::buttonClickedcs(){cs_sound.play();}
void pianoWindow::buttonClickedds(){ds_sound.play();}
void pianoWindow::buttonClickedfs(){fs_sound.play();}
void pianoWindow::buttonClickedgs(){gs_sound.play();}
void pianoWindow::buttonClickedas(){as_sound.play();}

void pianoWindow::loadSounds()
{
    c_sound.setSource(QUrl::fromLocalFile("/home/matthew/Documents/QT/piano/sounds/C.wav"));
    c_sound.setVolume(1.0f);

    d_sound.setSource(QUrl::fromLocalFile("/home/matthew/Documents/QT/piano/sounds/D.wav"));
    d_sound.setVolume(1.0f);

    e_sound.setSource(QUrl::fromLocalFile("/home/matthew/Documents/QT/piano/sounds/E.wav"));
    e_sound.setVolume(1.0f);

    f_sound.setSource(QUrl::fromLocalFile("/home/matthew/Documents/QT/piano/sounds/F.wav"));
    f_sound.setVolume(1.0f);

    g_sound.setSource(QUrl::fromLocalFile("/home/matthew/Documents/QT/piano/sounds/G.wav"));
    g_sound.setVolume(1.0f);

    a_sound.setSource(QUrl::fromLocalFile("/home/matthew/Documents/QT/piano/sounds/A.wav"));
    a_sound.setVolume(1.0f);

    b_sound.setSource(QUrl::fromLocalFile("/home/matthew/Documents/QT/piano/sounds/B.wav"));
    b_sound.setVolume(1.0f);

    ds_sound.setSource(QUrl::fromLocalFile("/home/matthew/Documents/QT/piano/sounds/DSharp.wav"));
    ds_sound.setVolume(1.0f);

    fs_sound.setSource(QUrl::fromLocalFile("/home/matthew/Documents/QT/piano/sounds/FSharp.wav"));
    fs_sound.setVolume(1.0f);

    gs_sound.setSource(QUrl::fromLocalFile("/home/matthew/Documents/QT/piano/sounds/GSharp.wav"));
    gs_sound.setVolume(1.0f);

    as_sound.setSource(QUrl::fromLocalFile("/home/matthew/Documents/QT/piano/sounds/ASharp.wav"));
    as_sound.setVolume(1.0f);

    cs_sound.setSource(QUrl::fromLocalFile("/home/matthew/Documents/QT/piano/sounds/CSharp.wav"));
    cs_sound.setVolume(1.0f);
}



