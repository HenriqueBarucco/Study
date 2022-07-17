package com.example.javafx1;

import javafx.fxml.FXML;
import javafx.scene.control.Label;

public class HelloController {
    @FXML
    private Label welcomeText;
    @FXML
    private Label teste;

    private boolean isArmed = false;


    @FXML
    protected void onHelloButtonClick() {
        welcomeText.setText("Welcome to JavaFX Application!");
    }

    protected boolean isArmed() {
        if (isArmed) {
            return this.isArmed = false;
        } else {
            return this.isArmed = true;
        }
    }

    @FXML
    protected void onToggleButtonClick() {
        isArmed();
        if (isArmed) {
            teste.setText("Ativado!");
        } else {
            teste.setText("Desativado!");
        }
    }
}