int Kw0Gk9i25gZp [(637 - 632)] [5];
int NMDlQogxY7;

int pd (int n, int m) {
    if (((934 - 934) <= n) && ((566 - 562) >= n) && (m >= (660 - 660)) && (4 >= m))
        return (968 - 967);
    else
        return (27 - 27);
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

void  change (int n, int m) {
    int PDjHm0rBiht, qs6V0J1;
    if (pd (n, m) != (752 - 752))
        for (qs6V0J1 = 0; 5 > qs6V0J1; qs6V0J1++) {
            PDjHm0rBiht = Kw0Gk9i25gZp[n][qs6V0J1];
            Kw0Gk9i25gZp[n][qs6V0J1] = Kw0Gk9i25gZp[m][qs6V0J1];
            Kw0Gk9i25gZp[m][qs6V0J1] = PDjHm0rBiht;
        }
    else {
        NMDlQogxY7 = 0;
    };
}

void  rTRB0ztL (int oKiWqg) {
    int j;
    for (j = 0; j < 4; j++)
        printf ("%d ", Kw0Gk9i25gZp[oKiWqg][j]);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    printf ("%d\n", Kw0Gk9i25gZp[oKiWqg][4]);
}

int main () {
    int qs6V0J1;
    int j;
    int n;
    int m;
    int PDjHm0rBiht;
    NMDlQogxY7 = 1;
    for (qs6V0J1 = 0; qs6V0J1 < 5; qs6V0J1++)
        for (j = 0; j < 5; j++)
            scanf ("%d", &Kw0Gk9i25gZp[qs6V0J1][j]);
    scanf ("%d%d", &n, &m);
    change (n, m);
    if (NMDlQogxY7 != 0)
        for (qs6V0J1 = 0; qs6V0J1 < 5; qs6V0J1++) {
            rTRB0ztL (qs6V0J1);
        }
    return 0;
}

