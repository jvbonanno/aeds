import java.util.Random;

class is {

    public static boolean isFIM(String s) {

        return (s.length() == 3 && s.charAt(0) == 'F' && s.charAt(1) == 'I' && s.charAt(2) == 'M');
    }

    public static boolean IsVogal(String s) {
        boolean RESULTADO = true;

        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == 'A' || s.charAt(i) == 'E' || s.charAt(i) == 'I' || s.charAt(i) == 'O'
                    || s.charAt(i) == 'U' || s.charAt(i) == 'a' || s.charAt(i) == 'e' || s.charAt(i) == 'i'
                    || s.charAt(i) == 'o' || s.charAt(i) == 'u') {

            } else {
                RESULTADO = false;
            }

        }

        return RESULTADO;
    }

    public static boolean IsConsoante(String s) {
        boolean RESULTADO = true;

        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == 'A' || s.charAt(i) == 'E' || s.charAt(i) == 'I' || s.charAt(i) == 'O'
                    || s.charAt(i) == 'U' || s.charAt(i) == 'a' || s.charAt(i) == 'e' || s.charAt(i) == 'i'
                    || s.charAt(i) == 'o' || s.charAt(i) == 'u' || s.charAt(i) < 'A') {
                RESULTADO = false;
            }
            if (s.charAt(i) > 'Z' && s.charAt(i) < 'a') {
                RESULTADO = false;
            }
        }

        return RESULTADO;

    }

    public static boolean IsInteiro(String s) {
        boolean RESULTADO = true;

        for (int i = 0; i < s.length(); i++) {

            if (s.charAt(i) < '0' || s.charAt(i) > '9') {

                RESULTADO = false;
            }

        }

        return RESULTADO;
    }

    public static boolean IsReal(String s) {
        boolean RESULTADO = true;
        int i = 0;
        int QtdPonto = 0, QtdVirgula = 0;
        do {
            if (s.charAt(i) >= '0' && s.charAt(i) <= '9') {
                RESULTADO = true;
            } else {
                if(s.charAt(i) == ',' || s.charAt(i) == '.'){
                    RESULTADO = true;
                }else{
                    RESULTADO = false;
                }
                if(s.charAt(i) == ','){
                    QtdVirgula++;
                }
                if(s.charAt(i) == '.'){
                    QtdPonto++;
                }
                
            }
            if(QtdPonto >1 || QtdVirgula >1){
               RESULTADO = false;
            }


            i++;
        }while(i<s.length()&&RESULTADO!=false);return RESULTADO;

    }

    public static void main(String[] args) {
        String entrada[] = new String[1000];
        int numEntrada = 0;
        Random numRandom = new Random();
        numRandom.setSeed(4);

        do {
            entrada[numEntrada] = MyIO.readLine();
        } while (isFIM(entrada[numEntrada++]) == false);
        numEntrada--;

        for (int i = 0; i < numEntrada; i++) {

            if (IsVogal(entrada[i]) == true) {

                MyIO.print("SIM");
            } else {
                MyIO.print("NAO");
            }
            MyIO.print(" ");
            if (IsConsoante(entrada[i]) == true) {

                MyIO.print("SIM");
            } else {
                MyIO.print("NAO");
            }
            MyIO.print(" ");
            if (IsInteiro(entrada[i]) == true) {

                MyIO.print("SIM");
            } else {
                MyIO.print("NAO");
            }
            MyIO.print(" ");
            if (IsReal(entrada[i]) == true) {

                MyIO.println("SIM");
            } else {
                MyIO.println("NAO");
            }
            

        }

    }

}
