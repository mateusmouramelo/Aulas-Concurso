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
public class Retangulo implements Figura {
    private double b, h;
    @Override
    public double calcularArea() {
        return this.b * this.h;
    }
    @Override
    public double calcularPerimetro() {
        return 2 * this.b + 2 * this.h;
    }

}
