#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

float Somar(float n1, float n2){
	return(n1+n2);
}

float Subtrair(float n1, float n2){
	return(n1-n2);
}

float Multiplicar(float n1, float n2){
	return(n1*n2);
}

float Dividir(float n1, float n2){
	return(n1/n2);
}

int CalcularResto(int num1, int num2){
	return(num1%num2);
}

float VerPercentual(float valor, float taxa){
	return(valor*(taxa/100));	
}

float CalcularPorcento(float parcial, float total){
	return((parcial/total)*100);	
}

int ExpNormal(int base, int exp){
	int total=1;
	for(int i=0; i<exp; i++){
		total *= base;
	}
	return(total);
}

int ExpRecursiva(int base, int exp){
	if(exp == 0){
		return(1);
	}
	else{
		return(base * ExpRecursiva(base, exp-1));
	}
}

int TermialNormal(int vlr){
	int total=0;
	for(int i=vlr; i>1; i--){
		total += i;
	}
	total++;
	return(total);
}

int TermialRecursivo(int vlr){
	if (vlr<=1){
		return(1);
	}
	else{
		return(vlr + TermialRecursivo(vlr-1));
	}
}

int FatorialNormal(int vlr);

int FatorialRecursivo(int vlr);

int Menu(){
	int op;
	do{
		system("cls");
		printf("=====Calculadora Simples=====\n");
		printf("\n1- Somar ");
		printf("\n2- Subtrair ");
		printf("\n3- Multiplicar ");
		printf("\n4- Dividir ");
		printf("\n5- Resto resultante da divisao de ambos ");
		printf("\n6- Percentual");
		printf("\n7- Exponenciacao ");
		printf("\n8- Termial ");
		printf("\n9- Fatorial ");
		printf("\n0- Sair\n");
		printf("\nDigite a opcao desejada: ");
		scanf("%i", &op);
	}while(op < 0 || op > 9);
	
	return op;
}

int Submenu(int opcao){
	int op = 1;
	do{
		system("cls");
		if(opcao == 1){
			printf("\nSoma\n");
		}
		else if(opcao == 2){
			printf("\nSubtracao\n");
		}
		else if(opcao == 3){
			printf("\nMultiplicacao\n");
		}
		else if(opcao == 4){
			printf("\nDivisao\n");
		}
		else if(opcao == 5){
			printf("\nResto\n");
		}
		else if(opcao == 6){
			printf("\nPercentual\n");
			printf(" 1 - Calcular Valor (Ex: Quanto e 10%% de 200?)\n");
	        printf(" 2 - Calcular Taxa  (Ex: 50 e quantos %% de 200?)\n");
	        printf("Escolha uma opcao: ");
	        scanf("%d", &op);
		}
		else if(opcao == 7){
			printf("\nExponenciacao\n");
			printf(" 1 - Normal\n");
	        printf(" 2 - Recursiva\n");
	        printf("Escolha uma opcao: ");
	        scanf("%d", &op);
	    }
	    else if(opcao == 8){
			printf("\nTermial\n");
			printf(" 1 - Normal\n");
	        printf(" 2 - Recursiva\n");
	        printf("Escolha uma opcao: ");
	        scanf("%d", &op);
    	}
    	else if(opcao == 9){
			printf("\nFatoração\n");
			printf(" 1 - Normal\n");
	        printf(" 2 - Recursiva\n");
	        printf("Escolha uma opcao: ");
	        scanf("%d", &op);
    	}
	}while (op != 1 && op != 2);
	
	return op;
}

int main(){
	int opcao, opsub, num1, num2, base, exp, vlr;
	float n1, n2, valor, taxa, total, parcial;
	do{
    	opcao = Menu();
	
        switch (opcao) {
            case 1:
            	opsub = Submenu(opcao);
            	printf("\nDigite o primeiro numero: ");
				scanf("%f", &n1);
				printf("Digite o segundo numero: ");
				scanf("%f", &n2);
				printf("O resultado de %.2f + %.2f = %.2f\n", n1, n2, Somar(n1, n2));
                break;
                
            case 2:
            	opsub = Submenu(opcao);
                printf("\nDigite o primeiro numero: ");
				scanf("%f", &n1);
				printf("Digite o segundo numero: ");
				scanf("%f", &n2);
				printf("O resultado de %.2f - %.2f = %.2f\n", n1, n2, Subtrair(n1, n2));
                break;
            
            case 3:
            	opsub = Submenu(opcao);
                printf("\nDigite o primeiro numero: ");
				scanf("%f", &n1);
				printf("Digite o segundo numero: ");
				scanf("%f", &n2);
				printf("O resultado de %.2f * %.2f = %.2f\n", n1, n2, Multiplicar(n1, n2));
                break;
            
            case 4:
            	opsub = Submenu(opcao);
                printf("\nDigite o primeiro numero: ");
				scanf("%f", &n1);
				do{
					printf("Digite o segundo numero: ");
					scanf("%f", &n2);
					if(n2 != 0) {
				            printf("\nO resultado de %.2f / %.2f = %.2f\n", n1, n2, Dividir(n1, n2));
				        } else {
				            printf("Erro: O dividendo nao pode ser zero.\n");
				        }
				}while(n2 == 0);
                break;
                
            case 5:
            	opsub = Submenu(opcao);
                printf("\nDigite o primeiro numero: ");
				scanf("%i", &num1);
				printf("Digite o segundo numero: ");
				scanf("%i", &num2);
				printf("O resultado do resto de %i por %i = %i\n", num1, num2, CalcularResto(num1, num2));
                break;
            
            case 6:
            	opsub = Submenu(opcao);
                
				if(opsub == 1){
					printf("\nDigite o valor base: ");
					scanf("%f", &valor);
					printf("Digite a porcentagem que deseja extrair (taxa %%): ");
					scanf("%f", &taxa);
					printf("%.2f%% de %.2f e = %.2f\n", taxa, valor, VerPercentual(valor, taxa));
				} 
				
				else {
					printf("\nDigite o valor parcial: ");
					scanf("%f", &parcial);
					printf("\nDigite o valor total: ");
        			scanf("%f", &total);
					if(total != 0) {
			            printf("%.2f representa %.2f%% de %.2f\n", parcial, CalcularPorcento(parcial, total), total);
			        } else {
			            printf("Erro: O total nao pode ser zero.\n");
			        }
				}
				
                break;
                
            case 7:
                opsub = Submenu(opcao);
                printf("Informe a base do seu exponencial: ");
                scanf("%i", &base);
                printf("Informe o expoente do seu exponencial: ");
                scanf("%i", &exp);
                if(opsub == 1){
               		printf("\n %i elevado a %i (normal) = %i\n", base, exp, ExpNormal(base, exp));
               	} else {
               		printf("\n %i elevado a %i (recursiva) = %i\n", base, exp, ExpRecursiva(base, exp));
				}
                break;
                
            case 8:
                opsub = Submenu(opcao);
                printf("Informe o numero para ver sua termial: ");
                scanf("%i", &vlr);
                if(opsub == 1){
               		printf("\n o termial de %i (normal) = %i\n", vlr, TermialNormal(vlr));
               	} else {
               		printf("\n o termial de %i (recursiva) = %i\n", vlr, TermialRecursivo(vlr));
				}
                break;
                
            case 9:
                opsub = Submenu(opcao);
                printf("Informe o numero para ver sua fatoracao: ");
                scanf("%i", &vlr);
                if(opsub == 1){
               		printf("\n o fatorial de %i (normal) = %i\n", vlr, FatorialNormal(vlr));
               	} else {
               		printf("\n o fatorial de %i (recursiva) = %i\n", vlr, FatorialRecursivo(vlr));
				}
                break;
            
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
                break;
                
        }
        if (opcao != 0) {
            printf("\nPressione qualquer tecla para continuar...");
		getch();
		}
		
    } while (opcao != 0); 

    return 0; 
	
}

int FatorialNormal(int vlr){
	int result=1;
	for(int i=vlr; i>1; i--){
		result *= i;
	}
	return(result);
}

int FatorialRecursivo(int vlr){
	if(vlr == 1){
		return(1);
	}
	else{
		return(vlr * FatorialRecursivo(vlr-1));
	}
}
