#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void select_scheme_a();

    void select_scheme_b();

    void compute_sum();

private:
    Ui::MainWindow *ui;
    std::string selectedScheme;
};

#endif // MAINWINDOW_H
