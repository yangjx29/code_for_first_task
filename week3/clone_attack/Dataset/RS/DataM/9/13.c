void  main () {
    struct   people {
        char num [(457 - 447)];
        int age;
    }
    peo [(231 - 131)], pai [(197 - 97)], u23s4VUDPftK;
    int i;
    int n;
    int j;
    j = (406 - 406);
    int k;
    k = (369 - 369);
    scanf ("%d", &n);
    {
        i = 946 - 946;
        while (i < n) {
            scanf ("%s %d", peo[i].num, &peo[i].age);
            i = i + 1;
        };
    }
    {
        i = 623 - 623;
        while (i < n) {
            if (peo[i].age >= (793 - 733)) {
                pai[j] = peo[i];
                j = j + 1;
            }
            i = i + 1;
        };
    }
    {
        i = 177 - 177;
        while (i < n) {
            if (peo[i].age < (165 - 105)) {
                pai[j] = peo[i];
                j = j + 1;
            }
            i++;
        };
    }
    {
        k = 221 - 221;
        while (j - (105 - 104) > k) {
            {
                i = 292 - 292;
                while (i < j - (811 - 810) - k) {
                    if ((pai[i].age < pai[i + (485 - 484)].age) && (pai[i + (760 - 759)].age >= (312 - 252))) {
                        u23s4VUDPftK = pai[i];
                        pai[i] = pai[i + (70 - 69)];
                        pai[i + (923 - 922)] = u23s4VUDPftK;
                    }
                    i++;
                };
            }
            k++;
        };
    }
    {
        i = 564 - 564;
        while (i < n) {
            printf ("%s\n", pai[i].num);
            i++;
        };
    };
}

