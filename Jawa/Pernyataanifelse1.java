import java.io.*;

public class Pernyataanifelse1 {
    public static void main(String args[]) {
        BufferedReader dataIn = new BufferedReader(new InputStreamReader(System.in));
        String gradestring = "";
        byte grade = 0;

        System.out.print("Ketik nilai Anda: ");
        try {
            gradestring = dataIn.readLine();
            grade = Byte.parseByte(gradestring); // parsing string ke byte
            if (grade >= 80)
                System.out.println("Selamat Anda Lulus!");
            else
                System.out.println("Maaf Anda Belum Lulus!");
        } catch (IOException e) {
            System.out.println("Ada kesalahan input!");
        } catch (NumberFormatException e) {
            System.out.println("Input bukan angka yang valid!");
        }
    }
}
