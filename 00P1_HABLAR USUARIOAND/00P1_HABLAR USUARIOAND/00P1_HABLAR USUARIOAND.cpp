// 00P1_HABLAR USUARIOAND.cpp :
//Andrea Meneses
//Hablaremos con el usuario
//Utillizando los metodos IOStream

//Librerías

#include <iostream>
//Librer+ia para incluir diferentes idiomas. 
#include <locale> 


int main()
{
    //Funcion para tener idioma español soportado. 
    setlocale(LC_ALL, "es_MX.UTF-8");
    std::cout << "\ngeneral kenobi\n" << "otras cosas" << std::endl;
    //Sintaxys para hablar con el usuaroio.
    std::cout << "Todo lo que yo";
    std::cout << "escriba en las comillas"
        << "aparecerá enpantalla"; 
    // << Concatenar el texto.
    // Investiga Ascci art y corregir el ejemplo de abajo 
        std::cout << "        /\__/\\";
        std::cout << "       / 0  0 \\";
        std::cout << "      )  L  (\n" ;
        std::cout << "     /  | |  \\\n";
        std::cout << "    / /   | \\ \\\n";
        std::cout << "   / /    )  \\ \\\n";
        std::cout;
   
}

