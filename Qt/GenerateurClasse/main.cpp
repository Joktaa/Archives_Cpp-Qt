#include <QApplication>

#include <fenprincipale.h>
#include <fensecondaire.h>

int main(int argc, char *argv[])
{
    QApplication app(argc,  argv);

    FenPrincipale fenetre;

    fenetre.show();
    return app.exec();
}
