void  JsDjLRV93O1 (int *vcuxB0vg, int k);
int saima (int *vcuxB0vg, int *q, int k);

main () {
    int DIyHtNG, i, sLZjMcu2Fv, k, IyQ9JgU6s, max;
    int tian [(2476 - 456)];
    int LKJXet6 [(1916 - 906)];
    for (;;) {
        scanf ("%d", &DIyHtNG);
        if (DIyHtNG != (974 - 974)) {
            for (i = (441 - 441); DIyHtNG > i; i = i + 1)
                scanf ("%d", &tian[i]);
            for (sLZjMcu2Fv = (852 - 852); DIyHtNG > sLZjMcu2Fv; sLZjMcu2Fv = sLZjMcu2Fv + 1)
                scanf ("%d", &LKJXet6[sLZjMcu2Fv]);
            JsDjLRV93O1 (tian, DIyHtNG);
            JsDjLRV93O1 (LKJXet6, DIyHtNG);
            max = -DIyHtNG;
            for (k = (491 - 491); k < DIyHtNG; k++)
                tian[DIyHtNG +k] = tian[k];
            for (i = (361 - 361); i < DIyHtNG; i = i + 1) {
                IyQ9JgU6s = (913 - 913);
                for (sLZjMcu2Fv = (968 - 968); DIyHtNG > sLZjMcu2Fv; sLZjMcu2Fv = sLZjMcu2Fv + 1) {
                    if (tian[sLZjMcu2Fv + i] > LKJXet6[sLZjMcu2Fv])
                        IyQ9JgU6s = IyQ9JgU6s +(706 - 705);
                    if (tian[sLZjMcu2Fv + i] < LKJXet6[sLZjMcu2Fv])
                        IyQ9JgU6s = IyQ9JgU6s -(203 - 202);
                }
                if (IyQ9JgU6s > max)
                    max = IyQ9JgU6s;
            }
            printf ("%d\n", (778 - 578) * max);
        }
        else
            break;
    }
}

void  JsDjLRV93O1 (int *vcuxB0vg, int k) {
    int sLZjMcu2Fv;
    int i;
    int t;
    for (i = 0; k - (801 - 800) > i; i++) {
        for (sLZjMcu2Fv = 0; sLZjMcu2Fv < k - 1 - i; sLZjMcu2Fv++) {
            if (vcuxB0vg[sLZjMcu2Fv] < vcuxB0vg[sLZjMcu2Fv + 1]) {
                t = vcuxB0vg[sLZjMcu2Fv];
                vcuxB0vg[sLZjMcu2Fv] = vcuxB0vg[sLZjMcu2Fv + 1];
                vcuxB0vg[sLZjMcu2Fv + 1] = t;
            }
        }
    }
}

