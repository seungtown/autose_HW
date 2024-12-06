#include <stdio.h>

int main(){
    float fuel_efficiency; // 차량의 연비 (km/L)
    float fuel_price;      // 휘발유 가격 (원/L)
    float distance;        // 가야하는 거리 (km)
    float cost;            // 주유비 (원)

    // 사용자로부터 입력 받기
    printf("차량의 연비 (km/L): ");
    scanf("%f", &fuel_efficiency);
    printf("휘발유 가격 (원/L): ");
    scanf("%f", &fuel_price);
    printf("가야하는 거리 (km): ");
    scanf("%f", &distance);

    // 주유비 계산
    cost = (distance / fuel_efficiency) * fuel_price;

    // 결과 출력
    printf("목적지까지 드는 주유비: %.2f 원\n", cost);

    return 0;
}