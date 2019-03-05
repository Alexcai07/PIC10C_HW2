#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<algorithm>



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QObject::connect( ui->spinBox_1 ,SIGNAL( valueChanged(int) ),
                          this, SLOT( compute_sum() )  );
    QObject::connect( ui->spinBox_2 ,SIGNAL( valueChanged(int) ),
                          this, SLOT( compute_sum() ) );
    QObject::connect( ui->spinBox_3 ,SIGNAL( valueChanged(int) ),
                          this, SLOT( compute_sum() )  );
    QObject::connect( ui->spinBox_4 ,SIGNAL( valueChanged(int) ),
                          this, SLOT( compute_sum() ) );
    QObject::connect( ui->spinBox_5 ,SIGNAL( valueChanged(int) ),
                          this, SLOT( compute_sum() )  );
    QObject::connect( ui->spinBox_6 ,SIGNAL( valueChanged(int) ),
                          this, SLOT( compute_sum() ) );
    QObject::connect( ui->spinBox_7 ,SIGNAL( valueChanged(int) ),
                          this, SLOT( compute_sum() )  );
    QObject::connect( ui->spinBox_8 ,SIGNAL( valueChanged(int) ),
                          this, SLOT( compute_sum() ) );
    QObject::connect( ui->spinBox_9 ,SIGNAL( valueChanged(int) ),
                          this, SLOT( compute_sum() )  );
    QObject::connect( ui->spinBox_10 ,SIGNAL( valueChanged(int) ),
                          this, SLOT( compute_sum() ) );
    QObject::connect( ui->spinBox_11 ,SIGNAL( valueChanged(int) ),
                          this, SLOT( compute_sum() )  );
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::select_scheme_a()
{
    selectedScheme = "schemeA";
}

void MainWindow::select_scheme_b()
{
    selectedScheme = "schemeB";
}



void MainWindow::compute_sum()
{
    double HWscore = (ui->spinBox_1->value()+ui->spinBox_2->value()+ui->spinBox_3->value()+ui->spinBox_4->value()+
             ui->spinBox_5->value()+ui->spinBox_6->value()+ui->spinBox_7->value()+ui->spinBox_8->value())/32.0;
    double Totalscore=0;
    if (selectedScheme == "schemeA")
    {
         Totalscore = HWscore+0.2*ui->spinBox_9->value()+0.2*ui->spinBox_10->value()+0.35*ui->spinBox_11->value();
    }

    if (selectedScheme == "schemeB")
    {
         Totalscore = HWscore+std::max(0.3*ui->spinBox_9->value(),0.3*ui->spinBox_10->value())+0.44*ui->spinBox_11->value();
    }

    ui->textBrowser->setText(QString::number(Totalscore));
}
