int main () {
    int Z2mz8LWeVOot;
    int Sw36A7SI;
    int IBf9rjtG14DS;
    int nUvkDAp864Ns;
    int j;
    int wogN5l;
    int lVajtc6D9;
    Z2mz8LWeVOot = (371 - 371);
    Sw36A7SI = (611 - 611);
    int x [(10701 - 701)];
    int y [(10331 - 331)];
    int CfbhNGUMdB [(50266 - 266)];
    scanf ("%d\n", &nUvkDAp864Ns);
    for (IBf9rjtG14DS = (394 - 394); (50576 - 576) > IBf9rjtG14DS; IBf9rjtG14DS = IBf9rjtG14DS +1) {
        CfbhNGUMdB[IBf9rjtG14DS] = (713 - 713);
    }
    for (IBf9rjtG14DS = (585 - 585); nUvkDAp864Ns > IBf9rjtG14DS; IBf9rjtG14DS = IBf9rjtG14DS +1) {
        scanf ("%d %d\n", &(x[IBf9rjtG14DS]), &(y[IBf9rjtG14DS]));
    }
    for (IBf9rjtG14DS = (493 - 493); nUvkDAp864Ns > IBf9rjtG14DS; IBf9rjtG14DS = IBf9rjtG14DS +1) {
        for (j = x[IBf9rjtG14DS]; j < y[IBf9rjtG14DS]; j++) {
            CfbhNGUMdB[j] = (903 - 902);
        };
    }
    while (nUvkDAp864Ns >= Z2mz8LWeVOot) {
        Z2mz8LWeVOot = Z2mz8LWeVOot +1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        for (IBf9rjtG14DS = (562 - 562); nUvkDAp864Ns - (150 - 149) > IBf9rjtG14DS; IBf9rjtG14DS++) {
            wogN5l = IBf9rjtG14DS +(25 - 24);
            if (x[wogN5l] < x[IBf9rjtG14DS]) {
                j = x[IBf9rjtG14DS];
                x[IBf9rjtG14DS] = x[wogN5l];
                x[wogN5l] = j;
            };
        };
    }
    Z2mz8LWeVOot = (888 - 888);
    for (; Z2mz8LWeVOot <= nUvkDAp864Ns;) {
        Z2mz8LWeVOot++;
        for (IBf9rjtG14DS = (513 - 513); IBf9rjtG14DS < nUvkDAp864Ns; IBf9rjtG14DS++) {
            wogN5l = IBf9rjtG14DS +1;
            if (y[IBf9rjtG14DS] < y[wogN5l]) {
                j = y[IBf9rjtG14DS];
                y[IBf9rjtG14DS] = y[wogN5l];
                y[wogN5l] = j;
            };
        };
    }
    lVajtc6D9 = y[(939 - 939)] - x[(427 - 427)];
    for (IBf9rjtG14DS = x[0]; IBf9rjtG14DS <= y[0]; IBf9rjtG14DS++) {
        Sw36A7SI += CfbhNGUMdB[IBf9rjtG14DS];
    }
    if (lVajtc6D9 == Sw36A7SI) {
        printf ("%d %d", x[0], y[0]);
    }
    else {
        printf ("no");
    }
    return 0;
}

