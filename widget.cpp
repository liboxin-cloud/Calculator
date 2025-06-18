#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    setWindowTitle("Calulator");

    setWindowFlags(windowFlags() | Qt::MSWindowsFixedSizeDialogHint);
    num1 = "0";
    num2 = "";

    QTimer* timer = new QTimer(this);

    IsInput = false;
    AddOperator = false;
    SubOperator = false;
    DevOperator = false;
    MutiOperator = false;
    IsOperator = false;

    ui->lineEdit->setText(num1);
    ui->lineEdit->setReadOnly(true);


    connect(ui->retButton, &QPushButton::clicked, this, &Widget::ShowText);
    connect(timer, &QTimer::timeout, this, &Widget::UpdateTime);
    timer->start(1000);

    UpdateTime();

}

Widget::~Widget()
{
    delete ui;
}




void Widget::on_pushButton_1_clicked()
{
    if(IsInput)
    {
        if(!CheckIsLegal(num2))
        {
            QMessageBox::warning(this, "Warning", "Overflow the max size!!!");
            return;

        }
        if(CheckNumZero(num2))
        {
            num2.clear();
        }
        num2 += QString::number(1);
        ui->lineEdit->setText(num2);
        return;
    }
    if(!CheckIsLegal(num1))
    {
        QMessageBox::warning(this, "Warning", "Overflow the max size!!!");
        return;

    }
    if(CheckNumZero(num1))
    {
        num1.clear();
    }
    num1 += QString::number(1);
    ui->lineEdit->setText(num1);

}

void Widget::on_pushButton_2_clicked()
{
    if(IsInput)
    {
        if(!CheckIsLegal(num2))
        {
            QMessageBox::warning(this, "Warning", "Overflow the max size!!!");
            return;

        }
        if(CheckNumZero(num2))
        {
            num2.clear();
        }
        num2 += QString::number(2);
        ui->lineEdit->setText(num2);
        return;
    }
    if(!CheckIsLegal(num1))
    {
        QMessageBox::warning(this, "Warning", "Overflow the max size!!!");
        return;

    }
    if(CheckNumZero(num1))
    {
        num1.clear();
    }
    num1 += QString::number(2);
    ui->lineEdit->setText(num1);
}


void Widget::on_pushButton_3_clicked()
{
    if(IsInput)
    {
        if(!CheckIsLegal(num2))
        {
            QMessageBox::warning(this, "Warning", "Overflow the max size!!!");
            return;

        }
        if(CheckNumZero(num2))
        {
            num2.clear();
        }
        num2 += QString::number(3);
        ui->lineEdit->setText(num2);
        return;
    }
    if(!CheckIsLegal(num1))
    {
        QMessageBox::warning(this, "Warning", "Overflow the max size!!!");
        return;

    }
    if(CheckNumZero(num1))
    {
        num1.clear();
    }
    num1 += QString::number(3);
    ui->lineEdit->setText(num1);
}


void Widget::on_pushButton_4_clicked()
{
    if(IsInput)
    {
        if(!CheckIsLegal(num2))
        {
            QMessageBox::warning(this, "Warning", "Overflow the max size!!!");
            return;

        }
        if(CheckNumZero(num2))
        {
            num2.clear();
        }
        num2 += QString::number(4);
        ui->lineEdit->setText(num2);
        return;
    }
    if(!CheckIsLegal(num1))
    {
        QMessageBox::warning(this, "Warning", "Overflow the max size!!!");
        return;

    }
    if(CheckNumZero(num1))
    {
        num1.clear();
    }
    num1 += QString::number(4);
    ui->lineEdit->setText(num1);
}


void Widget::on_pushButton_5_clicked()
{
    if(IsInput)
    {
        if(!CheckIsLegal(num2))
        {
            QMessageBox::warning(this, "Warning", "Overflow the max size!!!");
            return;

        }
        if(CheckNumZero(num2))
        {
            num2.clear();
        }
        num2 += QString::number(5);
        ui->lineEdit->setText(num2);
        return;
    }
    if(!CheckIsLegal(num1))
    {
        QMessageBox::warning(this, "Warning", "Overflow the max size!!!");
        return;

    }
    if(CheckNumZero(num1))
    {
        num1.clear();
    }
    num1 += QString::number(5);
    ui->lineEdit->setText(num1);
}


void Widget::on_pushButton_6_clicked()
{
    if(IsInput)
    {
        if(!CheckIsLegal(num2))
        {
            QMessageBox::warning(this, "Warning", "Overflow the max size!!!");
            return;

        }
        if(CheckNumZero(num2))
        {
            num2.clear();
        }
        num2 += QString::number(6);
        ui->lineEdit->setText(num2);
        return;
    }
    if(!CheckIsLegal(num1))
    {
        QMessageBox::warning(this, "Warning", "Overflow the max size!!!");
        return;

    }
    if(CheckNumZero(num1))
    {
        num1.clear();
    }
    num1 += QString::number(6);
    ui->lineEdit->setText(num1);
}


void Widget::on_pushButton_7_clicked()
{
    if(IsInput)
    {
        if(!CheckIsLegal(num2))
        {
            QMessageBox::warning(this, "Warning", "Overflow the max size!!!");
            return;

        }
        if(CheckNumZero(num2))
        {
            num2.clear();
        }
        num2 += QString::number(7);
        ui->lineEdit->setText(num2);
        return;
    }
    if(!CheckIsLegal(num1))
    {
        QMessageBox::warning(this, "Warning", "Overflow the max size!!!");
        return;

    }
    if(CheckNumZero(num1))
    {
        num1.clear();
    }
    num1 += QString::number(7);
    ui->lineEdit->setText(num1);
}


void Widget::on_pushButton_8_clicked()
{
    if(IsInput)
    {
        if(!CheckIsLegal(num2))
        {
            QMessageBox::warning(this, "Warning", "Overflow the max size!!!");
            return;

        }
        if(CheckNumZero(num2))
        {
            num2.clear();
        }
        num2 += QString::number(8);
        ui->lineEdit->setText(num2);
        return;
    }
    if(!CheckIsLegal(num1))
    {
        QMessageBox::warning(this, "Warning", "Overflow the max size!!!");
        return;

    }
    if(CheckNumZero(num1))
    {
        num1.clear();
    }
    num1 += QString::number(8);
    ui->lineEdit->setText(num1);
}


void Widget::on_pushButton_9_clicked()
{
    if(IsInput)
    {
        if(!CheckIsLegal(num2))
        {
            QMessageBox::warning(this, "Warning", "Overflow the max size!!!");
            return;

        }
        if(CheckNumZero(num2))
        {
            num2.clear();
        }
        num2 += QString::number(9);
        ui->lineEdit->setText(num2);
        return;
    }
    if(!CheckIsLegal(num1))
    {
        QMessageBox::warning(this, "Warning", "Overflow the max size!!!");
        return;

    }
    if(CheckNumZero(num1))
    {
        num1.clear();
    }
    num1 += QString::number(9);
    ui->lineEdit->setText(num1);
}


void Widget::on_pushButton_0_clicked()
{
    if(IsInput)
    {
        if(num2 == "0")
        {
            return;
        }
        if(!CheckIsLegal(num2))
        {
            QMessageBox::warning(this, "Warning", "Overflow the max size!!!");
            return;

        }
        num2 += QString::number(0);
        ui->lineEdit->setText(num2);
        return;
    }
    if(num1 == "0")
    {
        return;

    }
    if(!CheckIsLegal(num1))
    {
        QMessageBox::warning(this, "Warning", "The max size of the num is 16");
        return;

    }
    num1 += QString::number(0);
    ui->lineEdit->setText(num1);

}

void Widget::ShowText()
{
    QString ret;
    if(AddOperator)
    {
        ret = AddNum();
        ui->lineEdit->setText(ret);
        num1 = ret;
        num2.clear();
        AddOperator = false;
        IsInput = false;


    }
    if(SubOperator)
    {
        ret = SubNum();
        ui->lineEdit->setText(ret);
        num1 = ret;
        num2.clear();
        SubOperator = false;
        IsInput = false;

    }
    if(MutiOperator)
    {
        ret = MutiNum();
        ui->lineEdit->setText(ret);
        num1 = ret;
        num2.clear();
        MutiOperator = false;
        IsInput = false;

    }
    if(DevOperator)
    {
        ret = DevNum();
        ui->lineEdit->setText(ret);
        num1 = ret;
        num2.clear();
        DevOperator = false;
        IsInput = false;

    }
}



void Widget::on_addButton_clicked()
{
    if(IsOperator)
    {
        return;

    }
    AddOperator = true;
    IsInput = true;

}

QString Widget::AddNum()
{
    // 处理空值
    if(num1.isEmpty()) num1 = "0";
    if(num2.isEmpty()) num2 = "0";

    // 判断符号
    bool num1Negative = num1.startsWith('-');
    bool num2Negative = num2.startsWith('-');

    // 情况1: 正 + 正
    if(!num1Negative && !num2Negative)
    {
        return UnsignedAdd();
    }
    // 情况2: 负 + 负
    else if(num1Negative && num2Negative)
    {
        num1 = num1.mid(1);
        num2 = num2.mid(1);
        return "-" + UnsignedAdd();
    }
    // 情况3: 正 + 负 = 正 - 正
    else if(!num1Negative && num2Negative)
    {
        num2 = num2.mid(1);
        return SubNum(); // 调用减法
    }
    // 情况4: 负 + 正 = 正 - 正
    else
    {
        num1 = num1.mid(1);
        QString result = SubNum(); // 交换后的减法
        return result.startsWith('-') ? result.mid(1) : "-" + result;
    }
}

QString Widget::SubNum()
{
    if(num1.isEmpty()) num1 = "0";
    if(num2.isEmpty()) num2 = "0";

    // 判断符号
    bool num1Negative = num1.startsWith('-');
    bool num2Negative = num2.startsWith('-');

    // 情况1: 正数 - 正数 (num1 - num2)
    if(!num1Negative && !num2Negative)
    {
        if(IsLessThan())
        {  // num1 < num2
            std::swap(num1, num2);
            QString result = UnsignedSub();
            return result.isEmpty() ? "0" : "-" + result;
        }
        return UnsignedSub();
    }
    // 情况2: 负数 - 正数 = -(num1 + num2)
    else if(num1Negative && !num2Negative)
    {
        QString absNum1 = num1.mid(1);
        num1 = absNum1;
        QString result = AddNum(); // 调用成员函数版加法
        return "-" + result;
    }
    // 情况3: 正数 - 负数 = num1 + num2
    else if(!num1Negative && num2Negative)
    {
        QString absNum2 = num2.mid(1);
        num2 = absNum2;
        return AddNum();
    }
    // 情况4: 负数 - 负数 = num2 - num1 (去掉负号)
    else
    {
        QString absNum1 = num1.mid(1);
        QString absNum2 = num2.mid(1);
        num1 = absNum2;
        num2 = absNum1;
        return UnsignedSub();
    }

}

QString Widget::MutiNum()
{
    if(num1 == "0" || num2 == "0")
    {
        return "0";
    }

    //判断符号
    bool num1Negative = num1.startsWith('-');
    bool num2Negative = num2.startsWith('-');
    bool resultNegative = (num1Negative != num2Negative);

    //获取绝对值
    QString absNum1 = num1Negative ? num1.mid(1) : num1;
    QString absNum2 = num2Negative ? num2.mid(1) : num2;


    //计算绝对值的乘积
    int m = absNum1.length();
    int n = absNum2.length();

    QVector<int> pos(m + n, 0);
    for(int i = m - 1;i >= 0;i--)
    {
        for(int j = n - 1;j >= 0;j--)
        {
            int mul = (absNum1[i].digitValue()) * (absNum2[j].digitValue());
            int sum = mul + pos[i + j + 1];

            pos[i + j] += sum / 10;
            pos[i + j + 1] = sum % 10;

        }
    }
    QString result;
    for(int p : pos)
    {
        if(!(result.isEmpty() && p == 0))
        {
            result.append(QString::number(p));

        }
    }
    if(result.isEmpty())
    {
        return "0";
    }
    return resultNegative ? "-" + result : result;


}

QString Widget::DevNum()
{
    // 错误处理
    if (num2 == "0") {
        return "Error!!!";
    }
    if (num1 == "0") {
        return "0";
    }

    // 保存原始值
    QString originalNum1 = num1;
    QString originalNum2 = num2;

    // 处理符号
    bool negative = (num1.startsWith('-') != num2.startsWith('-'));
    if (num1.startsWith('-')) num1 = num1.mid(1);
    if (num2.startsWith('-')) num2 = num2.mid(1);

    // 初始化
    QString result;
    QString current;
    int precision = 13; // 小数位数
    bool decimalAdded = false;
    bool hasNonZeroDigit = false; // 标记是否已经遇到非零数字

    // 处理整数部分
    for (int i = 0; i < num1.length(); i++) {
        current += num1[i];

        // 去除前导零
        while (current.length() > 1 && current[0] == '0') {
            current.remove(0, 1);
        }

        int digit = 0;
        QString tempNum2 = num2;
        QString tempCurrent = current;

        while (compareUnsigned(tempCurrent, tempNum2) >= 0) {
            num1 = tempCurrent;
            num2 = tempNum2;
            tempCurrent = UnsignedSub();
            digit++;
            num1 = originalNum1;
            num2 = originalNum2;
        }

        // 只有当已经遇到非零数字或当前digit非零时才添加到结果
        if (hasNonZeroDigit || digit != 0) {
            result += QString::number(digit);
            hasNonZeroDigit = true;
        }

        current = tempCurrent;
    }

    // 如果整数部分全为零，补一个0
    if (result.isEmpty()) {
        result = "0";
    }

    // 处理小数部分
    if (current != "0") {
        result += ".";
        decimalAdded = true;

        for (int i = 0; i < precision && current != "0"; i++) {
            current += "0";

            int digit = 0;
            QString tempNum2 = num2;
            QString tempCurrent = current;

            while (compareUnsigned(tempCurrent, tempNum2) >= 0) {
                num1 = tempCurrent;
                num2 = tempNum2;
                tempCurrent = UnsignedSub();
                digit++;
                num1 = originalNum1;
                num2 = originalNum2;
            }

            result += QString::number(digit);
            current = tempCurrent;
        }
    }

    // 恢复原始值
    num1 = originalNum1;
    num2 = originalNum2;

    // 添加符号
    if (negative && result != "0") {
        result.prepend('-');
    }

    return result;
}

QString Widget::UnsignedSub()
{
    // 确保num1 >= num2
    while(num2.length() < num1.length())
    {
        num2.prepend('0');
    }

    QString result;
    int borrow = 0;
    for(int i = num1.length() - 1; i >= 0; i--)
    {
        int digit1 = num1[i].digitValue();
        int digit2 = num2[i].digitValue();
        digit1 -= borrow;
        borrow = 0;

        if(digit1 < digit2)
        {
            digit1 += 10;
            borrow = 1;
        }
        result.prepend(QString::number(digit1 - digit2));
    }

    // 去除前导零
    while(result.length() > 1 && result[0] == '0')
    {
        result.remove(0, 1);
    }
    return result.isEmpty() ? "0" : result;
}

QString Widget::UnsignedAdd()
{
    while(num1.length() > 1 && num1[0] == '0') num1.remove(0, 1);
    while(num2.length() > 1 && num2[0] == '0') num2.remove(0, 1);

    // 补零对齐
    while(num1.length() < num2.length()) num1.prepend('0');
    while(num2.length() < num1.length()) num2.prepend('0');

    QString result;
    int carry = 0;
    for(int i = num1.length() - 1; i >= 0; i--)
    {
        int sum = num1[i].digitValue() + num2[i].digitValue() + carry;
        result.prepend(QString::number(sum % 10));
        carry = sum / 10;
    }

    if(carry > 0)
    {
        result.prepend(QString::number(carry));
    }

    return result.isEmpty() ? "0" : result;
}


void Widget::on_retButton_clicked()
{

}


void Widget::on_backButton_clicked()
{
    if(IsInput)
    {
        num2.remove(num2.size() - 1, 1);
        if(num2.size() == 0)
        {
            num2 = "0";
        }
        ui->lineEdit->setText(num2);
        return;
    }
    num1.remove(num1.size() - 1, 1);
    if(num1.size() == 0)
    {
        num1 = "0";

    }
    ui->lineEdit->setText(num1);
}





void Widget::on_ACButton_clicked()
{
    num1.clear();
    num2.clear();
    num1 = "0";

    IsInput = false;

    ui->lineEdit->clear();
    ui->lineEdit->setText(num1);

}


void Widget::on_subButton_clicked()
{
    if(IsOperator)
    {
        return;

    }
    IsInput = true;
    SubOperator = true;
}

bool Widget::IsLessThan()
{
    QString a = num1;
    QString b = num2;

    // 处理负数情况
    bool aNegative = a.startsWith('-');
    bool bNegative = b.startsWith('-');

    if(aNegative != bNegative)
    {
        return aNegative; // 负数 < 正数
    }

    // 同号情况比较绝对值
    if(aNegative)
    {
        a = a.mid(1);
        b = b.mid(1);
    }

    // 去除前导零
    while(a.length() > 1 && a[0] == '0') a.remove(0, 1);
    while(b.length() > 1 && b[0] == '0') b.remove(0, 1);

    // 比较长度
    if(a.length() != b.length())
    {
        return aNegative ? (a.length() > b.length())
                         : (a.length() < b.length());
    }

    // 逐位比较
    for(int i = 0; i < a.length(); i++)
    {
        if(a[i] != b[i])
        {
            return aNegative ? (a[i].digitValue() > b[i].digitValue())
                             : (a[i].digitValue() < b[i].digitValue());
        }
    }

    return false; // 相等

}

bool Widget::CheckNumZero(QString &num)
{
    if(num == "0")
    {
        return true;
    }
    return false;
}

int Widget::compareUnsigned(const QString &a, const QString &b)
{
    // 去除前导零
    QString aClean = a;
    QString bClean = b;
    while (aClean.length() > 1 && aClean[0] == '0') aClean.remove(0, 1);
    while (bClean.length() > 1 && bClean[0] == '0') bClean.remove(0, 1);

    if (aClean.length() > bClean.length()) return 1;
    if (aClean.length() < bClean.length()) return -1;

    for (int i = 0; i < aClean.length(); i++) {
        if (aClean[i] > bClean[i]) return 1;
        if (aClean[i] < bClean[i]) return -1;
    }

    return 0;
}

bool Widget::CheckIsLegal(QString &num)
{
    if(num.length() > 16)
    {
        return false;
    }
    return true;
}

void Widget::UpdateTime()
{
    QString currentTime = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");
    ui->timeLabel->setText(currentTime);

}


void Widget::on_mutiButton_clicked()
{
    if(IsOperator)
    {
        return;
    }
    IsInput = true;
    MutiOperator = true;

}


void Widget::on_devButton_clicked()
{
    if(IsOperator)
    {
        return;
    }
    IsInput = true;
    DevOperator = true;
}


void Widget::on_pushButton_clicked()
{

    QMessageBox::information(this, "About", "This is a simle calculator demo made by lbx.\n If you have any questions,please contact writer at 3551839250@qq.com.\n");

}
