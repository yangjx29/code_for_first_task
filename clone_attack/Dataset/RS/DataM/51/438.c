int main () {
    int max;
    int n;
    int i;
    int l;
    int cSIcJlvY9E;
    int BOoP2iFbQy [504] = {(549 - 549)};
    max = (413 - 413);
    char a [504] = {0};
    char LVILDcsg [600] [10] = {0};
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
    gets (a);
    scanf ("%d\n", &n);
    l = strlen (a);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (l - n >= i) {
            {
                cSIcJlvY9E = 0;
                while (n > cSIcJlvY9E) {
                    LVILDcsg[i][cSIcJlvY9E] = a[i + cSIcJlvY9E];
                    cSIcJlvY9E = cSIcJlvY9E + 1;
                };
            }
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
            i++;
        };
    }
    for (i = 0; l - n >= i; i++)
        for (cSIcJlvY9E = 0; i > cSIcJlvY9E; cSIcJlvY9E++)
            if (strcmp (LVILDcsg[cSIcJlvY9E], LVILDcsg[i]) == 0)
                BOoP2iFbQy[cSIcJlvY9E]++;
    {
        i = 0;
        while (i <= l - n) {
            if (max < BOoP2iFbQy[i])
                max = BOoP2iFbQy[i];
            i++;
        };
    }
    if (max == 0)
        ;
    else {
        printf ("%d\n", max + 1);
        {
            i = 0;
            while (i <= l - n) {
                if (BOoP2iFbQy[i] == max)
                    printf ("%s\n", LVILDcsg[i]);
                i++;
            };
        };
    }
    return 0;
}

