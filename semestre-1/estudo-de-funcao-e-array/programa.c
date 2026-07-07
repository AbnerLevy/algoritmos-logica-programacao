#include <stdio.h>
#include <string.h>

void exibirMenu(){
    printf("\n1- Cadastrar produtos\n");
    printf("2- Listar Produto\n");
    printf("3- Buscar Produto\n");
    printf("4- inverter produtos\n");
    printf("5- Ordenar produtos\n");
    printf("6- Sair\n");
}

void cadastrarProduto(int codigos[], char nomes[][50], float precos[], int *total){
    
    if(*total >= 10){
        printf("\nErro: Limite de 10 produtos atingido!\n");
        return;
    }
    
    printf("\n--- CADASTRAR PRODUTO (Posicao %d) ---\n\n", *total + 1);
    
    printf("Digite o codigo do produto: ");
    scanf("%d", &codigos[*total]);
    
    printf("Digite o nome do produto: ");
    scanf(" %[^\n]s", nomes[*total]);
    
    printf("Digite o preço do produto: ");
    scanf("%f", &precos[*total]);
    
    (*total)++;
    printf("\nProduto cadastrado com sucesso!\n\n");
}

void inversorInt(int var[], int total){ 
    
    int temp; 
   
   for (int i = 0; i < total / 2 ; i++){ 
    temp = var[i];
    var[i] = var[total- 1 - i];
    var[total- 1 - i] = temp;
    }
    
}

void inversorFloat(float var[], int total){ 
    
    float temp;
   
   for (int i = 0; i < total / 2 ; i++){ 
    temp = var[i];
    var[i] = var[total- 1 - i];
    var[total- 1 - i] = temp;
    }
}

void inversorChar(char var[][50], int total){ 
    
    char temp[50];
    
    for (int i = 0; i < total / 2 ; i++){ 
    strcpy(temp, var[i]);
    strcpy(var[i], var[total- 1 - i]);
    strcpy(var[total- 1 - i], temp);
    }
}    

void InverterProdutos(int codigo[], char Produto[][50],float preco[], int total){
    
    inversorInt(codigo, total);
    inversorFloat(preco, total);
    inversorChar(Produto, total);
}

void OrdenarProdutos(int codigo[], char Produto[][50],float preco[], int total){
    
    int auxInt;
    float auxFloat;
    char auxChar[50];
    
    for (int i = 0; i < total; i++) {
        
     	for(int j = 0; j < total; j++) {
     	    
    		if (codigo[j] > codigo[i]) {
    		    
        		auxInt = codigo[i];
        		codigo[i] = codigo[j];
        		codigo[j] = auxInt;
        		
        		auxFloat = preco[i];
        		preco[i] = preco[j];
        		preco[j] = auxFloat;
        		
        		strcpy(auxChar, Produto[i]);
        		strcpy(Produto[i], Produto[j]);
        		strcpy(Produto[j], auxChar);
    		} 
    	}
    }
    printf("\nOrdem dos códigos foram ajustadas com sucesso!\n");
    
}


void listarProdutos(int codigos[], char nomes[][50], float precos[], int total){
    
    if (total == 0) {
        printf("Nenhum produto cadastrado ate o momento.\n\n");
        return; 
    }

    printf("\n--- LISTA DE PRODUTOS ---\n\n");
    // Aqui está a varredura que você imaginou!
    for (int i = 0; i < total; i++) {
        printf("Codigo: %d | Nome: %s | Preco: R$ %.2f\n", codigos[i], nomes[i], precos[i]);
    }
}

int buscarProduto(int codigos[], char nomes[][50], float precos[], int total){
    
    int codigoBusca;
    
    printf("Digite o código do produto:\n");
    scanf("%d", &codigoBusca);
    
    for (int i = 0; i < total; i++) {
        if (codigos[i] == codigoBusca) {
            return i; 
        } 
    }
    return -1;
}

int main()
{
    int codigo[10];
    char Produto[10][50];
    float preco[10];
    int controleProd = 0;
    int opcao;
    
     do{
            exibirMenu();
            scanf("%d", &opcao);
            
            switch(opcao){
                case 1:
                    cadastrarProduto(codigo, Produto, preco, &controleProd);
                break;
                case 2:
                    listarProdutos(codigo, Produto, preco, controleProd);
                break;
                case 3:
                    int indice = buscarProduto(codigo, Produto, preco, controleProd);
                    
                    if (indice == -1) {
                        printf("\nProduto nao encontrado!\n");
                    } else {
                        printf("\nProduto Encontrado!\n");
                        printf("Nome: %s\n", Produto[indice]);
                        printf("Preco: R$ %.2f\n", preco[indice]);
                    }
                break;
                 case 4:
                    InverterProdutos(codigo, Produto, preco, controleProd);
                break;
                 case 5:
                    OrdenarProdutos(codigo, Produto, preco, controleProd);
                break;
                case 6:
                    printf("Você saiu do programa!");
                break;
            }
        }while(opcao != 6);

    return 0;
}
