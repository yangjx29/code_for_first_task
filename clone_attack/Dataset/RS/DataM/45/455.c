int main () {
    int sum, I7vQ8Ol0, wXlx8BIWY1nT, ixLWcMUG2tO, Gb0OGxPMmjUd = 0, Nvp6CeWE = 0;
    char Hcu8NhB0g [(132 - 82)], AieEQDbG45S [50];
    char aLTRh1xcEVg [100];
    int Bkl5JP = 0;
    gets (aLTRh1xcEVg);
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
    ixLWcMUG2tO = strlen (aLTRh1xcEVg);
    {
        I7vQ8Ol0 = 0;
        while (I7vQ8Ol0 <= ixLWcMUG2tO - 1) {
            if (!(' ' == aLTRh1xcEVg[I7vQ8Ol0])) {
                AieEQDbG45S[I7vQ8Ol0] = aLTRh1xcEVg[I7vQ8Ol0];
                Gb0OGxPMmjUd++;
            }
            if (aLTRh1xcEVg[I7vQ8Ol0] == ' ') {
                break;
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
            I7vQ8Ol0++;
        };
    }
    for (I7vQ8Ol0 = Gb0OGxPMmjUd +1; I7vQ8Ol0 <= ixLWcMUG2tO - 1; I7vQ8Ol0++) {
        Nvp6CeWE++;
        Hcu8NhB0g[Bkl5JP] = aLTRh1xcEVg[I7vQ8Ol0];
        Bkl5JP++;
    }
    for (I7vQ8Ol0 = 0; Nvp6CeWE > I7vQ8Ol0; I7vQ8Ol0++) {
        if (Hcu8NhB0g[I7vQ8Ol0] == AieEQDbG45S[0]) {
            sum = 1;
            {
                wXlx8BIWY1nT = I7vQ8Ol0 +1;
                while (wXlx8BIWY1nT <= I7vQ8Ol0 +Gb0OGxPMmjUd-1) {
                    if (Hcu8NhB0g[wXlx8BIWY1nT] == AieEQDbG45S[wXlx8BIWY1nT - I7vQ8Ol0]) {
                        sum++;
                    }
                    else
                        break;
                    wXlx8BIWY1nT++;
                };
            }
            if (sum == Gb0OGxPMmjUd) {
                printf ("%d", I7vQ8Ol0);
                break;
            };
        };
    }
    return 0;
}

