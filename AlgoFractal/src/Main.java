import javax.swing.*;
import java.awt.*;

import static javax.swing.JFrame.EXIT_ON_CLOSE;

public class Main {

    public static void main(String[] args) {
        JFrame window = new JFrame("Fract");
        window.setSize(800, 800);
        window.setContentPane(new Fract());
        window.setBackground(Color.BLACK);
        window.setResizable(true);
        window.setDefaultCloseOperation(EXIT_ON_CLOSE);
        window.setVisible(true);
    }
}
