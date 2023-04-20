int main() {
    Zoo zoo;
    
    while (true) {
        std::cout << "1. Adicionar musica a uma playlist" << std::endl;
        std::cout << "2. Mostrar musicas de uma playlist" << std::endl;
        std::cout << "3. Remover musica" << std::endl;
        std::cout << "4. Adicionar playlist" << std::endl;
        std::cout << "5. Mostrar playlists playlist" << std::endl;
        std::cout << "6. Remover playlists" << std::endl;
        std::cout << "Escolha uma opcao: ";
        std::string nome, especie;
        int idade;
        int opcao;
        std::cin >> opcao;

        if (opcao == 1) {
            std::cout << "Nome: ";
            std::cin >> nome;
            std::cout << "Especie: ";
            std::cin >> especie;
            std::cout << "Idade: ";
            std::cin >> idade;

            Animal animal(nome, especie, idade);
            zoo.addAnimal(animal);
        }else if (opcao == 2 ){
            std::cout << "Digite uma especie: ";
            std::cin>>especie;
            zoo.printEspecie(especie);
        }else if (opcao == 3 ){
            std::cout << "Digite uma idade: ";
            std::cin>>idade;
            zoo.removerAnimalVelho(idade);
        }else if (opcao == 4){
            break;
        }else{
            std::cout<<"opcao invalida"<<std::endl;
        }

    }
    return 0;
}