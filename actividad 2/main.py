import sys
from PyQt6 import QtWidgets
from battleship_int import battleship
import actions

class MainWindow(QtWidgets.QMainWindow, battleship):
    def __init__(self):
        super().__init__()
        self.setupUi(self)
        self.setup_connections()

    def setup_connections(self):
        for button in self.buttons:
            button.clicked.connect(lambda checked, b=button: actions.change_color(b))

if __name__ == "__main__":
    app = QtWidgets.QApplication(sys.argv)
    mainWindow = MainWindow()
    mainWindow.show()
    sys.exit(app.exec_())
