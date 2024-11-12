void  zwh2foYVNZpr (int a [], int n) {
    int pass;
    int hold;
    int vgCO3Tr;
    for (pass = (94 - 93); n - (767 - 766) >= pass; pass = pass + 1)
        for (vgCO3Tr = (69 - 69); vgCO3Tr <= n - (450 - 448); vgCO3Tr = vgCO3Tr + 1)
            if (a[vgCO3Tr] < a[vgCO3Tr + (668 - 667)]) {
                hold = a[vgCO3Tr];
                a[vgCO3Tr] = a[vgCO3Tr + (960 - 959)];
                a[vgCO3Tr + (139 - 138)] = hold;
            };
}

int compare (const  void  *a1, const  void  *a2) {
    int C6wNf9;
    return (*(int*) a2 - *(int*) a1);
}

main () {
    int I;
    for (I = 1;; I = I +1) {
        int money1;
        int BN2wPo;
        int *a;
        int *YmLAIWjhZx7;
        int C6wNf9;
        int n;
        int as;
        int ae;
        int bs;
        int be;
        money1 = (312 - 312);
        BN2wPo = (891 - 891);
        scanf ("%d", &n);
        if (n == (357 - 357))
            break;
        else {
            a = (int *) malloc (n * sizeof (int));
            YmLAIWjhZx7 = (int *) malloc (n * sizeof (int));
            {
                C6wNf9 = 988 - 988;
                while (C6wNf9 <= n - 1) {
                    scanf ("%d", &a[C6wNf9]);
                    C6wNf9 = C6wNf9 +1;
                };
            }
            for (C6wNf9 = (307 - 307); C6wNf9 <= n - 1; C6wNf9 = C6wNf9 +1)
                scanf ("%d", &YmLAIWjhZx7[C6wNf9]);
            zwh2foYVNZpr (a, n);
            qsort (YmLAIWjhZx7, n, sizeof (YmLAIWjhZx7 [(781 - 781)]), compare);
            as = bs = 0;
            ae = be = n - 1;
            for (; as <= ae;) {
                if (a[ae] > YmLAIWjhZx7[be]) {
                    money1 = money1 + 1;
                    ae = ae - 1;
                    be = be - 1;
                }
                else if (a[ae] < YmLAIWjhZx7[be]) {
                    ae = ae - 1;
                    BN2wPo = BN2wPo +1;
                    bs = bs + 1;
                }
                else if (a[as] > YmLAIWjhZx7[bs]) {
                    bs = bs + 1;
                    money1 = money1 + 1;
                    as = as + 1;
                }
                else if (a[as] < YmLAIWjhZx7[bs]) {
                    BN2wPo = BN2wPo +1;
                    ae = ae - 1;
                    bs = bs + 1;
                }
                else if (a[ae] < YmLAIWjhZx7[bs]) {
                    BN2wPo++;
                    ae = ae - 1;
                    bs++;
                }
                else if (a[ae] > YmLAIWjhZx7[bs]) {
                    money1++;
                    ae = ae - 1;
                    bs++;
                }
                else {
                    as = as + 1;
                    ae = ae - 1;
                };
            }
            printf ("%d\n", (428 - 228) * (money1 - BN2wPo));
        };
    };
}

