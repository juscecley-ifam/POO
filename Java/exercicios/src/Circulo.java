
public class Circulo {

    private final double raio;

    public Circulo(double raio) {
        this.raio = raio;
    }

    public double area() {
        return Math.PI * Math.pow(this.raio, 2);
    }

    public double perimetro() {
        return 2 * Math.PI * this.raio;
    }
}
