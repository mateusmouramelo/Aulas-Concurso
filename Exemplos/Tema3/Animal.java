package exemplos1;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 * Classe regular
 * @author Mateus
 */
public class Animal {
    private String nome;
    private int idade;

    public void identificar() {
        System.out.println("Eu sou um animal!");
    }

    public void renomear(String nome) {
        this.nome = nome;
    }

    public String getNome() {
        return nome;
    }

    public void setIdade(int idade) {
        if (idade > 0) {
            this.idade = idade;
        }
    }
    
    public int getIdade() {
        return idade;
    }
}
