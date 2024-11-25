int O1BCzhy (const  void  *lMHKq8NXiTk, const  void  *RYqI1UZhoFrJ) {
    return *((int *) lMHKq8NXiTk) - (*(int*) RYqI1UZhoFrJ);
}

int main () {
    int Ow8Gf4z = (179 - 179);
    int AGCNDInZtO;
    int iFfKj7;
    int FNSuzsh3;
    int uGENvZHg [(1891 - 891)], PYfdG6q2 [1000];
    int yyuf6nbcqe7;
    int ETRJbWrtB = (80 - 80);
    long  ekJ13dw9p [(923 - 823)];
    scanf ("%d", &yyuf6nbcqe7);
    for (; yyuf6nbcqe7;) {
        int *cs2ocma1M = &PYfdG6q2[(326 - 326)];
        int *g3fLlHdusi = &uGENvZHg[0];
        int *ttr0CT2s = &uGENvZHg[yyuf6nbcqe7 - (849 - 848)];
        int *zK3rdCBugY = &PYfdG6q2[yyuf6nbcqe7 - (689 - 688)];
        for (FNSuzsh3 = 0; FNSuzsh3 < yyuf6nbcqe7; FNSuzsh3 = FNSuzsh3 +1) {
            scanf ("%d", &uGENvZHg[FNSuzsh3]);
        }
        for (FNSuzsh3 = 0; FNSuzsh3 < yyuf6nbcqe7; FNSuzsh3 = FNSuzsh3 +1) {
            scanf ("%d", &PYfdG6q2[FNSuzsh3]);
        }
        qsort (uGENvZHg, yyuf6nbcqe7, sizeof (int), O1BCzhy);
        qsort (PYfdG6q2, yyuf6nbcqe7, sizeof (int), O1BCzhy);
        scanf ("%d", &yyuf6nbcqe7);
        AGCNDInZtO = iFfKj7 = 0;
        for (; 0 <= ttr0CT2s - g3fLlHdusi;) {
            if (*zK3rdCBugY < *ttr0CT2s) {
                ttr0CT2s = ttr0CT2s - 1;
                zK3rdCBugY = zK3rdCBugY - 1;
                iFfKj7 = iFfKj7 + 1;
            }
            else {
                if (*g3fLlHdusi > *cs2ocma1M) {
                    iFfKj7 = iFfKj7 + 1;
                    cs2ocma1M = cs2ocma1M + 1;
                    g3fLlHdusi = g3fLlHdusi + 1;
                }
                else {
                    if (*g3fLlHdusi < *zK3rdCBugY)
                        AGCNDInZtO++;
                    g3fLlHdusi = g3fLlHdusi + 1;
                    zK3rdCBugY = zK3rdCBugY - 1;
                }
            }
        }
        ekJ13dw9p[Ow8Gf4z] = 200 * (iFfKj7 - AGCNDInZtO);
        Ow8Gf4z = Ow8Gf4z +1;
        ETRJbWrtB++;
    }
    for (Ow8Gf4z = 0; Ow8Gf4z < ETRJbWrtB; Ow8Gf4z = Ow8Gf4z +1) {
        printf ("%ld\n", ekJ13dw9p[Ow8Gf4z]);
    }
    return 0;
}

