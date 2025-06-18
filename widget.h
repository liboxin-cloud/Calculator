#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QMessageBox>
#include <QString>
#include <QTimer>
#include <QDateTime>
#include <QLabel>



QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_pushButton_1_clicked();
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_0_clicked();
    void ShowText();

    void on_addButton_clicked();

    QString AddNum();
    QString SubNum();
    QString MutiNum();
    QString DevNum();
    QString UnsignedSub();
    QString UnsignedAdd();


    void on_retButton_clicked();

    void on_backButton_clicked();


    void on_ACButton_clicked();

    void on_subButton_clicked();

    void on_mutiButton_clicked();

    void on_devButton_clicked();

    void on_pushButton_clicked();

private:
    bool IsInput;
    bool AddOperator;
    bool SubOperator;
    bool DevOperator;
    bool MutiOperator;
    bool IsOperator;
    bool IsLessThan();
    bool CheckNumZero(QString& num);
    int compareUnsigned(const QString& a, const QString& b);
    bool CheckIsLegal(QString& num);
    void UpdateTime();


private:
    Ui::Widget *ui;
private:
    QString num1;
    QString num2;
    QTimer *timer;


};
#endif // WIDGET_H
