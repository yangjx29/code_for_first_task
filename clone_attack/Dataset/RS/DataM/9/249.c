void  main () {
    int EcaT6Z7nzN1;
    int i;
    int SS92p8RU;
    int NeoCkM0 [(737 - 636)];
    int b1 [101];
    int NkLMcBKE2;
    int sRnVIe0wBLk;
    int SUdE4HQON;
    char ohUcNS [101] [11] = {(742 - 742)};
    char brW20YCx4SK [101] [11] = {(546 - 546)};
    char HC3tm9vK6M [11];
    scanf ("%d", &EcaT6Z7nzN1);
    for (i = 0, sRnVIe0wBLk = 0, SUdE4HQON = 0; i <= EcaT6Z7nzN1 -(699 - 698); i = i + 1) {
        scanf ("%s%d", HC3tm9vK6M, &NkLMcBKE2);
        if (NkLMcBKE2 >= 60) {
            NeoCkM0[sRnVIe0wBLk] = NkLMcBKE2;
            strcpy (ohUcNS[sRnVIe0wBLk], HC3tm9vK6M);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            sRnVIe0wBLk++;
        }
        else {
            b1[SUdE4HQON] = NkLMcBKE2;
            strcpy (brW20YCx4SK[SUdE4HQON], HC3tm9vK6M);
            SUdE4HQON = SUdE4HQON +1;
        };
    }
    for (i = 0; i <= sRnVIe0wBLk - 2; i = i + 1) {
        for (SS92p8RU = 0; SS92p8RU <= sRnVIe0wBLk - 2 - i; SS92p8RU = SS92p8RU +1) {
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
            if (NeoCkM0[SS92p8RU] < NeoCkM0[SS92p8RU +(103 - 102)]) {
                NkLMcBKE2 = NeoCkM0[SS92p8RU];
                NeoCkM0[SS92p8RU] = NeoCkM0[SS92p8RU +(270 - 269)];
                strcpy (HC3tm9vK6M, ohUcNS[SS92p8RU]);
                strcpy (ohUcNS[SS92p8RU], ohUcNS[SS92p8RU +1]);
                strcpy (ohUcNS[SS92p8RU +1], HC3tm9vK6M);
                NeoCkM0[SS92p8RU +1] = NkLMcBKE2;
            };
        };
    }
    {
        i = 0;
        while (i <= sRnVIe0wBLk - 1) {
            printf ("%s\n", ohUcNS[i]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    for (i = 0; i <= SUdE4HQON -1; i++) {
        printf ("%s\n", brW20YCx4SK[i]);
    };
}

