#-------------------------------------------------
#
# Project created by QtCreator 2014-04-13T12:02:21
#
#-------------------------------------------------

QT       += core gui

TARGET = uno
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    cards/card.cpp \
    cards/unocard.cpp \
    cards/unoheartscard.cpp \
    players/player.cpp \
    decks/deck.cpp \
    players/humanplayer.cpp \
    players/virtualplayer.cpp \
    decks/unocarddeck.cpp \
    decks/unoheartscarddeck.cpp \
    decks/christmasaveunodeck.cpp

HEADERS  += mainwindow.h \
    cards/card.h \
    player.h \
    cards/unocard.h \
    cards/unoheartscard.h \
    players/player.h \
    decks/deck.h \
    players/humanplayer.h \
    players/virtualplayer.h \
    decks/unocarddeck.h \
    decks/unoheartscarddeck.h \
    decks/christmasaveunodeck.h

FORMS    += mainwindow.ui