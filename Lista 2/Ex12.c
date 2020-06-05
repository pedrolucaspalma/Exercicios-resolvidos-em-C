/*Leia as coordenadas dos pontos P1 (x1, y1) e P2 (x2, y2) e calcule a distância entre P1 e P2.
𝑑 = √(𝑥1 − 𝑥2)2 + (𝑦1 − 𝑦2)2*/

#include <stdio.h>
#include <math.h>

 main ()
 {

    int x1, x2, y1, y2, d;

    printf("Digite as coordenadas x1 e y1 do ponto P1\n");
    scanf("%d %d",&x1, &y1);
    
    printf("Digite as coordenadasd x2 e y2 do ponto P2\n");
    scanf("%d %d",&x2, &y2);

    d = sqrt( (x1-x2)*2 + (y1-y2)*2);

    printf("A distancia vale %d", d);

 }