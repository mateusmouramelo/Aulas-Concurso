package exemplos1;

/**
 *
 * @author Mateus
 */
public class Circulo implements Figura {
    double r;
    @Override
    public double calcularArea() {
        return Math.PI * Math.pow(this.r, 2);
    }
    @Override
    public double calcularPerimetro() {
        return 2 * Math.PI * this.r;
    }
}
