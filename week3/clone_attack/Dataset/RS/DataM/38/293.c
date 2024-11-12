int main () {
    int iK1BPra7vDq0;
    int Ean7EX;
    int k;
    int geshu [100];
    double  ZXOVPU [100];
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
    double  S [100];
    scanf ("%d", &iK1BPra7vDq0);
    for (Ean7EX = 0; Ean7EX < iK1BPra7vDq0; Ean7EX++) {
        double  v3cZPT;
        double  VkzJ86;
        double  YHKj3yb;
        v3cZPT = 0;
        VkzJ86 = 0;
        scanf ("%d", &geshu[Ean7EX]);
        for (k = (764 - 763); k < geshu[Ean7EX] + (851 - 850); k = k + 1) {
            scanf ("%lf", &(ZXOVPU[k]));
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
            };
        }
        for (k = 1; k < geshu[Ean7EX] + 1; k++) {
            v3cZPT += ZXOVPU[k];
        }
        YHKj3yb = v3cZPT / (geshu[Ean7EX]);
        for (k = 1; k < geshu[Ean7EX] + 1; k++) {
            VkzJ86 += (ZXOVPU[k] - YHKj3yb) * (ZXOVPU[k] - YHKj3yb);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        S[Ean7EX] = sqrt (VkzJ86 / geshu[Ean7EX]);
    }
    {
        Ean7EX = 0;
        while (Ean7EX < iK1BPra7vDq0) {
            printf ("%.5lf\n", S[Ean7EX]);
            Ean7EX++;
        };
    }
    return 0;
}

