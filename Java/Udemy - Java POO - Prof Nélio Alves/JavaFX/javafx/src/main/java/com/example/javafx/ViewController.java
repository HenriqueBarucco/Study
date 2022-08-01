package com.example.javafx;

import gui.utils.Alerts;
import javafx.fxml.FXML;
import javafx.scene.control.Alert;
import javafx.scene.control.Button;

public class ViewController {

    @FXML
    private Button btTest;

    @FXML
    public void onBtTestAction() {
        Alerts.showAlert("Title", null, "Hello", Alert.AlertType.INFORMATION);
    }
}
