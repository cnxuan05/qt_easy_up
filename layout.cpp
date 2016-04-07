/*

version.03

*/
#include <QApplication>
#include <QLabel>
#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QCompleter>
#include <QVBoxLayout>
#include <QHBoxLayout>

int main2(int argc,char *argv[])
{

    QApplication app(argc,argv);

    QWidget w;

    QLineEdit edit;
    //edit.show();
    //edit.setParent(&w);

    QCompleter completer(QStringList() << "abc" << "123" << "qwe");
    completer.setFilterMode(Qt::MatchContains);
    edit.setCompleter(&completer);


    w.show();



    QPushButton button;
    button.setText("Button");

    button.setParent(&w);
    //button.show();

    button.setGeometry(10,90,200,200);
#if 0
    QHBoxLayout layout;
    layout.addStretch(1);
    layout.addWidget(&edit,30);
    layout.addSpacing(100);
    layout.addWidget(&button,10);
    layout.addStretch(1);
    w.setLayout(&layout);
#endif

    QGridLayout layout;

    QLineEdit* password;
    layout.setColumnStretch(3,1);
    layout.setRowStretch(4,1);
    layout.setColumnStretch(0,1);
    layout.setRowStretch(0,1);

    layout.addWidget(new QLabel("Username:"),1,1);
    layout.addWidget(new QLineEdit(),1,2);
    layout.addWidget(new QLabel("Password:"),2,1);
    layout.addWidget(password = new QLineEdit(),2,2);

    QHBoxLayout* hBox;
    layout.addLayout(hBox = new QHBoxLayout,3,2);
    hBox->addStretch(1);
    hBox->addWidget(new QPushButton("Login"));

    //layout.addWidget(new QPushButton("Login"),3,2);

    password->setEchoMode(QLineEdit::Password);
#if 0
    layout.addWidget(&button,1,1);
    layout.addWidget(&edit,1,2);
    layout.addWidget(new QPushButton("1,0"),2,1);
    layout.addWidget(new QPushButton("1,1"),2,2);

    layout.addWidget(new QPushButton("aaa"),3,1,1,2);
#endif
    w.setLayout(&layout);


    QObject::connect(&button,SIGNAL(clicked()),&w,SLOT(close()));

    w.setWindowTitle("hello world");

    return app.exec();
}
