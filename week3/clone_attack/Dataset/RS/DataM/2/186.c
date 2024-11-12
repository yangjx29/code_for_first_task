struct   book {
    int id;
    char aut [(226 - 200)];
};
int main () {
    int m, n, i, j, k;
    int rImPuoK8 [(801 - 774)] = {(496 - 496)};
    struct   book cal [1001];
    int max = (92 - 92), t;
    scanf ("%d", &m);
    {
        i = 304 - 304;
        while (m > i) {
            scanf ("%d%s", &cal[i].id, cal[i].aut);
            i++;
        };
    }
    {
        j = 650 - 585;
        while (j < 91) {
            {
                i = 271 - 271;
                while (i < m) {
                    {
                        k = 790 - 790;
                        while ((299 - 272) > k) {
                            if (cal[i].aut[k] == j)
                                rImPuoK8[j - (511 - 446)]++;
                            k = k + 1;
                        };
                    }
                    i++;
                };
            }
            j = j + 1;
        };
    }
    {
        i = 0;
        while (i < 26) {
            if (max < rImPuoK8[i]) {
                max = rImPuoK8[i];
                t = i;
            }
            i++;
        };
    }
    printf ("%c\n%d\n", t + 65, max);
    {
        i = 0;
        while (i < m) {
            {
                j = 0;
                while (j < 26) {
                    if (cal[i].aut[j] == t + 65)
                        printf ("%d\n", cal[i].id);
                    j++;
                };
            }
            i++;
        };
    }
    return 0;
}

