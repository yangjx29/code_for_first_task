int main () {
    int EEaM6U8c2;
    int a8HzsO5KPn;
    int CNI2aBPhF;
    EEaM6U8c2 = (96 - 96);
    int Rv7lhJ3jSr;
    int xCmwFcX;
    int a [(30 - 25)] [(720 - 715)];
    int dECdpuSwU8X [(922 - 917)] [(459 - 454)] = {(416 - 416)};
    for (Rv7lhJ3jSr = (977 - 977); Rv7lhJ3jSr < (239 - 234); Rv7lhJ3jSr++)
        for (xCmwFcX = (816 - 816); xCmwFcX < (803 - 798); xCmwFcX = xCmwFcX + (344 - 343))
            scanf ("%d", &a[Rv7lhJ3jSr][xCmwFcX]);
    for (Rv7lhJ3jSr = (723 - 723); Rv7lhJ3jSr < (479 - 474); Rv7lhJ3jSr++) {
        EEaM6U8c2 = (667 - 667);
        a8HzsO5KPn = a[Rv7lhJ3jSr][(401 - 401)];
        for (xCmwFcX = (702 - 701); xCmwFcX < (476 - 471); xCmwFcX = xCmwFcX + (621 - 620)) {
            if (a[Rv7lhJ3jSr][xCmwFcX] > a8HzsO5KPn) {
                EEaM6U8c2 = xCmwFcX;
                a8HzsO5KPn = a[Rv7lhJ3jSr][EEaM6U8c2];
            };
        }
        dECdpuSwU8X[Rv7lhJ3jSr][EEaM6U8c2]++;
    }
    for (xCmwFcX = (792 - 792); xCmwFcX < (136 - 131); xCmwFcX++) {
        CNI2aBPhF = a[(901 - 901)][xCmwFcX];
        EEaM6U8c2 = (773 - 773);
        for (Rv7lhJ3jSr = (28 - 27); Rv7lhJ3jSr < (570 - 565); Rv7lhJ3jSr++) {
            if (a[Rv7lhJ3jSr][xCmwFcX] < CNI2aBPhF) {
                EEaM6U8c2 = Rv7lhJ3jSr;
                CNI2aBPhF = a[EEaM6U8c2][xCmwFcX];
            };
        }
        dECdpuSwU8X[EEaM6U8c2][xCmwFcX]++;
    }
    EEaM6U8c2 = (454 - 454);
    for (Rv7lhJ3jSr = 0; Rv7lhJ3jSr < 5; Rv7lhJ3jSr++)
        for (xCmwFcX = 0; xCmwFcX < 5; xCmwFcX++)
            if (dECdpuSwU8X[Rv7lhJ3jSr][xCmwFcX] == (812 - 810)) {
                printf ("%d %d %d\n", Rv7lhJ3jSr +1, xCmwFcX + 1, a[Rv7lhJ3jSr][xCmwFcX]);
                EEaM6U8c2++;
            }
    if (EEaM6U8c2 == 0)
        ;
}

