#ifndef CHARACTERSHEET_H
#define CHARACTERSHEET_H

#include <QMainWindow>

namespace Ui {
class CharacterSheet;
}

class CharacterSheet : public QMainWindow
{
    Q_OBJECT

public:
    explicit CharacterSheet(QWidget *parent = 0);
    ~CharacterSheet();

private:
    Ui::CharacterSheet *ui;
};

#endif // CHARACTERSHEET_H
