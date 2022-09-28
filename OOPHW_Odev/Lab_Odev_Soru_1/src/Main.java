import java.util.Random;

class Kaplumbag{
    public int HizliYuruyus(int konum){
        return konum+3;
    }

    public int Kayma(int konum){
        int skonum;
        skonum = konum-6;
        if(skonum<=0){
            skonum=1;
        }
        return skonum;
    }

    public int YavasYuruyus(int konum){
        return konum+1;
    }
}

class Tavsan{
    public int Uyuma(int konum){
        return konum;
    }

    public int BuyukSicrama(int konum){
        return konum+9;
    }

    public int BuyukKayma(int konum){
        int skonum;
        skonum = konum-12;
        if(skonum<=0){
            skonum=1;
        }
        return skonum;
    }

    public int KucukSicrama(int konum){
        return konum+1;
    }

    public int KucukKayma(int konum){
        int s2konum;
        s2konum=konum-2;
        if(s2konum<=0){
            s2konum=1;
        }
        return s2konum;
    }
}

public class Main {

    public static void main(String[] args) {
        Kaplumbag k1 = new Kaplumbag();
        Tavsan t1 = new Tavsan();
        Random r = new Random();

        int Tkonum = 1;
        int Kkonum = 1;

        while(Kkonum!=20 && Kkonum<=20 && Tkonum!=20 && Tkonum<=20){
            int rastgeleSayi1 = r.nextInt(10);
            int rastgeleSayi2 = r.nextInt(10);

            if(1<=rastgeleSayi1 && rastgeleSayi1<=5){
                Kkonum = k1.HizliYuruyus(Kkonum);
            }
            if(6<=rastgeleSayi1 && rastgeleSayi1<=7){
                Kkonum = k1.Kayma(Kkonum);
            }
            if(8<=rastgeleSayi1 && rastgeleSayi1<=10){
                Kkonum = k1.YavasYuruyus(Kkonum);
            }
            if(Kkonum>20){
                Kkonum=20;
            }

            if(1<=rastgeleSayi2 && rastgeleSayi2<=2){
                Tkonum = t1.Uyuma(Tkonum);
            }
            if(3<=rastgeleSayi2 && rastgeleSayi2<=4){
                Tkonum = t1.BuyukSicrama(Tkonum);
            }
            if(5==rastgeleSayi2){
                Tkonum = t1.BuyukKayma(Tkonum);
            }
            if(6<=rastgeleSayi2 && rastgeleSayi2<=8){
                Tkonum = t1.KucukSicrama(Tkonum);
            }
            if(9<=rastgeleSayi2 && rastgeleSayi2<=10){
                Tkonum = t1.KucukKayma(Tkonum);
            }
            if(Tkonum>20){
                Tkonum=20;
            }

            for(int i=1; i<Kkonum; i++){
                System.out.print("_");
            }
            System.out.print("K");
            for(int j=1; j<=(20-Kkonum); j++){
                System.out.print("_");
            }

            System.out.println("\n");

            for(int i=1; i<Tkonum; i++){
                System.out.print("_");
            }
            System.out.print("T");
            for(int j=1; j<=(20-Tkonum); j++){
                System.out.print("_");
            }

            if(Kkonum==Tkonum){
                System.out.println("\n\nOUCH!!! Ayağıma bastın kıl yumağı! :D");
            }

            if(Kkonum==20 && Tkonum==20){
                System.out.println("\nBerabere");
                break;
            }
            if(Kkonum==20){
                System.out.println("\n\nKaplumbağa kazandı oley!");
                break;
            }
            if(Tkonum==20){
                System.out.println("\n\nTavşan kazandı, yuuuh!");
                break;
            }
            System.out.println("\n\n");
        }
    }
}




