import javax.swing.*;
import java.awt.*;

public class TestFrame extends JFrame {
    public TestFrame() {
        setTitle("Test JFrame");
        setSize(400, 200);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null); // Pusatkan window

        // Tambahkan panel custom untuk menggambar
        add(new DrawPanel());

        setVisible(true);
    }

    // Kelas JPanel untuk menggambar teks
    class DrawPanel extends JPanel {
        @Override
        protected void paintComponent(Graphics g) {
            super.paintComponent(g);
            g.drawString("Membuat program Java dengan JFrame :)", 25, 25);
            g.setColor(Color.RED);
            g.drawString("Membuat program Java sangat menyenangkan :)", 25, 45);
        }
    }

    public static void main(String[] args) {
        new TestFrame(); // Jalankan program
    }
}