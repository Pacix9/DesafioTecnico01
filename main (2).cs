/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
using System;
class HelloWorld {
  static void Main() {
    Console.WriteLine("Gostaria de conhecer um personagem bem legal? Se sim digite (1) e caso não queira digite (2)");
    string Cod = "Call of Duty";
    float resposta = float.Parse(Console.ReadLine());
    if(resposta == 1){
        Console.WriteLine($"Que bom! Frank Woods é um militar estadunidense da franquia de jogos {Cod} que lutou na guerra fria.");
        Console.WriteLine("Outras informações disponiveis: digite (1) para ver seus apelidos e digite (2) para ver sobre seu instagram.");
          double resposta2 = double.Parse(Console.ReadLine());
              
             if(resposta2 == 1){
                 string apelido1 = "Uncle Woods";
                 string apelido2 = "The Eagle";
                 string apelido3 = "G.I";
                 string apelido4 = "Uncle Frank";
                 Console.WriteLine($"Seus principais apelidos eram {apelido1}, {apelido2}, {apelido3} e {apelido4}");
             } 
             if(resposta2 == 2){
                 float mediaDeCurtidas = 200;
                 string nome = "Frank Woods";
                 Console.WriteLine("Nome de usuaio Frank_Woods");
                 Console.WriteLine($"Meu nome é {nome}");
                 int idade = 2025-1930;
                 Console.WriteLine($"tenho {idade} anos de idade");
                 Console.WriteLine($"seguindo {mediaDeCurtidas} pessoas/////seguido por 1000 pessoas.");
                 Console.WriteLine("media de 400 curtidas na sua ultima postagem");
                 
             }
                 
             } 
             
    
    if(resposta == 2){
        Console.WriteLine("A, ok então, até a proxima");
    }
 
    
  
}
}