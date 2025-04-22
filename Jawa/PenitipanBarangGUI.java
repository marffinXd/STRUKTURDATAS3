import javax.swing.*;
import javax.swing.table.DefaultTableModel;
import java.awt.event.*;

public class PenitipanBarangGUI extends JFrame {
    private JTextField txtNama, txtBarang, txtLoker;
    private JButton btnSimpan, btnEdit, btnReset;
    private JTable tabel;
    private DefaultTableModel model;

    public PenitipanBarangGUI() {
        setTitle("Aplikasi Penitipan Barang");
        setSize(550, 450);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLayout(null);

        JLabel lblNama = new JLabel("Nama Penitip:");
        lblNama.setBounds(20, 20, 100, 25);
        add(lblNama);

        txtNama = new JTextField();
        txtNama.setBounds(130, 20, 150, 25);
        add(txtNama);

        JLabel lblBarang = new JLabel("Nama Barang:");
        lblBarang.setBounds(20, 60, 100, 25);
        add(lblBarang);

        txtBarang = new JTextField();
        txtBarang.setBounds(130, 60, 150, 25);
        add(txtBarang);

        JLabel lblLoker = new JLabel("Nomor Loker:");
        lblLoker.setBounds(20, 100, 100, 25);
        add(lblLoker);

        txtLoker = new JTextField();
        txtLoker.setBounds(130, 100, 150, 25);
        add(txtLoker);

        btnSimpan = new JButton("Simpan");
        btnSimpan.setBounds(300, 20, 100, 30);
        add(btnSimpan);

        btnEdit = new JButton("Edit");
        btnEdit.setBounds(300, 60, 100, 30);
        add(btnEdit);

        btnReset = new JButton("Reset");
        btnReset.setBounds(300, 100, 100, 30);
        add(btnReset);

        model = new DefaultTableModel();
        model.addColumn("Nama Penitip");
        model.addColumn("Nama Barang");
        model.addColumn("Nomor Loker");

        tabel = new JTable(model);
        JScrollPane scrollPane = new JScrollPane(tabel);
        scrollPane.setBounds(20, 150, 500, 230);
        add(scrollPane);

        // Tombol Simpan
        btnSimpan.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                String nama = txtNama.getText();
                String barang = txtBarang.getText();
                String loker = txtLoker.getText();

                if (nama.isEmpty() || barang.isEmpty() || loker.isEmpty()) {
                    JOptionPane.showMessageDialog(null, "Semua data harus diisi!");
                } else {
                    model.addRow(new Object[]{nama, barang, loker});
                    resetForm();
                }
            }
        });

        // Tombol Edit
        btnEdit.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                int selectedRow = tabel.getSelectedRow();
                if (selectedRow == -1) {
                    JOptionPane.showMessageDialog(null, "Pilih data yang mau diedit!");
                    return;
                }
                String nama = txtNama.getText();
                String barang = txtBarang.getText();
                String loker = txtLoker.getText();

                if (nama.isEmpty() || barang.isEmpty() || loker.isEmpty()) {
                    JOptionPane.showMessageDialog(null, "Semua data harus diisi!");
                } else {
                    model.setValueAt(nama, selectedRow, 0);
                    model.setValueAt(barang, selectedRow, 1);
                    model.setValueAt(loker, selectedRow, 2);
                    resetForm();
                }
            }
        });

        // Tombol Reset
        btnReset.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                resetForm();
            }
        });

        // Klik tabel → isi ke form
        tabel.addMouseListener(new MouseAdapter() {
            public void mouseClicked(MouseEvent e) {
                int selectedRow = tabel.getSelectedRow();
                if (selectedRow != -1) {
                    txtNama.setText(model.getValueAt(selectedRow, 0).toString());
                    txtBarang.setText(model.getValueAt(selectedRow, 1).toString());
                    txtLoker.setText(model.getValueAt(selectedRow, 2).toString());
                }
            }
        });

        setVisible(true);
    }

    // Fungsi reset form
    private void resetForm() {
        txtNama.setText("");
        txtBarang.setText("");
        txtLoker.setText("");
        tabel.clearSelection();
    }

    public static void main(String[] args) {
        new PenitipanBarangGUI();
    }
}
