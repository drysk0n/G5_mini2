from PyQt6.QtWidgets import QApplication, QWidget, QGridLayout, QPushButton, QLabel, QVBoxLayout, QMessageBox, QDialog
from PyQt6.QtGui import QPixmap
import random


def handleButtonClick(self):
    sender = self.sender()
    x, y = self.getButtonPosition(sender)
    result = self.game_logic.attack(x, y)
    if result == 'hit':
        sender.setStyleSheet('background-color: red')
    else:
        sender.setStyleSheet('background-color: blue')
    if self.game_logic.checkWin():
        QMessageBox.information(self, 'Battleship', 'You win!')
    
    
def getButtonPosition(self, button):
        for i in range(self.player_grid.rowCount()):
            for j in range(self.player_grid.columnCount()):
                if self.player_grid.itemAtPosition(i, j).widget() == button:
                    return i, j

def reproduccion_al (self, grid):
      