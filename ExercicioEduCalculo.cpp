/*
Codigo Leonardo, Wesley, Matheus e Rogerio.
*/

#include<stdio.h>
#include<string.h>

int main(void){
	
	float sb, sl, inss, vt, vr, va, irrf, am, sv,dependentes,depend,irrfcalc;
	char plano[20],nome[30];
	int calc1=0;
		
{//Comando coleta informações.
		
		printf("Digite o nome do funcionario: ");
		fgets(nome, sizeof(nome), stdin);
		
		printf("Digite o valor bruto do salario do funcionario: ");
		scanf("%f", &sb);

 		printf("Qual o plano de saude contratado pelo funcionario? Basico, Bronze, Brata ou Ouro? ");
 		scanf("%s",&plano);
 		
 		printf ("Qual o numero de dependentes do funcionario? ");
 		scanf ("%f",&dependentes);
 		depend=dependentes+1;
 }
	 
	 	
{//Cálculo de INSS.
	
	if (sb < 1399.13){
		inss = sb*0.08;
	}
	else {;}

	
	if (sb > 1399.12 && sb < 2331.89 ){
		inss = sb*0.09;
	}
	
	else{;}
	
	if(sb > 2331.88 && sb < 4663.76){
		inss = sb*0.11;
	}
	else{;}

	if(sb > 4663.75){
		inss = 513.01;
	}
	else{;}
	
}

 
{//Cálculo de Vale-transporte.

	vt = sb*0.06;
		
		if (vt > 308){
			vt=0;
		}
		else {;}
}

		
{//Cálculo vale-refeição.

	if (sb < 2047.31){
		vr = 22*2.40;
	}
	else {;}

	if (sb > 2047.30 && sb < 4094.54 ){
		vr = 22*3.46;
	}
	
	else{;}
	
	if(sb > 4094.55 && sb < 9819.14){
		vr = 22*5.56;
	}
	else{;}

	if(sb > 9819.15){
		vr = 22*7.14;
	}
	else{;}


}


{//Cálculo vale-alimentação.

	if (sb < 2047.31){
	va = 10.23;
	}
	else {;}

	if (sb > 2047.30 && sb < 4094.54 ){
		va = 20.47;
	}
	
	else{;}
	
	if(sb > 4094.55 && sb < 9819.14){
		va = 29.46;
	}
	else{;}

	if(sb > 9819.15){
		va = 45.54;
	}
	else{;}	

	}	

	
{//Cálculo Assistencia medica.
while (calc1==0){

	if (strcmp(plano,"basico")==0){
		
		if (sb < 2200){
			am = 32;
		}
		
		else if(sb > 2200.01 && sb < 3600){
		
			am = 35;
			}
			
		else if(sb > 3600.01 && sb <5900){
		 
			am = 37;
			}
			
		else if(sb > 5900.01){
		
			am = 40;
			}
			calc1=1;
	}
	
	else if(strcmp(plano,"bronze")==0){
		
		if (sb < 2200){
			am = 37;
		}
		
		else if(sb > 2200.01 && sb <3600){
		
			am = 40;
			}
			
		else if(sb > 3600.01 && sb <5900){
		
			am = 43;
			}
			
		else if(sb > 5900.01){
		
			am = 46;
			
			}
	calc1=1;
	}
	
	else if(strcmp(plano,"prata")==0){
		
		if (sb < 2200){
			am = 55;
		}
		
		else if(sb > 2200.01 && sb <3600){
		
			am = 60;
			}
			
		else if(sb > 3600.01 && sb <5900){
		
			am = 65;
			}
			
		else if(sb > 5900.01){
		
			am = 70;
			}
			calc1=1;
	}
	
	else if(strcmp(plano,"ouro")==0){
		
		if (sb < 2200){
			am = 70;
		}
		
		else if(sb > 2200.01 && sb <3600){
		
			am = 76;
			}
			
		else if(sb > 3600.01 && sb <5900){
		
			am = 83;
			}
			
		else if(sb > 5900.01){
		
			am = 91;
			}
		calc1=1;
	}

	}

	am=am*depend;

}

	
{//Cálculo Seguro de vida

sv = sb*0.0055;
	}	
	


{//Cálculo Imposto de renda

irrfcalc = sb-inss-(187.80*dependentes);

	if (irrfcalc < 1868.22){
		irrf=0;
	}
	
	else if (irrfcalc > 1868.23 && irrfcalc < 2799.86){
		irrf = (irrfcalc*0.075)-140.12;
	}
	
	else if (irrfcalc > 2799.87 && irrfcalc < 3733.19){
		irrf = (irrfcalc*0.15)-350.11;
	}

	else if (irrfcalc > 3733.20 && irrfcalc < 4664.68){
		irrf = (irrfcalc*0.225)-630.10;
		
	}
		
	else {
		irrf = (irrfcalc*0.275)-863.33;
	}
		
}

	
{//Apresentação em tela.

printf("=================================================================================================================\n");
	
	printf("O funcionario: %s \n",nome);
	printf("Salario base: R$ %.2f\n",sb);
	printf("Dependentes: %.0f\n",dependentes);
	printf("Plano de saude: %s\n",plano);
	
printf("=================================================================================================================\n");
	
	printf("Total de descontos \n\n");

	printf("O desconto do INSS: %.2f\n",inss);
	printf("O desconto do vale transporte: %.2f\n",vt);
	printf("O desconto do Vale refeicao: %.2f\n",vr);
	printf("O desconto do Vale Alimentacao: %.2f\n",va);
	printf("O desconto do Assistencia medica: %.2f\n",am);
	printf("O desconto do Seguro de vida: %.2f\n",sv);
	printf("O desconto do Imposto de Renda: %.2f\n\n",irrf);
	
	printf("Base de calculo Irff: R$%.2f\n\n",irrfcalc);
	
printf("=================================================================================================================\n\n");

	printf("Salario liquido R$ %.2f \n\n",sb-inss-vt-vr-va-am-sv-irrf);
	
printf("=================================================================================================================\n\n");

}

	return 0;
}

