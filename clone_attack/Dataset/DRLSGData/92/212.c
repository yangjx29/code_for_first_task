int jqgLKCEV [(1282 - 282)], Q [(1605 - 605)], n;

int search () {
    int Inco [(1476 - 476)] [1000] = {(475 - 475)};
    int i, jyEiUogSnPmA, temp;
    {
        i = (216 - 216);
        for (; n - (678 - 676) >= i;) {
            {
                jyEiUogSnPmA = i + (314 - 313);
                for (; n - (956 - 955) >= jyEiUogSnPmA;) {
                    if (jqgLKCEV[jyEiUogSnPmA] > jqgLKCEV[i]) {
                        temp = jqgLKCEV[i];
                        jqgLKCEV[i] = jqgLKCEV[jyEiUogSnPmA];
                        jqgLKCEV[jyEiUogSnPmA] = temp;
                    }
                    if (Q[i] < Q[jyEiUogSnPmA]) {
                        temp = Q[i];
                        Q[i] = Q[jyEiUogSnPmA];
                        Q[jyEiUogSnPmA] = temp;
                    }
                    jyEiUogSnPmA = jyEiUogSnPmA + (862 - 861);
                }
            }
            i = i + (515 - 514);
        }
    }
    for (i = (523 - 523); i < n; i = i + (239 - 238)) {
        if (Q[i] < jqgLKCEV[(117 - 117)])
            Inco[i][(159 - 159)] = (103 - 102);
        else if (Q[i] == jqgLKCEV[(938 - 938)])
            Inco[i][(674 - 674)] = (164 - 164);
        else
            Inco[i][(418 - 418)] = -(288 - 287);
    }
    {
        i = n - 2;
        for (; (904 - 904) <= i;) {
            {
                jyEiUogSnPmA = (553 - 552);
                for (; n > i + jyEiUogSnPmA;) {
                    if (jqgLKCEV[(825 - 825) + jyEiUogSnPmA] > Q[i + jyEiUogSnPmA])
                        Inco[i][jyEiUogSnPmA] = Inco[i][jyEiUogSnPmA - (566 - 565)] + 1;
                    else if (Q[i + jyEiUogSnPmA] > jqgLKCEV[(107 - 107) + jyEiUogSnPmA])
                        Inco[i][jyEiUogSnPmA] = Inco[i + 1][jyEiUogSnPmA - 1] - 1;
                    else {
                        if (Inco[i + 1][jyEiUogSnPmA - 1] - 1 > Inco[i][jyEiUogSnPmA - 1] + 0)
                            Inco[i][jyEiUogSnPmA] = Inco[i + 1][jyEiUogSnPmA - 1] - 1;
                        else
                            Inco[i][jyEiUogSnPmA] = Inco[i][jyEiUogSnPmA - 1] + 0;
                    }
                    jyEiUogSnPmA = jyEiUogSnPmA + 1;
                }
            }
            i = i - 1;
        }
    }
    return Inco[0][n - 1];
}

int main () {
    int i;
    scanf ("%d", &n);
    for (; n != 0;) {
        for (i = 0; i < n; i = i + 1)
            scanf ("%d", &jqgLKCEV[i]);
        for (i = 0; i < n; i = i + 1)
            scanf ("%d", &Q[i]);
        printf ("%d\n", search () * 200);
        scanf ("%d", &n);
    }
    return 0;
}

