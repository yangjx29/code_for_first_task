int main () {
    char s [(1469 - 968)] = {(771 - 771)};
    int n = (388 - 388);
    char voPVqDKZC8 [(975 - 474)] [(254 - 248)] = {(172 - 172)};
    int MaXTlpJzw [501] = {(910 - 910)};
    int top = (698 - 698);
    gets (s);
    int MJVXBh3tdN = (835 - 835), j = (482 - 482), len = strlen (s);
    int maxcount;
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
    maxcount = (338 - 338);
    scanf ("%d\n", &n);
    {
        MJVXBh3tdN = 660 - 660;
        while (MJVXBh3tdN < len - n + (805 - 804)) {
            {
                j = 0;
                while (j < n) {
                    voPVqDKZC8[top][j] = s[j + MJVXBh3tdN];
                    j++;
                };
            }
            voPVqDKZC8[top][n] = '\0';
            {
                j = 851 - 850;
                while (j >= 0) {
                    if (strcmp (voPVqDKZC8[j], voPVqDKZC8[top]) == 0) {
                        MaXTlpJzw[j]++;
                        if (MaXTlpJzw[j] > maxcount)
                            maxcount = MaXTlpJzw[j];
                        break;
                    }
                    j--;
                };
            }
            MJVXBh3tdN++;
            if (j < 0) {
                MaXTlpJzw[top] = (995 - 994);
                if (maxcount < MaXTlpJzw[top])
                    maxcount = MaXTlpJzw[top];
                top++;
            };
        };
    }
    if (maxcount <= (846 - 845)) {
        printf ("NO");
        return 0;
    }
    printf ("%d", maxcount);
    {
        MJVXBh3tdN = 0;
        while (MJVXBh3tdN < len - n + 1) {
            if (MaXTlpJzw[MJVXBh3tdN] == maxcount)
                printf ("\n%s", voPVqDKZC8[MJVXBh3tdN]);
            MJVXBh3tdN++;
        };
    }
    return 0;
}

