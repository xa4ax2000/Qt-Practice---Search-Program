#include "searchprogram.h"
#include "ui_searchprogram.h"
#include <QtCore/QFile>
#include <QtCore/QTextStream>

searchProgram::searchProgram(QWidget *parent) : QWidget(parent), ui(new Ui::searchProgram){
    ui->setupUi(this);
    getTextFile();
}

searchProgram::~searchProgram()
{
    delete ui;
}

void searchProgram::on_goButton_clicked()
{
    QString word = ui ->lineEdit->text();
    ui->textEdit->find(word, QTextDocument::FindWholeWords);
}

void searchProgram::getTextFile(){
    //QFile class is used to be able to create an object (similar to ostream class to open in c++)
    //create object name (we called our object myFile)
    //in the parameters we have to put a colon followed by forward slash and then the name.txt
    //This object stores the textfile in the parameters

    QFile fileObject(":/searchThisParagraph.txt");

    //Once we targeted the file name, we have to open it w/ our iodevice and set it to read only since we're not writing

    fileObject.open(QIODevice::ReadOnly);

    //Convert the file into a stream using QTextStream and add the address of the object to let it know
    //which file it wants to create into a stream

    QTextStream streamObject(&fileObject);

    //

    QString line = streamObject.readAll();
    fileObject.close();

    ui->textEdit->setPlainText(line);
    QTextCursor textCursorObject = ui->textEdit->textCursor();
    textCursorObject.movePosition(QTextCursor::Start, QTextCursor::MoveAnchor, 1);

}
