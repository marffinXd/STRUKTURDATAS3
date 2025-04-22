public class Segitiga {
    private double tinggi;
    private double alas;

    public void setinggi(double tinggi){
        this.tinggi = tinggi;
    }
    public void setalas(double alas){
        this.alas = alas;
    }
    public double gettinggi(){
        return tinggi;
    }
    public double getalas(){
        return alas;
    }
    public double getluas(){
        return (this.tinggi * this.alas * 0.5);
    }

    public static void main(String args[]) {
        Segitiga S[] = new Segitiga[2];
        Byte i;
        S[0] = new Segitiga();
        S[1] = new Segitiga();
        
        S[0].setinggi(12.0);
        S[0].setalas(8.0);
        
        S[1].setinggi(11.23);
        S[1].setalas(7.7);

        for (i=0; i<2;i++){
            System.out.println("segitiga ke- " + (i+1));
            System.out.println("tinggi = " + S[i].gettinggi());
            System.out.println("Alas = " + S[i].getalas());
            System.out.println("luas segitiga = " + S[i].getluas());
            System.out.println();

        }
    }
    
}