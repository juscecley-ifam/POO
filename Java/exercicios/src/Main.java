

import java.util.Scanner;


public class Main {

    public static void main(String[] args) {

        System.out.print("Informe o raio do circulo: ");
        @SuppressWarnings("resource")
        Scanner entrada = new Scanner(System.in);
        double raio = Double.parseDouble(entrada.nextLine());

        Circulo circulo = new Circulo(raio);
        System.out.printf("Area do circuclo: %.2f \n", circulo.area());
        System.out.printf("Perimetro do circuclo: %.2f \n", circulo.perimetro());
    }
}
