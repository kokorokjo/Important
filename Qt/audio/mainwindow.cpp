#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    MPlayer = new QMediaPlayer;
    AOutput = new QAudioOutput;
    MPlayer->setAudioOutput(AOutput);
    connect(MPlayer, SIGNAL(positionChanged(qint64)),this,SLOT(positionChanged(qint64)));


    ui->pushButton_Play->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));
    ui->pushButton_Pause->setIcon(style()->standardIcon(QStyle::SP_MediaPause));
    ui->pushButton_Stop->setIcon(style()->standardIcon(QStyle::SP_MediaStop));
    ui->pushButton_Seek_Back->setIcon(style()->standardIcon(QStyle::SP_MediaSeekBackward));
    ui->pushButton_Seek_Forward->setIcon(style()->standardIcon(QStyle::SP_MediaSeekForward));
    ui->pushButton_Mute->setIcon(style()->standardIcon(QStyle::SP_MediaVolume));

    ui->horizontalSlider_Audio_Volume->setMinimum(1);
    ui->horizontalSlider_Audio_Volume->setMaximum(100);
    ui->horizontalSlider_Audio_Volume->setValue(60);

    AOutput->setVolume(ui->horizontalSlider_Audio_Volume->value()/10);

    connect(MPlayer, &QMediaPlayer::durationChanged,this,&MainWindow::durationChanged);
    connect(MPlayer, &QMediaPlayer::positionChanged,this,&MainWindow::positionChanged);

    ui->horizontalSlider_Audio_File_Duration->setRange(0,MPlayer->duration()/1000);

    // AOutput->setVolume(ui->horizontalSlider_Audio_Volume->value());


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::durationChanged(qint64 duration)
{
    Mduration = duration /1000;
    ui->horizontalSlider_Audio_File_Duration->setMaximum(Mduration);
}

void MainWindow::positionChanged(qint64 progress)
{
    if(!ui->horizontalSlider_Audio_File_Duration->isSliderDown()){
        ui->horizontalSlider_Audio_File_Duration->setValue(progress/1000);
    }
    updateduration(progress/1000);

}
void MainWindow::updateduration(qint64 duration)
{
    QString timestr;
    if (duration || Mduration){
        QTime CurrentTime((duration/3600)%60,(duration/60)%60,duration %60,(duration*1000)%1000);
        QTime totalTime((Mduration/3600)%60,(Mduration/60)%60,Mduration %60,(Mduration*1000)%1000);
        QString format = "mm:ss";
        if(Mduration>3600)
            format = "hh:mm:ss";
        ui->label_Value_1->setText(CurrentTime.toString(format));
        ui->label_Value_2->setText(totalTime.toString(format));
    }

}

void MainWindow::on_pushButton_Mute_clicked()
{
    if( IS_Muted==false){
        ui->pushButton_Mute->setIcon(style()->standardIcon(QStyle::SP_MediaVolumeMuted));
        IS_Muted = true;
        AOutput->setMuted(true);
    }
    else{
        ui->pushButton_Mute->setIcon(style()->standardIcon(QStyle::SP_MediaVolume));
        IS_Muted= false;
        AOutput->setMuted(false);
    }
}

void MainWindow::on_pushButton_Start_clicked()
{
    MPlayer->setSource(QUrl("qrc:/sounds/7-Secret Oktober 31st.mp3"));

    QFileInfo fileInfo("7-Secret Oktober 31st.mp3");
    ui->label_File_Name->setText(fileInfo.fileName());

}




void MainWindow::on_pushButton_Play_clicked()
{

    MPlayer->play();

}

void MainWindow::on_pushButton_Pause_clicked()
{
    MPlayer->pause();

}


void MainWindow::on_pushButton_Stop_clicked()
{
    MPlayer->stop();
}


void MainWindow::on_pushButton_Seek_Back_clicked()
{

}


void MainWindow::on_pushButton_Seek_Forward_clicked()
{

}


void MainWindow::on_horizontalSlider_Audio_File_Duration_valueChanged(int value)
{
    MPlayer->setPosition(value * 1000);
}


void MainWindow::on_horizontalSlider_Audio_Volume_valueChanged(int value)
{
    AOutput->setVolume(value/10);
}



