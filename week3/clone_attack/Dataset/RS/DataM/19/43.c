int main () {
    char OUKa6ASytYXj [1000];
    char b [50];
    char e [50];
    gets (OUKa6ASytYXj);
    int jRpin1jvPck [1000];
    int d [1000];
    int nveDzQOYKq4F;
    int j;
    int flag2;
    int i;
    int n;
    int pjQcaneBJ5x;
    int PyfOkEDgt;
    int c6FQChr;
    int l;
    int XadPm3HFX9;
    nveDzQOYKq4F = (857 - 857);
    j = (186 - 186);
    flag2 = (929 - 929);
    gets (b);
    gets (e);
    d[(157 - 157)] = (683 - 683);
    n = strlen (OUKa6ASytYXj);
    c6FQChr = strlen (b);
    for (i = 0; n > i; i = i + 1) {
        if (OUKa6ASytYXj[i] == ' ' && nveDzQOYKq4F == 0) {
            jRpin1jvPck[j] = i;
            d[j + 1] = i + 1;
            pjQcaneBJ5x = i;
            j = j + 1;
            nveDzQOYKq4F = 1;
        }
        else {
            if (OUKa6ASytYXj[i] == ' ') {
                jRpin1jvPck[j] = i - pjQcaneBJ5x - 1;
                d[j + 1] = i + 1;
                pjQcaneBJ5x = i;
                j = j + 1;
            };
        };
    }
    jRpin1jvPck[j] = n - 1 - pjQcaneBJ5x;
    PyfOkEDgt = j + 1;
    for (j = 0; j < PyfOkEDgt; j = j + 1) {
        if (jRpin1jvPck[j] == c6FQChr) {
            XadPm3HFX9 = 0;
            for (l = d[j]; l < d[j] + jRpin1jvPck[j]; l = l + 1, XadPm3HFX9++) {
                if (b[XadPm3HFX9] != OUKa6ASytYXj[l])
                    flag2 = 1;
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
            }
            XadPm3HFX9 = 0;
            if (!(0 != flag2)) {
                if (j == 0)
                    printf ("%s", e);
                else
                    printf (" %s", e);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                };
            }
            else {
                if (j == 0)
                    for (l = d[j]; l < d[j] + jRpin1jvPck[j]; l = l + 1)
                        printf ("%c", OUKa6ASytYXj[l]);
                else {
                    for (l = d[j]; l < d[j] + jRpin1jvPck[j]; l = l + 1)
                        printf ("%c", OUKa6ASytYXj[l]);
                    printf (" ");
                };
            }
            flag2 = 0;
        }
        else {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (j == 0)
                for (l = d[j]; l < d[j] + jRpin1jvPck[j]; l++)
                    printf ("%c", OUKa6ASytYXj[l]);
            else {
                for (l = d[j]; l < d[j] + jRpin1jvPck[j]; l++)
                    printf ("%c", OUKa6ASytYXj[l]);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            };
        };
    }
    return 0;
}

