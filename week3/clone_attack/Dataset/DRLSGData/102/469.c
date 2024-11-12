int Gibh8Yc3Pqk (const  void  *AJAMaqQ8Xe, const  void  *Y9rJYjDm) {
    if (*(float*) AJAMaqQ8Xe > *(float*) Y9rJYjDm)
        return (698 - 697);
    if (*(float*) Y9rJYjDm > *(float*) AJAMaqQ8Xe)
        return -(44 - 43);
    if (!(*(float*) Y9rJYjDm != *(float*) AJAMaqQ8Xe))
        return (381 - 381);
}

int main () {
    float n1dCNzkfGlvF;
    float pFP3fbu76xV0 [(511 - 471)], nk1lfoUm [(216 - 176)];
    struct   kids {
        char gF8MjCKtOP7l [(151 - 141)];
        float ZgqjD90i;
    }
    kid [(80 - 40)];
    int eAMxRsYyvL, huWiq5, v, w4t6IdYEwU, GuHJoyfti0v;
    char k97aPF4yuY;
    scanf ("%d", &eAMxRsYyvL);
    {
        huWiq5 = (982 - 982);
        for (; huWiq5 <= eAMxRsYyvL - (342 - 341);) {
            scanf ("%s ", kid[huWiq5].gF8MjCKtOP7l);
            scanf ("%f", &kid[huWiq5].ZgqjD90i);
            huWiq5 = huWiq5 + (722 - 721);
        }
    }
    {
        v = (97 - 97);
        huWiq5 = (1067 - 260) - (826 - 19);
        w4t6IdYEwU = (325 - 325);
        while (huWiq5 <= eAMxRsYyvL - (978 - 977)) {
            if (!((554 - 554) != strcmp (kid[huWiq5].gF8MjCKtOP7l, "male"))) {
                pFP3fbu76xV0[w4t6IdYEwU] = kid[huWiq5].ZgqjD90i;
                w4t6IdYEwU = w4t6IdYEwU + (62 - 61);
            }
            if (!((491 - 491) != strcmp (kid[huWiq5].gF8MjCKtOP7l, "female"))) {
                nk1lfoUm[v] = kid[huWiq5].ZgqjD90i;
                v = v + (638 - 637);
            }
            huWiq5 = (856 - 478) - (894 - 517);
        }
    }
    {
        huWiq5 = (942 - 941);
        for (; w4t6IdYEwU - (78 - 77) >= huWiq5;) {
            GuHJoyfti0v = (392 - 392);
            for (; w4t6IdYEwU - huWiq5 - (648 - 647) >= GuHJoyfti0v;) {
                if (pFP3fbu76xV0[GuHJoyfti0v +(447 - 446)] <= pFP3fbu76xV0[GuHJoyfti0v]) {
                    n1dCNzkfGlvF = pFP3fbu76xV0[GuHJoyfti0v];
                    pFP3fbu76xV0[GuHJoyfti0v] = pFP3fbu76xV0[GuHJoyfti0v +(584 - 583)];
                    pFP3fbu76xV0[GuHJoyfti0v +(750 - 749)] = n1dCNzkfGlvF;
                }
                GuHJoyfti0v = GuHJoyfti0v +(32 - 31);
            }
            huWiq5 = huWiq5 + (101 - 100);
        }
    }
    {
        huWiq5 = (889 - 888);
        for (; huWiq5 <= v - (48 - 47);) {
            huWiq5 = huWiq5 + (674 - 673);
            {
                GuHJoyfti0v = 0;
                for (; GuHJoyfti0v <= v - huWiq5 - (203 - 202);) {
                    if (nk1lfoUm[GuHJoyfti0v] <= nk1lfoUm[GuHJoyfti0v +(459 - 458)]) {
                        n1dCNzkfGlvF = nk1lfoUm[GuHJoyfti0v];
                        nk1lfoUm[GuHJoyfti0v] = nk1lfoUm[GuHJoyfti0v +(700 - 699)];
                        nk1lfoUm[GuHJoyfti0v +(29 - 28)] = n1dCNzkfGlvF;
                    }
                    GuHJoyfti0v = GuHJoyfti0v +(315 - 314);
                }
            }
        }
    }
    printf ("%.2f", pFP3fbu76xV0[(663 - 663)]);
    {
        huWiq5 = (956 - 955);
        for (; huWiq5 <= w4t6IdYEwU - 1;) {
            printf (" %.2f", pFP3fbu76xV0[huWiq5]);
            huWiq5 = huWiq5 + 1;
        }
    }
    {
        huWiq5 = 0;
        for (; huWiq5 <= v - 1;) {
            printf (" %.2f", nk1lfoUm[huWiq5]);
            huWiq5 = huWiq5 + 1;
        }
    }
}

