#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>
#include <QLabel>
#include <QScreen>
#include <stdio.h>
#include <string>
#include <vector>

enum OpMode {
    admin,
    user,
    debug
};

int BuildGui(int argc, char *argv[]);
OpMode GetOpMode(int argc, char *argv[]);

class Operator{
    OpMode mode;
    std::string name;
    std::string password;

    public:
    Operator(OpMode e_mode, std::string s_name, std::string s_password) : mode(e_mode), name(s_name), password(s_password){
        //iefgi
    }

};

int checkLogin(std::string s_name, std::string s_password){
    return 0;
};

int main(int argc, char *argv[]) {

    BuildGui(argc, argv);

    OpMode mode = GetOpMode(argc, argv);
    std::vector<Operator> OpList;
    OpList.push_back(Operator(admin, "admin", "1234"));
}

OpMode GetOpMode(int argc, char *argv[]){
    OpMode mode;
    if(argc > 1){
        for (int i = 0; i < argc; i++){
            std::string arg = argv[i];

            if(arg == "-admin"){
                if(checkLogin("admin", argv[i+1])) mode = admin;
            }
            if(arg == "-user"){
                if(checkLogin(argv[i+1], argv[i+2])) mode = user;
            }
            if(arg == "-debug"){
                mode = debug;
            }
        }
    }

    return user;
}

int BuildGui(int argc, char *argv[]){

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