#ifndef PIANOWINDOW_H
#define PIANOWINDOW_H
#include <QMainWindow>
#include <QSoundEffect>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui { class pianoWindow; }
QT_END_NAMESPACE

class pianoWindow : public QMainWindow
{
    Q_OBJECT

public:
    pianoWindow(QWidget *parent = nullptr);
    ~pianoWindow();

private:
    Ui::pianoWindow *ui;

    void buttonClickedc();
    void buttonClickedd();
    void buttonClickede();
    void buttonClickedf();
    void buttonClickedg();
    void buttonClickeda();
    void buttonClickedb();

    void buttonClickedcs();
    void buttonClickedds();
    void buttonClickedfs();
    void buttonClickedgs();
    void buttonClickedas();

    void loadSounds();

    QPushButton *pushBtnArr[12];

    QSoundEffect c_sound;
    QSoundEffect d_sound;
    QSoundEffect e_sound;
    QSoundEffect f_sound;
    QSoundEffect g_sound;
    QSoundEffect a_sound;
    QSoundEffect b_sound;

    QSoundEffect cs_sound;
    QSoundEffect ds_sound;
    QSoundEffect fs_sound;
    QSoundEffect gs_sound;
    QSoundEffect as_sound;

};

#endif
