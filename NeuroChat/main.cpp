#include "NeuroChat.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    NeuroChat window;
    window.show();
    return app.exec();
}
