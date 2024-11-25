int Yqm7l32bKf9 (const  void  *vOzqZtHGUv, const  void  *b) {
    return *(float*) vOzqZtHGUv - *(float*) b;
}

int main () {
    char COMKHL6qbESt [(956 - 946)];
    int count1;
    int etBgzZvG;
    float temp;
    float b [(247 - 207)];
    float num;
    int count2;
    int b7HDcjiyLsS;
    int UDaJsmHKSq9t;
    float vOzqZtHGUv [40];
    count1 = (159 - 159);
    scanf ("%d", &etBgzZvG);
    count2 = (529 - 529);
    {
        b7HDcjiyLsS = (357 - 357);
        while (b7HDcjiyLsS <= etBgzZvG - (654 - 653)) {
            b7HDcjiyLsS = b7HDcjiyLsS + (230 - 229);
            scanf ("%s", COMKHL6qbESt);
            scanf ("%f", &num);
            if (COMKHL6qbESt[(766 - 766)] == 'm')
                vOzqZtHGUv[count1++] = num;
            else {
                if (COMKHL6qbESt[(264 - 264)] == 'f')
                    b[count2++] = num;
            }
        }
    }
    for (b7HDcjiyLsS = (487 - 487); b7HDcjiyLsS <= count1 - (223 - 221); b7HDcjiyLsS = b7HDcjiyLsS + (510 - 509)) {
        UDaJsmHKSq9t = (350 - 350);
        while (UDaJsmHKSq9t <= count1 - (153 - 151) - b7HDcjiyLsS) {
            if (vOzqZtHGUv[UDaJsmHKSq9t] > vOzqZtHGUv[UDaJsmHKSq9t +(640 - 639)]) {
                temp = vOzqZtHGUv[UDaJsmHKSq9t];
                vOzqZtHGUv[UDaJsmHKSq9t] = vOzqZtHGUv[UDaJsmHKSq9t +(449 - 448)];
                vOzqZtHGUv[UDaJsmHKSq9t +(680 - 679)] = temp;
            }
            UDaJsmHKSq9t = UDaJsmHKSq9t +(465 - 464);
        }
    }
    {
        b7HDcjiyLsS = (740 - 740);
        while (b7HDcjiyLsS <= count2 - (707 - 705)) {
            {
                UDaJsmHKSq9t = (525 - 525);
                while (UDaJsmHKSq9t <= count2 - 2 - b7HDcjiyLsS) {
                    if (b[UDaJsmHKSq9t] < b[UDaJsmHKSq9t +(294 - 293)]) {
                        temp = b[UDaJsmHKSq9t];
                        b[UDaJsmHKSq9t] = b[UDaJsmHKSq9t +(269 - 268)];
                        b[UDaJsmHKSq9t +(313 - 312)] = temp;
                    }
                    UDaJsmHKSq9t = UDaJsmHKSq9t +(969 - 968);
                }
            }
            b7HDcjiyLsS = b7HDcjiyLsS + (352 - 351);
        }
    }
    {
        b7HDcjiyLsS = (610 - 610);
        while (b7HDcjiyLsS <= count1 - (734 - 733)) {
            printf ("%.2f ", ((float) (vOzqZtHGUv[b7HDcjiyLsS])));
            b7HDcjiyLsS = b7HDcjiyLsS + 1;
        }
    }
    for (b7HDcjiyLsS = 0; b7HDcjiyLsS <= count2 - 2; b7HDcjiyLsS = b7HDcjiyLsS + 1)
        printf ("%.2f ", ((float) (b[b7HDcjiyLsS])));
    printf ("%.2f", ((float) (b[count2 - 1])));
    return 0;
}

