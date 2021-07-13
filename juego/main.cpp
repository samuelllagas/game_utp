#include <windows.h>
#include "miniwin.h"
#include <sstream>
#include <stdio.h>


using namespace miniwin;


void explosion(int x, int y){ 
/*fase 1*/   
color_rgb(253,0,6);
circulo_lleno(x+10,y+10,20);
refresca();
color_rgb(255,126,6);
circulo_lleno(x+10,y+10,15);
refresca();
color_rgb(251,255,8);
circulo_lleno(x+10,y+10,10);
refresca();
color_rgb(255,255,255);//enviar
circulo_lleno(x+10,y+10,5);
refresca();
espera(75);
//borra();
color_rgb(0,0,0);
circulo_lleno(x+10,y+10,20);
refresca();
/*fase 2*/
color_rgb(253,0,6);
circulo_lleno(x+10,y+10,30);
refresca();
color_rgb(255,126,6);
circulo_lleno(x+10,y+10,25);
refresca();
color_rgb(251,255,8);
circulo_lleno(x+10,y+10,20);
refresca();
color_rgb(255,255,255);
circulo_lleno(x+10,y+10,15);
refresca();
espera(75);
//borra();
color_rgb(0,0,0);
circulo_lleno(x+10,y+10,30);
refresca();
/*fase 3*/
color_rgb(253,0,6);
circulo_lleno(x+10,y+10,40);
refresca();
color_rgb(255,126,6);
circulo_lleno(x+10,y+10,35);
refresca();
color_rgb(251,255,8);
circulo_lleno(x+10,y+10,30);
refresca();
color_rgb(255,255,255);
circulo_lleno(x+10,y+10,25);
refresca();
espera(75);
//borra();
color_rgb(0,0,0);
circulo_lleno(x+10,y+10,40);
refresca();
/*fase 4*/
color_rgb(253,0,6);
circulo_lleno(x+10,y+10,50);
refresca();
color_rgb(255,126,6);
circulo_lleno(x+10,y+10,45);
refresca();
color_rgb(251,255,8);
circulo_lleno(x+10,y+10,40);
refresca();
color_rgb(255,255,255);
circulo_lleno(x+10,y+10,35);
refresca();
espera(75);
//borra();
color_rgb(0,0,0);
circulo_lleno(x+10,y+10,50);
refresca();
/*fase 5*/
color_rgb(253,0,6);
circulo_lleno(x+10,y+10,40);
refresca();
color_rgb(255,126,6);
circulo_lleno(x+10,y+10,35);
refresca();
color_rgb(251,255,8);
circulo_lleno(x+10,y+10,30);
refresca();
color_rgb(255,255,255);
circulo_lleno(x+10,y+10,25);
refresca();
espera(75);
//borra();
color_rgb(0,0,0);
circulo_lleno(x+10,y+10,40);
refresca();
/*fase 6*/
color_rgb(253,0,6);
circulo_lleno(x+10,y+10,30);
refresca();
color_rgb(255,126,6);
circulo_lleno(x+10,y+10,25);
refresca();
color_rgb(251,255,8);
circulo_lleno(x+10,y+10,20);
refresca();
color_rgb(255,255,255);
circulo_lleno(x+10,y+10,15);
refresca();
espera(75);
//borra();
color_rgb(0,0,0);
circulo_lleno(x+10,y+10,30);
refresca();
/*fase 7*/   
color_rgb(253,0,6);
circulo_lleno(x+10,y+10,20);
refresca();
color_rgb(255,126,6);
circulo_lleno(x+10,y+10,15);
refresca();
color_rgb(251,255,8);
circulo_lleno(x+10,y+10,10);
refresca();
color_rgb(255,255,255);
circulo_lleno(x+10,y+10,5);
refresca();
espera(75);
//borra();
color_rgb(0,0,0);
circulo_lleno(x+10,y+10,20);
refresca();
}
void Player(int x, int y){
     // NAVE PRINCIPAL 
         
                                                
       //raya cruzada
       color(VERDE);
       rectangulo_lleno(8+x,20+y,42+x,45+y);
         
       color(VERDE);
       //raya vertical izq        
       rectangulo_lleno(2+x,25+y,6+x,37+y);
       //raya vertical der       
       rectangulo_lleno(44+x,25+y,48+x,37+y);
                      
        //izq punta izq
        color(AZUL);
        rectangulo_lleno(-3+x,15+y,2+x,37+y);
        //izq punta der
        color(AZUL);
        rectangulo_lleno(6+x,10+y,10+x,37+y);
                      
        //der punta izq
        color(AZUL);
        rectangulo_lleno(40+x,10+y,44+x,37+y);
        //der punta der
        color(AZUL);
        rectangulo_lleno(48+x,15+y,53+x,37+y);
           
        //centro
         color(AZUL);
         rectangulo_lleno(16+x,25+y,33+x,50+y);
         //Frente
          color(VERDE);
         rectangulo_lleno(18+x,10+y,32+x,25+y);
          //Frente medio
          color(BLANCO);
           rectangulo_lleno(22+x,-3+y,28+x,52+y);
           rectangulo_lleno(24+x,-7+y,26+x,-3+y);
          //Frente medio izq
           color(AZUL);
           rectangulo_lleno(17+x,3+y,21+x,15+y);
           rectangulo_lleno(17+x,2+y,19+x,3+y);
           rectangulo_lleno(19+x,1+y,21+x,2+y);            
           rectangulo_lleno(21+x,0+y,23+x,1+y);
           //Frente medio der
           color(AZUL);
           rectangulo_lleno(29+x,3+y,33+x,15+y);            
           rectangulo_lleno(31+x,2+y,33+x,3+y);
           rectangulo_lleno(29+x,1+y,31+x,2+y);
           rectangulo_lleno(27+x,0+y,29+x,1+y);        
           rectangulo_lleno(15+x,25+y,19+x,45+y);
           rectangulo_lleno(19+x,30+y,23+x,50+y);
           rectangulo_lleno(31+x,25+y,35+x,45+y);
           rectangulo_lleno(27+x,30+y,31+x,50+y);
           color(VERDE);
           rectangulo_lleno(20+x,35+y,30+x,38+y);

}
 int estrellas(){
           for(int i=0;i<15;i++){
               int x =rand()%800;
               int y =rand()%800;
               color(BLANCO);
               rectangulo_lleno(x,y,x+5,y+5);
               }
               }   

void PlayerBullet(int xx, int yy){
     if(yy==400 | yy==0){
       color_rgb(0,0,0);          
     }
     else{
       color_rgb(255,242,0);
       rectangulo_lleno(18+xx,0+yy,22+xx,10+yy);  
                                           }
     }
  
  
     void estructura(int x ,int y , int r,int g, int b){
          color_rgb(r,g,b);
           rectangulo_lleno(0,0,5,25);
           rectangulo_lleno(5,20,105,25);
           rectangulo_lleno(25,0,30,20);
           
           rectangulo_lleno(30,10,45,20);
           rectangulo_lleno(45,10,55,20);
           rectangulo_lleno(35,0,60,5);
           rectangulo_lleno(60,0,65,20);
           rectangulo_lleno(65 ,0,75,5);
           rectangulo_lleno(70,5,75,10);
           rectangulo_lleno(80,15,85,20);
           rectangulo_lleno(85,10,90,20);
           rectangulo_lleno(90,0,100,20);
           rectangulo_lleno(100,0,105,20);
           rectangulo_lleno(10,0,15,5);
           rectangulo_lleno(10,5,20,10);
           rectangulo_lleno(105,0,180,5);
          rectangulo_lleno(105,20,640,25); 
          rectangulo_lleno(130,0,640,5);
            rectangulo_lleno(130,5,640,10);
            
          rectangulo_lleno(130,10,640,15);
             rectangulo_lleno(130,15,640,20);
            color_rgb(245,32,11);
           rectangulo_lleno(5,0,10,10);
           rectangulo_lleno(5,10,25,20);
           rectangulo_lleno(15,0,25,5);
           rectangulo_lleno(30,0,35,10);
           
           rectangulo_lleno(35,5,60,10);
           
           rectangulo_lleno(20,5,25,20);
           
           rectangulo_lleno(55,10,60,20);
           
           rectangulo_lleno(45,10,50,20);
           
           rectangulo_lleno(65,5,70,20);
           rectangulo_lleno(70,10,80,20);
           rectangulo_lleno(75,0,80,20);
           rectangulo_lleno(80,0,85,15);
           rectangulo_lleno(85,0,90,10);
           rectangulo_lleno(90,0,95,5);
           
            rectangulo_lleno(120,15,130,20);
             rectangulo_lleno(120,10,130,15);
             rectangulo_lleno(165,15,170,20);
             rectangulo_lleno(165,10,170,20);
             rectangulo_lleno(120,5,170,10);
             rectangulo_lleno(105,5,120,20);
             
             rectangulo_lleno(200,0,225,5);
             rectangulo_lleno(205,5,220,10);
              rectangulo_lleno(210,10,215,20);
              
              
               rectangulo_lleno(255,0,280,5);
              rectangulo_lleno(255,5,260,10);
              
               rectangulo_lleno(270,5,280,10);
               
                rectangulo_lleno(280,10,305,15);
                
                 rectangulo_lleno(305,5,310,10);
                 
                  rectangulo_lleno(280,15,285,20);
                   rectangulo_lleno(300,15,305,20);
                    rectangulo_lleno(340,15,360,20);
                    
                     rectangulo_lleno(345,10,360,15);
                      rectangulo_lleno(350,5,360,10);
                      
                     rectangulo_lleno(355,0,400,5);
                     
                      rectangulo_lleno(390,0,400,20);
                      
                     rectangulo_lleno(365,10,370,20);
                     
                      rectangulo_lleno(370,15,390,20);
    rectangulo_lleno(420,0,430,5); 
      rectangulo_lleno(425,5,435,10);
       rectangulo_lleno(430,10,440,15);
        rectangulo_lleno(440,15,455,20);  
        
          rectangulo_lleno(450,10,460,15);
             rectangulo_lleno(455,5,465,10);
               rectangulo_lleno(460,0,470,5);    
               
                  rectangulo_lleno(435,15,440,20); 
                  
                                
                 rectangulo_lleno(480,0,485,25);  
                   rectangulo_lleno(485,0,510,5);  
                   		      
                   rectangulo_lleno(505,5,510,15);
                   rectangulo_lleno(485,15,510,20); 
                   
                   rectangulo_lleno(515,0,520,25);  
                     rectangulo_lleno(520,0,545,5); 
                     
                       rectangulo_lleno(520,10,545,15);
                       rectangulo_lleno(520,20,545,25); 
                       
                  rectangulo_lleno(550,0,555,25);     
                     rectangulo_lleno(555,0,580,5);  
                     
                        rectangulo_lleno(575,5,580,15);
                        rectangulo_lleno(555,15,580,20); 
                        rectangulo_lleno(570,20,575,25);   
                        
                   rectangulo_lleno(590,0,595,25);  
                   
                  rectangulo_lleno(610,0,615,25);            
                    rectangulo_lleno(595,20,615,25);                   
                      
          }

void Enemy(int x, int y, int r, int g, int b){
     /*color_rgb(r,g,b);
     rectangulo_lleno(x   ,y   ,40+x,20+y);
     rectangulo_lleno(x   ,y-10,10+x,30+y); 
     rectangulo_lleno(x+40,y-10,50+x,30+y);*/
     
     
     //AQUI EMPIEZA UN ENEMIGO MODELO
     /*	color_rgb(255,240,240);//blanco
     	rectangulo_lleno(x+30,y,x+60,y+5);
     	rectangulo_lleno(x+20,y+5,x+30,y+10);
         rectangulo_lleno(x+55,y+5,x+65,y+10);
     	rectangulo_lleno(x+35,y+30,x+50,y+35);
     	rectangulo_lleno(x+30,y+35,x+40,y+40);
     	rectangulo_lleno(x+45,y+35,x+55,y+40);
     	rectangulo_lleno(x+30,y+40,x+55,y+45);
     		rectangulo_lleno(x+35,y+50,x+50,y+55);
     	rectangulo_lleno( x+30,y+55,x+40,y+60);  
         rectangulo_lleno( x+45,y+55,x+65,y+60);  	
     	rectangulo_lleno(x+30,y+60,x+65,y+65);
           rectangulo_lleno(x+20,y+70,x+65,y+75);
        rectangulo_lleno(x+15,y+10,x+25,y+15);   
           
         rectangulo_lleno(x+60,y+10,x+70,y+15);  			
     		color_rgb(107,20,220);//morado
     	rectangulo_lleno(x+30,y+5,x+55,y+10);
     	rectangulo_lleno(x+25,y+10,x+35,y+15);
     	rectangulo_lleno(x+50,y+10,x+60,y+15);
     rectangulo_lleno(x+40,y+35,x+45,y+40);	
     rectangulo_lleno(x+40,y+55,x+45,y+60);	
   
     		color_rgb(249,241,7);//ama
     		rectangulo_lleno(x+35,y+10,x+50,y+15);
     		rectangulo_lleno(x+30,y+15,x+55,y+20);
          	rectangulo_lleno(x+25,y+20,x+60,y+25);   	
	     	rectangulo_lleno(x+20,y+25,x+65,y+30); 
         	rectangulo_lleno(x+20,y+30,x+35,y+35); 
         	    	rectangulo_lleno(x+50,y+30,x+65,y+35); 
         	  	rectangulo_lleno(x+10,y+45,x+75,y+50);  	
         	    	rectangulo_lleno(x+15,y+50,x+35,y+55);
                            	rectangulo_lleno( x+50,y+50,x+70,y+55);	
                   rectangulo_lleno( x+20,y+30,x+30,y+45); 
                   rectangulo_lleno( x+55,y+30,x+65,y+45); 
                   rectangulo_lleno( x+20,y+55,x+30,y+70);
                   rectangulo_lleno( x+55,y+55,x+65,y+70);      	
                 rectangulo_lleno(x+20,y+65,x+65,y+70);	
             
                 
                            	
     	color_rgb(r,g,b);
	rectangulo_lleno(x+10,y+70,x+75,y+75);
rectangulo_lleno(x+5,y+75,x+80,y+80);
rectangulo_lleno(x+15,y+80,x+70,y+85);	
	rectangulo_lleno(x+30,y+85,x+55,y+90);*/
	
	//AQUI TERMINA UN ENEMIGO
	
	//EMPIEZA ESCORPION
	color_rgb(204,18,173);
	
rectangulo_lleno(x+46,y+2,x+58,y+4);	
rectangulo_lleno(x+44,y+4,x+58,y+6);
    rectangulo_lleno(x+40,y+6,x+60,y+8);
	rectangulo_lleno(x+38,y+8,x+60,y+10);
	rectangulo_lleno(x+38,y+10,x+60,y+12);
	rectangulo_lleno(x+34,y+12,x+62,y+14);
	rectangulo_lleno(x+52,y+14,x+64,y+16);
	rectangulo_lleno(x+32,y+14,x+48,y+16);
	rectangulo_lleno(x+30,y+16,x+44,y+18);
	
	rectangulo_lleno(x+32,y+18,x+54,y+20);
	rectangulo_lleno(x+32,y+20,x+54,y+22);
	rectangulo_lleno(x+32,y+22,x+54,y+24);
    rectangulo_lleno(x+36,y+24,x+54,y+26);
      rectangulo_lleno(x+36,y+26,x+48,y+28);
   rectangulo_lleno(x+36,y+28,x+46,y+30);
 rectangulo_lleno(x+36,y+30,x+46,y+32);
rectangulo_lleno(x+34,y+32,x+46,y+34);


rectangulo_lleno(x+46,y+34,x+48,y+36);
rectangulo_lleno(x+48,y+36,x+50,y+38);
rectangulo_lleno(x+50,y+38,x+52,y+40);
rectangulo_lleno(x+52,y+40,x+54,y+42);
rectangulo_lleno(x+54,y+42,x+56,y+44);
rectangulo_lleno(x+54,y+44,x+56,y+46);
rectangulo_lleno(x+52,y+46,x+54,y+48);
rectangulo_lleno(x+50,y+48,x+52,y+50);
rectangulo_lleno(x+46,y+50,x+50,y+52);
rectangulo_lleno(x+46,y+52,x+48,y+54);
rectangulo_lleno(x+44,y+54,x+46,y+56);
rectangulo_lleno(x+42,y+56,x+44,y+58);
rectangulo_lleno(x+40,y+58,x+42,y+60);

rectangulo_lleno(x+48,y+52,x+54,y+54);


rectangulo_lleno(x+54,y+54,x+56,y+56);
rectangulo_lleno(x+56,y+56,x+58,y+58);
rectangulo_lleno(x+58,y+58,x+60,y+60);
rectangulo_lleno(x+60,y+60,x+62,y+62);
rectangulo_lleno(x+62,y+62,x+64,y+64);
rectangulo_lleno(x+64,y+62,x+66,y+64);
rectangulo_lleno(x+66,y+60,x+70,y+62);
rectangulo_lleno(x+66,y+58,x+70,y+60);

rectangulo_lleno(x+46,y+56,x+52,y+58);
rectangulo_lleno(x+50,y+58,x+52,y+60);
rectangulo_lleno(x+52,y+60,x+56,y+62);
rectangulo_lleno(x+56,y+62,x+58,y+64);
rectangulo_lleno(x+54,y+64,x+58,y+66);


rectangulo_lleno(x+64,y+62,x+66,y+64);
rectangulo_lleno(x+60,y+64,x+62,y+66);
rectangulo_lleno(x+58,y+66,x+60,y+68);
rectangulo_lleno(x+56,y+68,x+58,y+70);
rectangulo_lleno(x+52,y+70,x+66,y+72);
rectangulo_lleno(x+62,y+68,x+68,y+70);
rectangulo_lleno(x+66,y+68,x+70,y+70);

rectangulo_lleno(x+52,y+72,x+66,y+74);


rectangulo_lleno(x+32,y+34,x+34,y+36);
rectangulo_lleno(x+30,y+36,x+32,y+38);
rectangulo_lleno(x+28,y+38,x+30,y+40);
rectangulo_lleno(x+26,y+40,x+28,y+42);
rectangulo_lleno(x+24,y+42,x+26,y+44);
rectangulo_lleno(x+22,y+44,x+24,y+46);
rectangulo_lleno(x+24,y+46,x+26,y+48);
rectangulo_lleno(x+26,y+48,x+28,y+50);
rectangulo_lleno(x+26,y+50,x+30,y+52);
rectangulo_lleno(x+28,y+52,x+30,y+54);
rectangulo_lleno(x+30,y+54,x+34,y+56);
rectangulo_lleno(x+32,y+56,x+36,y+58);
rectangulo_lleno(x+34,y+58,x+38,y+60);
rectangulo_lleno(x+36,y+60,x+40,y+62);
rectangulo_lleno(x+18,y+50,x+26,y+52);

rectangulo_lleno(x+18,y+52,x+20,y+54);

rectangulo_lleno(x+16,y+54,x+18,y+56);
rectangulo_lleno(x+14,y+56,x+16,y+58);
rectangulo_lleno(x+10,y+52,x+16,y+54);
rectangulo_lleno(x+10,y+50,x+14,y+52);
rectangulo_lleno(x+8,y+54,x+16,y+56);
rectangulo_lleno(x+6,y+54,x+8,y+60);
rectangulo_lleno(x+8,y+60,x+10,y+62);
rectangulo_lleno(x+10,y+62,x+12,y+64);
rectangulo_lleno(x+10,y+64,x+18,y+66);
rectangulo_lleno(x+18,y+62,x+20,y+64);
rectangulo_lleno(x+16,y+60,x+18,y+62);
rectangulo_lleno(x+18,y+58,x+20,y+60);
rectangulo_lleno(x+20,y+56,x+22,y+58);
rectangulo_lleno(x+22,y+54,x+28,y+56);
rectangulo_lleno(x+10,y+66,x+18,y+68);
rectangulo_lleno(x+10,y+68,x+18,y+70);


color_rgb(244,66,54);

rectangulo_lleno(x+34,y+32,x+46,y+34);
rectangulo_lleno(x+32,y+34,x+48,y+36);
rectangulo_lleno(x+30,y+36,x+50,y+38);
rectangulo_lleno(x+28,y+38,x+52,y+40);
rectangulo_lleno(x+26,y+40,x+54,y+42);
rectangulo_lleno(x+24,y+42,x+56,y+44);
rectangulo_lleno(x+24,y+44,x+54,y+46);
rectangulo_lleno(x+26,y+46,x+52,y+48);
rectangulo_lleno(x+28,y+48,x+50,y+50);
rectangulo_lleno(x+30,y+50,x+48,y+52);
rectangulo_lleno(x+30,y+52,x+46,y+54);

color_rgb(0,150,135);
rectangulo_lleno(x+32,y+54,x+44,y+56);
rectangulo_lleno(x+34,y+56,x+42,y+58);
rectangulo_lleno(x+36,y+58,x+40,y+60);

color_rgb(r,g,b);
rectangulo_lleno(x+26,y+50,x+28,y+52);
rectangulo_lleno(x+20,y+52,x+26,y+54);
rectangulo_lleno(x+16,y+54,x+20,y+56);
rectangulo_lleno(x+14,y+56,x+18,y+58);
rectangulo_lleno(x+8,y+54,x+22,y+56);
rectangulo_lleno(x+8,y+56,x+20,y+58);
rectangulo_lleno(x+8,y+58,x+18,y+60);
rectangulo_lleno(x+8,y+60,x+16,y+62);
rectangulo_lleno(x+8,y+62,x+16,y+64);
rectangulo_lleno(x+8,y+64,x+16,y+66);
rectangulo_lleno(x+8,y+66,x+16,y+68);

rectangulo_lleno(x+46,y+52,x+60,y+54);
rectangulo_lleno(x+46,y+54,x+60,y+56);
rectangulo_lleno(x+50,y+56,x+60,y+58);
rectangulo_lleno(x+52,y+58,x+60,y+60);
rectangulo_lleno(x+52,y+60,x+60,y+62);

rectangulo_lleno(x+52,y+62,x+60,y+64);
rectangulo_lleno(x+52,y+64,x+60,y+66);


color_rgb(183,28,28);
rectangulo_lleno(x+8,y+68,x+16,y+70);
rectangulo_lleno(x+8,y+70,x+16,y+72);
rectangulo_lleno(x+52,y+66,x+60,y+68);
rectangulo_lleno(x+52,y+68,x+60,y+70);
rectangulo_lleno(x+52,y+70,x+60,y+72);
     }
     
     void numero(int x, int y){
          	color_rgb(249,241,7);
          rectangulo_lleno( x+20,y+30,x+30,y+45); 
          }

void EnemyRow01Bullet(int xv, int yz){
     if(yz==500 | yz==20){
                color_rgb(0,0,0);          
     }
     else{
          color_rgb(62,200,24);
          rectangulo_lleno(18+xv,0+yz,22+xv,10+yz);  
          }
     }
void EnemyRow02Bullet(int xv, int yz){
     if(yz==500 | yz==20){
                color_rgb(0,0,0);          
     }
     else{
          color_rgb(62,200,24);
          rectangulo_lleno(18+xv,0+yz,22+xv,10+yz);  
          }
     }
     
void PlayerHeart(int x, int y, int xx){//barra de vidas
          color_rgb(200,20,20);
          rectangulo_lleno(x,y,xx+x,y+20);  
     }

std::string ShowScore (std::string text,int number){
         std::stringstream sstm;
         sstm << text << number;
         return sstm.str();    
     }
std::string LifePercent(std::string text,int PlayerLifeCounter){//barra de vidas contador
	 double num=(double)PlayerLifeCounter;
	 //int num=(PlayerLifeCounter/40)*100;
	 std::stringstream sstm;
	  sstm<<text<<(num/40)*100;
	  return sstm.str();
}     

int main(){
   
    //Gamebox
    int WIDTH  = 640;//ancho
    int HEIGHT = 480;//alto
    vredimensiona(WIDTH,HEIGHT);//redimensaion de la pantalla
    
    //Variables
    
   int xn=300,yn=220; //numerocdibujo
    int ex=400, ey=320;
     int ex1=500, ey1=320;
    int PlayerX = 320, PlayerY = 350; //para dibujar personaje
    int PlayerBulletX=320, PlayerBulletY=350;//bala del jugador         
    
    int EnemyRow01X = 160, EnemyRow01Y = 40;// enemigo
    int EnemyRow01BulletX=160, EnemyRow01BulletY=40;//bala del enemigo1
    
    int EnemyRow02X = 480, EnemyRow02Y = 200;// enemigo2
    int EnemyRow02BulletX=480, EnemyRow02BulletY=200;//bala del enemigo2
    
    int t = tecla();
    int RandomRow01,RollRow01;//?
    int RandomRow02,RollRow02;
    int RNGSpawn01, RNGSpawn02;//aparecer aleatorio
    
    bool PlayerAlive = true;//jugador vivo
    bool EnemyRow01Alive = true;//jugador enemigo1
    bool EnemyRow02Alive = true;//jugador enemigo2
    
    int EnemyRow01Counter = 0;
    int EnemyRow02Counter = 0;
    int PlayerLifeCounter = 40;
    
    std::string ScoreText = "Current Score = ";// Puntuación actual
    std::string BestScoreText = "Best Score = ";///Mejor escore
    std::string GameOverText = "Game Over. Final Score = ";//Finalizar
 std::string RestartText = "Presionar ARRIBA para reiniciar";//Presionar tecla arriba para dar
     std::string nombre = "Alumno : O. Samuel LLagaz D.";//
      std::string niveles1 = "Nivel 1";//
       std::string niveles2 = "Nivel 2";//
        std::string niveles3 = "Nivel 3";//
         std::string niveles4 = "Nivel 4";//
          std::string niveles5 = "Nivel 5";//
    std::string Percent="Pts.    ";//muestra puntos
    int CurrentScoreNumber = 0;//marcador de puntuación
    int BestScoreNumber = 0;//mejor de puntuación
    
    int Row01R,Row01G, Row01B;//colores aleatorios supongo
    int Row02R,Row02G, Row02B;//colores2 aleatorios supongo
    
    int Row01BonusX = 0;
    int Row02BonusX = 0;
    int Row01BonusBulletY = 0;
    int Row02BonusBulletY = 0;
    int BonusDamage = 0;

    //Gameloop & Update Cycle
    
   while(PlayerAlive){
            
          
    if(t != ESCAPE){
              //system("explorer.exe descarga.jpg");    
        //Player Controls
      
            
        if(PlayerAlive){
            //  mciSendString("open fondo.wav alias MyFile",0,1,0);
            //   mciSendString("play MyFile wait",0,1,0);
        // mciSendString("close MyFile",0,1,0);
             }
      
        if (PlayerAlive){
             
               
            if(t == IZQUIERDA){
                if(PlayerX == 0){
                            }
                else {PlayerX = PlayerX-5, PlayerY = PlayerY+0;}
            } 
            else if(t == DERECHA){//limites posición
                if(PlayerX == 595){ }
                else PlayerX = PlayerX+5, PlayerY = PlayerY+0;
            }
            if(t == ARRIBA){
                if(PlayerY== 30){ }
                else {PlayerX = PlayerX-0, PlayerY = PlayerY-10;}
            } 
            else if(t == ABAJO){//limites posición
                if(PlayerY == 380){//valores fijos para marca la posiciion  de colsion
                            }
                else PlayerX = PlayerX+0, PlayerY = PlayerY+10;//debe ser divisible de 380
            }
            //Shooting
            if(PlayerBulletY<=0 && t==ESPACIO){
                 PlayerBulletX=PlayerX; PlayerBulletY=PlayerY-30;
              
                  PlaySound ("laser1.wav",NULL,SND_ASYNC);
                 }
            if(t==ESPACIO){
                 if(PlayerBulletY>=390 && PlayerBulletY<=400 ){
                    PlayerBulletX = PlayerX, PlayerBulletY= PlayerBulletY-10;
                    
                  
                    
                    }  
              
              }
            if(t=ESPACIO){
                 if(PlayerBulletY<=391 && PlayerBulletY>=0){
                    PlayerBulletX = PlayerBulletX+0, PlayerBulletY= PlayerBulletY-10;
                    }
            }
        }
        else if(t == ARRIBA){
             //codigo en duda
                 CurrentScoreNumber = 0;
                 PlayerAlive = true;
                 PlayerLifeCounter = 40;
                 PlayerX = 320, PlayerY = 400; 
                 PlayerBulletX=320, PlayerBulletY=400;
            }
        //AI
        
        //Enemy Row 1
        if (EnemyRow01Alive){
            //Enemy Row 1 Movement
            if(RandomRow01==0){
                               RollRow01=IZQUIERDA;}
            if(RandomRow01==1)
            {RollRow01=DERECHA;}
            RandomRow01 = rand()%50;//radom de 0 a 49
            
            if(RollRow01 == IZQUIERDA){
                  if(EnemyRow01X>=0){
                     EnemyRow01X = EnemyRow01X-(2+Row01BonusX), EnemyRow01Y = EnemyRow01Y+0;
                  }
            } else if(RollRow01 == DERECHA){
                   if(EnemyRow01X<590){
                     EnemyRow01X = EnemyRow01X+(2+Row01BonusX), EnemyRow01Y = EnemyRow01Y+0;
                }
            }
            
            if(EnemyRow01BulletY>=HEIGHT && t==ESPACIO){
                EnemyRow01BulletX = EnemyRow01X+18;
                EnemyRow01BulletY = EnemyRow01Y+(60+Row01BonusBulletY);
              //  PlaySound ("laser.wav ",NULL,SND_ASYNC);
            } 
            //Enemy Row 1 Shooting
            if(t==ESPACIO){
                if(EnemyRow01BulletY>=10 && EnemyRow01BulletY<=31 ){
                   EnemyRow01BulletX = EnemyRow01X, EnemyRow01BulletY= EnemyRow01BulletY+(4+Row01BonusBulletY);
                  
                }  
            }

            if(t=ESPACIO){
                if(EnemyRow01BulletY>=21 && EnemyRow01BulletY<=HEIGHT){
                   EnemyRow01BulletX = EnemyRow01BulletX+0, EnemyRow01BulletY= EnemyRow01BulletY+(4+Row01BonusBulletY);
                
                
                }
            }
        }
        
        
        //Enemy Row 2
        if (EnemyRow02Alive){
            //Enemy Row 2 Movement                 
            if(RandomRow02==0){RollRow02=IZQUIERDA;}
            if(RandomRow02==1){RollRow02=DERECHA;}
            RandomRow02= rand()%50;
            
            if(RollRow02 == IZQUIERDA){
                  if(EnemyRow02X>=0){
                     EnemyRow02X = EnemyRow02X-(2+Row02BonusX), EnemyRow02Y = EnemyRow02Y+0;
                  }
            } else if(RollRow02 == DERECHA){
                   if(EnemyRow02X<590){
                     EnemyRow02X = EnemyRow02X+(2+Row02BonusX), EnemyRow02Y = EnemyRow02Y+0;
                }
            }
            //Enemy Row 2 Shooting
            if(EnemyRow02BulletY>=HEIGHT && t==ESPACIO){
                EnemyRow02BulletX = EnemyRow02X+28;
                EnemyRow02BulletY = EnemyRow02Y+(60+Row01BonusBulletY);
              //  PlaySound ("laser.wav ",NULL,SND_ASYNC);
            } 
            
            if(t==ESPACIO){
                if(EnemyRow02BulletY>=20 && EnemyRow02BulletY<=31 ){
                   EnemyRow02BulletX = EnemyRow02X, EnemyRow02BulletY= EnemyRow02BulletY+(4+Row01BonusBulletY);
                }  
            }

            if(t=ESPACIO){
                if(EnemyRow02BulletY>=21 && EnemyRow02BulletY<=HEIGHT){
                   EnemyRow02BulletX = EnemyRow02BulletX+0, EnemyRow02BulletY= EnemyRow02BulletY+(4+Row01BonusBulletY);
                }
            }
        } 
        // Colision Detection 
           // Player Bullets to the Enemy on Row 1    
              if(EnemyRow01Alive){ 
                  if(PlayerBulletX>=EnemyRow01X-20 && PlayerBulletX<=EnemyRow01X+30){
                                                   
                     if(PlayerBulletY>=50 && PlayerBulletY<=80){
                      // PlaySound ("colision.wav",NULL,SND_ASYNC); 
                        EnemyRow01Alive = false;
                        EnemyRow01X = -20, EnemyRow01Y = -20;//20 20
                        CurrentScoreNumber += 50;
                        PlayerLifeCounter += BonusDamage;
                          
                        if (PlayerLifeCounter > 40){PlayerLifeCounter = 40;
                      
                        
                        }
                      
                         
                     }
                  }
                
              }
          // Player Bullets to the Enemy on Row 2        
             if(EnemyRow02Alive){ 
                 if(PlayerBulletX>=EnemyRow02X-20 && PlayerBulletX<=EnemyRow02X+30){
                
                     if(PlayerBulletY>=70 && PlayerBulletY<=180){
                                         //  PlaySound ("colision.wav",NULL,SND_ASYNC); 
                        EnemyRow02Alive = false;
                        CurrentScoreNumber += 60;
                        PlayerLifeCounter += BonusDamage;
                        if (PlayerLifeCounter > 40){PlayerLifeCounter = 40;}
                     }
                  }
              }
          // Enemy on Row 1 Bullets to the Player
             if(PlayerAlive){  
                               
                               
                 if(EnemyRow01BulletX>=PlayerX-20 && EnemyRow01BulletX<=PlayerX+20){
                                               
                    if(EnemyRow01BulletY>=400 && EnemyRow01BulletY<=430){
                                               
                        PlayerLifeCounter -= 1+BonusDamage;
                        // PlaySound ("explosion.wav",NULL,SND_ASYNC);   
                        
                     }
                  }
              }
            
          // Enemy on Row 2 Bullets to the Player
              if(PlayerAlive){ 
                               
                               
                  if(EnemyRow02BulletX>=PlayerX-20 && EnemyRow02BulletX<=PlayerX+20){
                     if(EnemyRow02BulletY>=400 && EnemyRow02BulletY<=430){
                        PlayerLifeCounter -= 1 +BonusDamage;
                      // PlaySound ("explosion.wav",NULL,SND_ASYNC);
                         
                      }
                  }
              }
        
        //Delete & Create
            borra();
            //Check Player Alive & Paint if so
            if (PlayerLifeCounter <= 0){
                                    
                                  PlayerBullet(0, 0);
                                  PlayerAlive = false;
                                   explosion(PlayerX,PlayerY); //falta colocar correctamente
                                 //  PlaySound ("fondo.wav",NULL,SND_ASYNC);
								  }
								  
								 
            if (PlayerAlive){
                             
                             Player(PlayerX,PlayerY);
                             
                     
                       
            }
            if (PlayerAlive){
                             PlayerBullet(PlayerBulletX, PlayerBulletY);}
            
			
            
            //Paint Enemy Row 01
            if (EnemyRow01Alive){Enemy(EnemyRow01X, EnemyRow01Y,Row01R,Row01G, Row01B);
            }
            if (EnemyRow01Alive){EnemyRow01Bullet(EnemyRow01BulletX,EnemyRow01BulletY);}
            
            //Paint Enemy Row 02
            if (EnemyRow02Alive){Enemy(EnemyRow02X, EnemyRow02Y,Row02R,Row02G, Row02B);}
            if (EnemyRow02Alive){EnemyRow02Bullet(EnemyRow02BulletX,EnemyRow02BulletY);}
            
            //Respawning check & Restart Position Pseudorandomly of Enemy Row 01
            if (!EnemyRow01Alive){
                                  
                                  RNGSpawn01 = rand()%5;
                                  switch(RNGSpawn01) {
                                  case 0 : EnemyRow01X = 20; break;
                                  case 1 : EnemyRow01X = 160;break;
                                  case 2 : EnemyRow01X = 240;break;
                                  case 3 : EnemyRow01X = 320;break;
                                  }
                                  EnemyRow01Y = 50;
                                  EnemyRow01BulletX=EnemyRow01X, EnemyRow01BulletY=50;
                                  EnemyRow01Counter += 5;}
            if (EnemyRow01Counter == 1000){
                                  EnemyRow01Counter = 0;
                                  EnemyRow01Alive = true;}
            
            //Respawning check & Restart Position Pseudorandomly of Enemy Row 02
            if (!EnemyRow02Alive){
                                  RNGSpawn02 = rand()%5;
                                  switch(RNGSpawn02) {
                                  case 0 : EnemyRow02X = 20; break;
                                  case 1 : EnemyRow02X = 160;break;
                                  case 2 : EnemyRow02X = 240;break;
                                  case 3 : EnemyRow02X = 320;break;
                                  }
                                  EnemyRow02Y = 100;
                                  EnemyRow02BulletX=EnemyRow02X, EnemyRow02BulletY=100;
                                  EnemyRow02Counter += 5;}
            if (EnemyRow02Counter == 1000){
                                  EnemyRow02Counter = 0;
                                  EnemyRow02Alive = true;}
            if (PlayerAlive){
                             
            //Score Screen
            
           
            //rectangulo_lleno(0,420,640,440);
             color_rgb(245, 32, 11);
           rectangulo_lleno(0,420,209.3,440);
            rectangulo_lleno(420.6,420,640,440);
           color_rgb(255,255,255);
            rectangulo_lleno(209.3,420,420.6,440);
            color_rgb(212, 142, 12);
            
            
            rectangulo_lleno(0,430,640,480);
            color_rgb(212, 39, 0);
            rectangulo_lleno(30,440,230,460);
            
          
            
            texto(440, 438, ShowScore(ScoreText,CurrentScoreNumber));
            texto(440, 450, ShowScore(BestScoreText,BestScoreNumber));
            texto(250,440,LifePercent(Percent,PlayerLifeCounter));
            
             texto(270, 450, nombre);
          
            texto(310,440,"   % ");
            if (BestScoreNumber < CurrentScoreNumber) {BestScoreNumber = CurrentScoreNumber;}
            
            } 
            else {
                 PlaySound ("explosion.wav",NULL,SND_ASYNC);
            //Game Over Text 
            color_rgb(250,250,250);
            if (BestScoreNumber  < CurrentScoreNumber) {BestScoreNumber = CurrentScoreNumber;}
            texto(230, 240, ShowScore(GameOverText,CurrentScoreNumber));
            texto(230, 260, RestartText);
            texto(270, 280, ShowScore(BestScoreText,BestScoreNumber));
               texto(270, 300, nombre);
           // Player(PlayerX,PlayerY);
           
            } 
	                                       
            //Paint Players Life
            if (PlayerLifeCounter > 0) {
                PlayerHeart(30,440,PlayerLifeCounter*5);
                color_rgb(0,0,0);
                texto(250,440,LifePercent(Percent,PlayerLifeCounter));
                 
                // numero(xn,yn);
           // teto(300,440,"  %");
            }
            else if (PlayerLifeCounter <= 0) { 
		
			 } else{
                    
                    
                    }
			 
            
            //Difficulty Increase based on Current Score
            
                            
                             
            if (CurrentScoreNumber < 200){
                                    
                mciSendString("play condor.wav",NULL,0,0);
                                 
                    texto(440, 465,niveles1 );
                Row01R=22,Row01G=143, Row01B=140;
                Row02R=29,Row02G=32, Row02B=150; 
                Row01BonusX = 0;
                Row02BonusX = 0;
                Row01BonusBulletY = 0;
                Row02BonusBulletY = 0;  
                BonusDamage = 0; 
              
                 estructura( 200,58, 255,255, 255);
           
                                    
            } else
            if (CurrentScoreNumber < 300){
                Row01R=148,Row01G=103, Row01B=19;
                Row02R=14,Row02G=126, Row02B=34;
                Row01BonusX = 2;
                Row02BonusX = 2;
                Row01BonusBulletY = 2;
                Row02BonusBulletY = 2; 
                BonusDamage = 0;  
                 texto(440, 465,niveles2 );  
                      estructura( 20,58,238,241,36);
                     mciSendString("close condor.wav",NULL,0,0);
                     mciSendString("play marinera.wav",NULL,0,0);
                                  
            } else 
            if (CurrentScoreNumber < 400){
                Row01R=224,Row01G=220, Row01B=71;
                Row02R=234,Row02G=183, Row02B=23;
                Row01BonusX = 4;
                Row02BonusX = 4;
                Row01BonusBulletY = 4;
                Row02BonusBulletY = 4;
                BonusDamage = 1;
                 texto(440, 465,niveles3 );
                 
                  estructura( 200,58, 115,153, 19);
                  
                   mciSendString("close marinera.wav",NULL,0,0);
                    mciSendString("play mirlos.wav",NULL,0,0);
            } else 
                     if (CurrentScoreNumber < 550){
                Row01R=187,Row01G=36, Row01B=36;
                Row02R=150,Row02G=14, Row02B=14;
                Row01BonusX = 6;
                Row02BonusX = 6;
                Row01BonusBulletY = 6;
                Row02BonusBulletY = 6; 
                BonusDamage = 2; 
                 texto(440, 465,niveles4 );
                  estructura( 200,58, 158,214,17);
                  
                  
                   mciSendString("close mirlos.wav",NULL,0,0);
                    mciSendString("play marinera.wav",NULL,0,0);
                  }else 
                  
                     if (CurrentScoreNumber < 8000){
                Row01R=187,Row01G=36, Row01B=36;
                Row02R=150,Row02G=14, Row02B=14;
                Row01BonusX = 8;
                Row02BonusX = 8;
                Row01BonusBulletY = 8;
                Row02BonusBulletY = 8; 
                BonusDamage = 5; 
                 texto(440, 465,niveles5 );
                  estructura( 200,58, 158,265,17);
                  mciSendString("close marinera.wav",NULL,0,0);
                    mciSendString("play fondo.wav",NULL,0,0);
                    
                  }
            
            
            estrellas();
        refresca();
        espera(10);
        t= tecla();
        
    }
}
    return 0;
}


