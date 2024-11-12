struct   senex {
    char K0bZ9p [(613 - 603)];
    int RlD5HX1;
    int KaJEHkI3d;
}
sen [(723 - 623)], FplfEdYeInx;
int dOAgxs4;

int main () {
    int pHclnW0ABtL;
    int Wj6iu4SworZ;
    int FZG5Ow6aPsHo;
    int ItjuGW3;
    scanf ("%d\n", &dOAgxs4);
    FZG5Ow6aPsHo = (232 - 232);
    for (ItjuGW3 = (709 - 709); ItjuGW3 < dOAgxs4; ItjuGW3 = ItjuGW3 +1) {
        scanf ("%s%d", sen[ItjuGW3].K0bZ9p, &sen[ItjuGW3].RlD5HX1);
        if (sen[ItjuGW3].RlD5HX1 >= (80 - 20))
            sen[ItjuGW3].KaJEHkI3d = (522 - 521);
        else
            sen[ItjuGW3].KaJEHkI3d = (932 - 932);
    }
    for (ItjuGW3 = (243 - 242); ItjuGW3 < dOAgxs4; ItjuGW3 = ItjuGW3 +1)
        for (pHclnW0ABtL = (261 - 261); pHclnW0ABtL < dOAgxs4 - ItjuGW3; pHclnW0ABtL = pHclnW0ABtL + 1)
            if (sen[pHclnW0ABtL].KaJEHkI3d < sen[pHclnW0ABtL + (741 - 740)].KaJEHkI3d) {
                FplfEdYeInx = sen[pHclnW0ABtL];
                sen[pHclnW0ABtL] = sen[pHclnW0ABtL + (569 - 568)];
                sen[pHclnW0ABtL + (486 - 485)] = FplfEdYeInx;
            }
    while (!((663 - 662) != sen[FZG5Ow6aPsHo].KaJEHkI3d))
        FZG5Ow6aPsHo++;
    for (ItjuGW3 = (402 - 401); ItjuGW3 < FZG5Ow6aPsHo; ItjuGW3 = ItjuGW3 +1)
        for (pHclnW0ABtL = (506 - 506); FZG5Ow6aPsHo -ItjuGW3 > pHclnW0ABtL; pHclnW0ABtL++)
            if (sen[pHclnW0ABtL].RlD5HX1 < sen[pHclnW0ABtL + (792 - 791)].RlD5HX1) {
                FplfEdYeInx = sen[pHclnW0ABtL];
                sen[pHclnW0ABtL] = sen[pHclnW0ABtL + (334 - 333)];
                sen[pHclnW0ABtL + (690 - 689)] = FplfEdYeInx;
            }
    for (ItjuGW3 = (793 - 793); ItjuGW3 < dOAgxs4; ItjuGW3++)
        printf ("%s\n", sen[ItjuGW3].K0bZ9p);
    scanf ("%d", &ItjuGW3);
    return (756 - 756);
}

