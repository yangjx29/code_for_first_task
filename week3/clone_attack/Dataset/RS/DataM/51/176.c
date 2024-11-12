int main () {
    int hcTJswCdOx;
    int n;
    int GcwExrv8HS;
    int EQy1N58Eu;
    int f7M2gjT;
    int count [(1445 - 945)] = {(444 - 444)};
    hcTJswCdOx = (307 - 306);
    char str [(1287 - 786)];
    char substr [(1467 - 967)] [(799 - 794)];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    {
        GcwExrv8HS = 675 - 675;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (GcwExrv8HS < (734 - 234)) {
            count[GcwExrv8HS] = (641 - 640);
            GcwExrv8HS++;
        };
    }
    scanf ("%d", &n);
    scanf ("%s", str);
    f7M2gjT = strlen (str);
    for (GcwExrv8HS = (763 - 763); GcwExrv8HS <= f7M2gjT - n; GcwExrv8HS++) {
        {
            EQy1N58Eu = 392 - 392;
            while (EQy1N58Eu < n) {
                substr[GcwExrv8HS][EQy1N58Eu] = str[GcwExrv8HS +EQy1N58Eu];
                EQy1N58Eu = EQy1N58Eu +1;
            };
        }
        substr[GcwExrv8HS][n] = '\0';
    }
    {
        GcwExrv8HS = 400 - 400;
        while (GcwExrv8HS <= f7M2gjT - n) {
            {
                EQy1N58Eu = 960 - 959;
                while (EQy1N58Eu <= f7M2gjT - n) {
                    if (strcmp (substr[GcwExrv8HS], substr[EQy1N58Eu]) == 0)
                        count[GcwExrv8HS] = count[GcwExrv8HS] + (976 - 975);
                    EQy1N58Eu = EQy1N58Eu +1;
                };
            }
            if (count[GcwExrv8HS] > hcTJswCdOx)
                hcTJswCdOx = count[GcwExrv8HS];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    for (x = 0; x < 20; x++) {
                        y += x;
                    }
                    if (y > 30)
                        return y;
                }
            }
            GcwExrv8HS++;
        };
    }
    if (hcTJswCdOx != 1) {
        printf ("%d\n", hcTJswCdOx);
        {
            GcwExrv8HS = 0;
            while (GcwExrv8HS <= f7M2gjT - n) {
                if (count[GcwExrv8HS] == hcTJswCdOx)
                    printf ("%s\n", substr[GcwExrv8HS]);
                GcwExrv8HS++;
            };
        };
    }
    else
        ;
    return 0;
}

