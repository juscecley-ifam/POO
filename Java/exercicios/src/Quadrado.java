
public class Quadrado {

    private final double lado;

    public Quadrado(double lado) {
        this.lado = lado;
    }

    public double area() {
        return Math.pow(this.lado, 2);
    }

    public double perimetro() {
        return 4 * this.lado;
    }
}
