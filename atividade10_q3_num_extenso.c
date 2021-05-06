#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void main(void)
{
	setlocale(LC_ALL,"");
	
	int n,c,d,u;
	char ctxt[64],dtxt[64],utxt[64],ntxt[128];
	
	printf("Informe um número entre 1 e 200: ");
	scanf("%i",&n);
	
	if (n>=1 && n<=200)
	{
		u = n % 10;
		d = n % 100 / 10;
		c = n % 1000 / 100;
        
		if (c == 0)
		   strcpy(ctxt,"");		   
		else if (c == 1)
		{
			if (d==0 && u==0)
			    strcpy(ctxt,"cem");
			else
				strcpy(ctxt,"cento");
	    } 
		else if (c == 2)
		    strcpy(ctxt,"duzentos");
		
		if (d == 0)    
		   strcpy(dtxt,"");
		else if (d == 1) 
		{
			strcpy(utxt,""); //Ignora texto para unidade
	        if (u==0)
	        	strcpy(dtxt,"dez");
	        else if (u==1)
	        	strcpy(dtxt,"onze");
	        else if (u==2)
	        	strcpy(dtxt,"doze");
	        else if (u==3)
	        	strcpy(dtxt,"treze");
	        else if (u==4)
	        	strcpy(dtxt,"quatorze");
	        else if (u==5)
	        	strcpy(dtxt,"quinze");
	        else if (u==6)
	        	strcpy(dtxt,"dezesseis");
	        else if (u==7)
	        	strcpy(dtxt,"dezessete");
	        else if (u==8)
	        	strcpy(dtxt,"dezoito");
	        else if (u==9)
	        	strcpy(dtxt,"dezenove");	        
		}
		else if (d==2)
			strcpy(dtxt,"vinte");
		else if (d==3)
			strcpy(dtxt,"trinta");
		else if (d==4)
			strcpy(dtxt,"quarenta");
		else if (d==5)
			strcpy(dtxt,"cinquenta");
		else if (d==6)
			strcpy(dtxt,"sessenta");
		else if (d==7)
			strcpy(dtxt,"setenta");
		else if (d==8)
			strcpy(dtxt,"oitenta");
		else if (d==9)
			strcpy(dtxt,"noventa");
				
		if (d!=1)
		{
			if (u==0)
			   strcpy(utxt,"");
			else if (u==1)
				strcpy(utxt,"um");
			else if (u==2)
				strcpy(utxt,"dois");
			else if (u==3)
				strcpy(utxt,"tres");
			else if (u==4)
				strcpy(utxt,"quatro");
			else if (u==5)
				strcpy(utxt,"cinco");
			else if (u==6)
				strcpy(utxt,"seis"); 
			else if (u==7)
				strcpy(utxt,"sete");
			else if (u==8)	
				strcpy(utxt,"oito");
			else if (u==9)
				strcpy(utxt,"nove");
		}
		//Construção do extenso com conectivo "e" 
		strcpy(ntxt,"");
		if (c==0 && d>0 && u>0)
		{
		   if (d==1)
		      strcat(ntxt,dtxt);
		   else
		   {
		      strcat(ntxt,dtxt); 
			  strcat(ntxt," e "); 
			  strcat(ntxt,utxt);
	       }
	    }
		else if  (c>0 && d==0 && u>0) 
		{
		    strcat(ntxt,ctxt); 
			strcat(ntxt," e "); 
			strcat(ntxt,utxt);
	    }
		else if  (c>0 && d>0 && u==0) 
		{
		    strcat(ntxt,ctxt); 
			strcat(ntxt," e "); 
			strcat(ntxt,dtxt);
	    }
		else if  (c>0 && d>0 && u>0) 
		   if (d==1)
		   {
		      strcat(ntxt,ctxt); 
			  strcat(ntxt," e "); 
			  strcat(ntxt,dtxt);
	       }
		   else
		   {
		      strcat(ntxt,ctxt); 
			  strcat(ntxt," e "); 
			  strcat(ntxt,dtxt); 
			  strcat(ntxt," e "); 
			  strcat(ntxt,utxt);
	       }
		else   	
		{
	      	strcat(ntxt,ctxt); 
		    strcat(ntxt,dtxt); 
		    strcat(ntxt,utxt);
	    }
		
		   
		printf("%s",ntxt);
	} 
	else
	{
		printf("%i nao esta no intervalo [1..200].",n);
	}
}


