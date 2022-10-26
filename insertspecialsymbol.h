#ifndef INSERTSPECIALSYMBOL_H
#define INSERTSPECIALSYMBOL_H
#include <QString>
#include <QStringList>

/*
Написать класс, который будет вставлять в текст
спецсимволы (4–5). Пригодится для символов,
для которых нет клавиши на клавиатуре,
но они часто используются в тексте:
© — знак охраны авторского права,
‰ — промилле, ®, € — евро, ₽ — рубль.
Например, ввод рубля в программе #@RUB@, или руб.
 (автоматически заменить на знак).
*/

class InsertSpecialSymbol
{
public:
    InsertSpecialSymbol();
    bool insertSpecialSymbol(QString & str);
//    static int findNextBegin(QString & str);
//    static int findNextEnd(QString & str);
//    ~InsertSpecialSymbol();

/*
private:
    static QString textAsStr;
    static QStringList editorMarks;
    static QStringList replSymbols;
*/
};

#endif // INSERTSPECIALSYMBOL_H
