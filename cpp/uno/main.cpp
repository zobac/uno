//#include <QtGui/QApplication>
//#include "mainwindow.h"

#include <QtCore/QCoreApplication>
#include <QDebug>

#include "cards/unocard.h"
#include "gameaction.h"
#include "colours.h"
#include <iostream>
#include "decks/unoheartscarddeck.h"

using namespace std;

int main(int argc, char *argv[])
{
    //QApplication a(argc, argv);
    //MainWindow w;
    //w.show();

    QCoreApplication a(argc, argv);

    qDebug();
    
    Card c = UnoCard(RED, "ZERO", 0, 0, NONE);

    Deck d = UnoHeartsCardDeck();

    d.stack(c);

    cout << d << endl;
    return a.exec();
}
