#ifndef SEARCHPROGRAM_H
#define SEARCHPROGRAM_H

#include <QWidget>

namespace Ui {
class searchProgram;
}

class searchProgram : public QWidget
{
    Q_OBJECT

public:
    explicit searchProgram(QWidget *parent = 0);
    ~searchProgram();

private slots:
    void on_goButton_clicked();

private:
    Ui::searchProgram *ui;
    void getTextFile();
};

#endif // SEARCHPROGRAM_H
