import java.util.Scanner;

class Pomekon {

    public static void main(String[] args) {

        Scanner entrada = new Scanner(System.in);
        int n = entrada.nextInt();
        String pomekonNome;
        int count = 0;
        String[] pomekonNomes;
        pomekonNomes = new String[n];
        entrada.nextLine();
        for (int i = 0; i < n; i++) {
            pomekonNome = entrada.nextLine();
            pomekonNomes[i] = pomekonNome;
        }   

        for (int i = 0; i < pomekonNomes.length; i++) {
            count++;
            if(((i + 1) < pomekonNomes.length) && pomekonNomes[i].equals(pomekonNomes[i + 1])){
                count = count - 1;
            }
          }

        int qtdPomekons = 151;
        qtdPomekons = qtdPomekons - count;
        System.out.println("Falta(m) " + qtdPomekons + " pomekon(s).");

        entrada.close();
    }
}