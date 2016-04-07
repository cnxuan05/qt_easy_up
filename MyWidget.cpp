#include "MyWidget.h"
#include <QApplication>

#include <QLabel>
#include <QPushButton>
#include <QLineEdit>

#include <QComboBox>
#include <QCheckBox>
#include <QRadioButton>
#include <QTextEdit>
#include <QTextBrowser>
#include <QGroupBox>
#include <QSlider>
#include <QSpinBox>
#include <QProcess>
#include <QDateTimeEdit>
#include <QTimeEdit>


MyWidget::MyWidget(QWidget *parent) : QWidget(parent)
{

}



int main(int argc,char **argv)
{

    QApplication app(argc,argv);

    MyWidget w;
    w.show();


    return app.exec();
}
