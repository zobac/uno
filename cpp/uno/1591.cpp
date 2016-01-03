//#include <QtGui/QApplication>
//#include "mainwindow.h"

#include <QtCore/QCoreApplication>
#include <QDebug>
#include <iostream>

#include "gameaction.h"
#include "decks/deck.h"
#include "decks/deckfactory.h"

#include "players/player.h"


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

    Player p("Jimmy");

    p.draw(d.draw());
    p.draw(d.draw());
    p.draw(d.draw());

    QList<Card> c = p.getHand().getCards();
    cout << p << endl;

    p.discard(c[0]);

    cout << p << endl;


    return a.exec();
}
