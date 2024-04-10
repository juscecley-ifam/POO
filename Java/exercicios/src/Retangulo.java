
public class Retangulo {

    private double comprimento, lagura;

    public Retangulo(double comprimento, double lagura) {
        this.comprimento = comprimento;
        this.lagura = lagura;
    }

    public double area() {
        return this.comprimento * this.lagura;
    }

    public double perimetro() {
        return 2 * (this.comprimento + this.lagura);
    }
}
