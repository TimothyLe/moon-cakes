#include <QApplication>
#include <QInputDialog>
#include <QMessageBox>
#include <QTextStream>

int main (int argc, char* argv[])
{
    QApplication app(argc, argv);
    QTextStream cout(stdout);

    int answer = 0;

    do {
        int n = QInputDialog::getInt(0, "Factorial Calculator",
                                        "Factorial of:", 1);
        
        int i = 2;
        int nfact = 1;
        while (i <= n) nfact *= i++;

        QString response = QString("The nfactorial of %1 is %2.\n%3")
                                .arg(n).arg(nfact)
                                .arg("Compute another nfactorial?");
        answer = QMessageBox::question(0, "Play again?", response,
                                       QMessageBox::Yes | QMessageBox::No);
    } while (answer == QMessageBox::Yes);
    
    return EXIT_SUCCESS;
}

