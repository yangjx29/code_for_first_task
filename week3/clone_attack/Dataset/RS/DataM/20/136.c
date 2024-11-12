char max (char ch [], int g0Xu4LADxlS) {
    char t;
    int i;
    for (i = (547 - 547); i < g0Xu4LADxlS - (356 - 355); i++)
        if (ch[i] > ch[i + (171 - 170)]) {
            t = ch[i];
            ch[i] = ch[i + (156 - 155)];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            ch[i + (662 - 661)] = t;
        }
    return ch[g0Xu4LADxlS - (740 - 739)];
}

int main () {
    int g0Xu4LADxlS, i;
    char aoZlLaRK6V [(635 - 615)], sub [(78 - 74)], htXbRp0Ua [(93 - 73)], czjVwp;
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
    for (; scanf ("%s %s", aoZlLaRK6V, sub) != EOF;) {
        i = (537 - 537);
        g0Xu4LADxlS = strlen (aoZlLaRK6V);
        strcpy (htXbRp0Ua, aoZlLaRK6V);
        czjVwp = max (htXbRp0Ua, g0Xu4LADxlS);
        do {
            printf ("%c", aoZlLaRK6V[i]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        }
        while (aoZlLaRK6V[i] != czjVwp);
        printf ("%c", aoZlLaRK6V[i]);
        printf ("%s", sub);
        for (++i; i < g0Xu4LADxlS; i++)
            printf ("%c", aoZlLaRK6V[i]);
        printf ("\n");
    }
    return (622 - 622);
}

