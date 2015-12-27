//#include <QtGui/QApplication>
//#include "mainwindow.h"

#include <QtCore/QCoreApplication>
#include <QDebug>

#include "cards/unocard.h"
#include "gameaction.h"
#include "colours.h"
#include <iostream>
#include "decks/deck.h"
#include "decks/deckfactory.h"

using namespace std;

int main(int argc, char *argv[])
{
    //QApplication a(argc, argv);
    //MainWindow w;
    //w.show();

    QCoreApplication a(argc, argv);

    qDebug();

    DeckFactory df = DeckFactory();

    Deck d = df.create(CHRISTMASAVE);

    cout << d << endl;

    return a.exec();
}
