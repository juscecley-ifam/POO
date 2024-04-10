
public class Triangulo {

    private final double ladoA;
    private final double ladoB;
    private final double ladoC;

    public Triangulo(double ladoA, double ladoB, double ladoC) {
        this.ladoA = ladoA;
        this.ladoB = ladoB;
        this.ladoC = ladoC;
    }

    protected double area() {
        double s = this.perimetro() / 2;
        double r = s * ((s - this.ladoA) * (s - this.ladoB) * (s - this.ladoC));
        return Math.sqrt(r);
    }

    protected double perimetro() {
        return this.ladoA + this.ladoB + this.ladoC;
    }

}
