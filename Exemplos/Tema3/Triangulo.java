package exemplos1;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Mateus
 */
public class Triangulo implements Figura {
    double a, h;
    @Override
    public double calcularArea() {
        return a * h / 2;
    }
    @Override
    public double calcularPerimetro() {
        return 3 * a;
    }
}
