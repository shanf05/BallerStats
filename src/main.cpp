#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>
#include <QLabel>
#include <QScreen>
#include <stdio.h>

enum opMode {
    -admin;
    -user;
    -debug;
}

private class Operator{

    opMode m_mode;
    String m_sName;
    String m_sPw;



    Operator* Operator(opMode mode, Strin sName, Strinf sPw) : m_mode(mode), m_sName(sName), m_sPw(sPw){
        return;
    }
}



int main(int argc, char *argv[]) {
    opMode m_mode;

    int checkLogin(String sName, String sPw){

        for (int i = 0; i < m_vOperatorList.length(); ; i++)
        {
            return (sName = m_sName && nPw = m_sPw);
            m_vOperatorList
        }

    }


    if(argc > 1){
        for (int i = 0; i < argc; i++){
            std::string arg = argv[i];

            if(arg == "-admin"){
                if(checkLogin("admin", argv[i+1])) m_mode = admin;
            }
            if(arg == "-user"){
                if(checkLogin(argv[i+1], argv[i+2])) m_mode = user;
            }
            if(arg == "-debug"){
                m_mode = debug;
            }
        }
    }




    std::vector<Operator> m_vOperatorList;
    m_vOperatorList.add(Operator(admin, "admin", "1234"));

    if(argv[0] == "-admin"){
        if()

    }

    switch (expression)
    {
    case constant expression:
        /* code */
        break;

    default:
        break;
    }

}


void build_gui(mode){
    QApplication app(argc, argv);

    QWidget window;
    window.setWindowTitle("BallerStats");

    window.setFixedSize(800, 600);

    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int screenWidth = screenGeometry.width();
    int screenHeight = screenGeometry.height();
    int x = (screenWidth - window.width()) / 2;
    int y = (screenHeight - window.height()) / 2;
    window.move(x, y);


    QVBoxLayout *layout = new QVBoxLayout;

        QLabel *label = new QLabel("Label");
        layout->addWidget(label);

        QPushButton *button = new QPushButton("Button");
        layout->addWidget(button);

        QObject::connect(button, &QPushButton::clicked, [&]() {
            label->setText("Sie haben den Button geklickt!");
        });

    window.setLayout(layout);


    window.show();
    return app.exec();
}
