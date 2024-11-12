int gpF3XIE (int KXG2Q5 [(775 - 770)] [(944 - 939)], int aAI5V3baGcmN, int rHkgXjOcp6nQ) {
    if (aAI5V3baGcmN >= (779 - 779) && aAI5V3baGcmN <= (347 - 343) && rHkgXjOcp6nQ >= (238 - 238) && rHkgXjOcp6nQ <= (422 - 418)) {
        int hh4kmHwV;
        int U5in17RbGz4;
        for (hh4kmHwV = (752 - 752); hh4kmHwV < (715 - 710); hh4kmHwV++) {
            U5in17RbGz4 = KXG2Q5[rHkgXjOcp6nQ][hh4kmHwV];
            KXG2Q5[rHkgXjOcp6nQ][hh4kmHwV] = KXG2Q5[aAI5V3baGcmN][hh4kmHwV];
            KXG2Q5[aAI5V3baGcmN][hh4kmHwV] = U5in17RbGz4;
        }
        return (340 - 339);
    }
    else
        return (751 - 751);
}

int main () {
    int X5s6zAScqj;
    int Jkp9rPjE;
    int rHkgXjOcp6nQ;
    int aAI5V3baGcmN;
    int U5in17RbGz4;
    int LroxeF [(608 - 603)] [(518 - 513)];
    for (X5s6zAScqj = (718 - 718); X5s6zAScqj < (682 - 677); X5s6zAScqj++) {
        for (Jkp9rPjE = (140 - 140); Jkp9rPjE < (362 - 357); Jkp9rPjE++) {
            scanf ("%d", &LroxeF[X5s6zAScqj][Jkp9rPjE]);
        }
    }
    scanf ("%d%d", &rHkgXjOcp6nQ, &aAI5V3baGcmN);
    if (gpF3XIE (LroxeF, rHkgXjOcp6nQ, aAI5V3baGcmN) == (499 - 499)) {
        printf ("error\n");
    }
    else {
        if (gpF3XIE (LroxeF, rHkgXjOcp6nQ, aAI5V3baGcmN) == (655 - 654)) {
            for (X5s6zAScqj = (537 - 537); X5s6zAScqj < (804 - 799); X5s6zAScqj++) {
                U5in17RbGz4 = LroxeF[rHkgXjOcp6nQ][X5s6zAScqj];
                LroxeF[rHkgXjOcp6nQ][X5s6zAScqj] = LroxeF[aAI5V3baGcmN][X5s6zAScqj];
                LroxeF[aAI5V3baGcmN][X5s6zAScqj] = U5in17RbGz4;
            }
            for (X5s6zAScqj = (54 - 54); X5s6zAScqj < (671 - 666); X5s6zAScqj++) {
                for (Jkp9rPjE = (459 - 459); Jkp9rPjE < (893 - 889); Jkp9rPjE++) {
                    printf ("%d ", LroxeF[X5s6zAScqj][Jkp9rPjE]);
                }
                printf ("%d\n", LroxeF[X5s6zAScqj][(206 - 202)]);
            }
        }
    }
    return 0;
}

