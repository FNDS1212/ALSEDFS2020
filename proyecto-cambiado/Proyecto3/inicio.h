#ifndef INICIO_H
#define INICIO_H

#include <QWidget>
#include <QDialog>

namespace Ui {
class inicio;
}

class inicio : public QDialog
{
    Q_OBJECT

public:
    explicit inicio(QWidget *parent = 0);
    ~inicio();

private slots:
    void on_Registrarse_clicked();

    void on_ingreso_clicked();

private:
    Ui::inicio *ui;
};

#endif // INICIO_H
