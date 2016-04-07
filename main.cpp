/*

version.03

*/
#include <QApplication>

#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QCompleter>
#include <QVBoxLayout>
#include <QHBoxLayout>

int main(int argc,char *argv[])
{

    QApplication app(argc,argv);

    QWidget w;

    QLineEdit edit;
    //edit.show();
    edit.setParent(&w);

    QCompleter completer(QStringList() << "abc" << "123" << "qwe");
    completer.setFilterMode(Qt::MatchContains);
    edit.setCompleter(&completer);


    w.show();



    QPushButton button;
    button.setText("Button");

    button.setParent(&w);
    button.show();

    button.setGeometry(90,90,200,200);

    QHBoxLayout layout;
    layout.addStretch(1);
    layout.addWidget(&edit,1);
    layout.addSpacing(50);
    layout.addWidget(&button,1);
    layout.addStretch(1);
    w.setLayout(&layout);

    QObject::connect(&button,SIGNAL(clicked()),&w,SLOT(close()));

    w.setWindowTitle("hello world");

    return app.exec();
}
