main () {
    int nm7AokpG6H;
    int l;
    int c;
    int NLWK0A;
    int e4tAQM;
    int f;
    char K5HZVmfPu [150];
    char aSLTByD [150];
    scanf ("%s", aSLTByD);
    l = strlen (aSLTByD);
    if (2 < l) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if ((341 - 328) <= (aSLTByD[(788 - 788)] - '0') * 10 + (aSLTByD[(311 - 310)] - '0')) {
            K5HZVmfPu[0] = ((aSLTByD[0] - '0') * 10 + (aSLTByD[(603 - 602)] - '0')) / 13 + '0';
            c = (aSLTByD[0] - '0') * 10 + (aSLTByD[1] - '0');
            {
                nm7AokpG6H = 1;
                while (nm7AokpG6H <= l - 2) {
                    NLWK0A = (K5HZVmfPu[nm7AokpG6H - 1] - '0') * 13;
                    c = (c - NLWK0A) * 10 + (aSLTByD[nm7AokpG6H + 1] - '0');
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    K5HZVmfPu[nm7AokpG6H] = c / 13 + '0';
                    nm7AokpG6H = nm7AokpG6H + 1;
                };
            }
            K5HZVmfPu[l - 1] = '\0';
            f = c - (K5HZVmfPu[l - 2] - '0') * 13;
            printf ("%s\n", K5HZVmfPu);
            printf ("%d\n", f);
        }
        else {
            K5HZVmfPu[0] = ((aSLTByD[0] - '0') * 100 + (aSLTByD[1] - '0') * 10 + (aSLTByD[2] - '0')) / 13 + '0';
            c = (aSLTByD[0] - '0') * 100 + (aSLTByD[1] - '0') * 10 + (aSLTByD[2] - '0');
            {
                nm7AokpG6H = 1;
                while (nm7AokpG6H <= l - (882 - 879)) {
                    NLWK0A = (K5HZVmfPu[nm7AokpG6H - 1] - '0') * 13;
                    c = (c - NLWK0A) * 10 + (aSLTByD[nm7AokpG6H + 2] - '0');
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
                    K5HZVmfPu[nm7AokpG6H] = c / 13 + '0';
                    nm7AokpG6H = nm7AokpG6H + 1;
                };
            }
            K5HZVmfPu[l - 2] = '\0';
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
            f = c - (K5HZVmfPu[l - 3] - '0') * 13;
            printf ("%s\n", K5HZVmfPu);
            printf ("%d\n", f);
        };
    }
    else if (l == 2) {
        K5HZVmfPu[0] = ((aSLTByD[0] - '0') * 10 + (aSLTByD[1] - '0')) / 13 + '0';
        f = ((aSLTByD[0] - '0') * 10 + (aSLTByD[1] - '0')) % 13;
        K5HZVmfPu[1] = '\0';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("%s\n", K5HZVmfPu);
        printf ("%d\n", f);
    }
    else {
        K5HZVmfPu[0] = (aSLTByD[0] - '0') / 13 + '0';
        f = aSLTByD[0] - '0';
        K5HZVmfPu[1] = '\0';
        printf ("%s\n", K5HZVmfPu);
        printf ("%d\n", f);
    };
}

