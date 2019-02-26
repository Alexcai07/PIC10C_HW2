#include "grade_calculator.h"
#include "ui_grade_calculator.h"

grade_calculator::grade_calculator(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::grade_calculator)
{
    ui->setupUi(this);
}

grade_calculator::~grade_calculator()
{
    delete ui;
}
