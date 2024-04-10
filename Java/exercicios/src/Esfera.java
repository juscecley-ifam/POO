
public class Esfera {

    private final double raio;

    public Esfera(double raio) {
        this.raio = raio;
    }

    public double area() {
        return 4 * Math.PI * Math.pow(raio, 2);
    }

    public double volume() {
        return (4 * Math.PI * Math.pow(raio, 3)) / 3;
    }
}
