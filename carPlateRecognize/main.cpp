﻿#include <QApplication>
#include "MainWindow.h"

#pragma execution_character_set("utf-8")

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    app.setStyleSheet("QGroupBox {\
                      border: 2px solid gray;\
                      border-radius: 5px;\
                      margin-top: 1ex; \
                  }");
    MainWindow wnd;
    wnd.show();

    return app.exec();
}
