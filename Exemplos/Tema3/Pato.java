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
public class Pato extends Animal implements EuVoo, EuNado{
    
    @Override
    public void identificar() {
        System.out.println("Eu sou um pato!");
    }
    @Override
    public void Voar() {
        System.out.println("Bate as asas.");
    }
    @Override
    public void Nadar() {
        System.out.println("Balança os pés.");
    }
    
}
