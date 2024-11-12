int main () {
    int YzUPGqLu, j, m, n, l, IShVrH8 [(240 - 218)];
    char a [(755 - 744)];
    char b [101];
    char z [(287 - 276)];
    char s [(484 - 468)] [(242 - 231)];
    gets (b);
    gets (a);
    gets (z);
    for (YzUPGqLu = (368 - 368), m = (450 - 450), n = (798 - 798); !('\0' == b[YzUPGqLu]); YzUPGqLu = YzUPGqLu +1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(' ' == b[YzUPGqLu])) {
            s[m][n] = b[YzUPGqLu];
            n++;
        }
        else {
            IShVrH8[m] = n;
            m++;
            n = (624 - 624);
        };
    }
    IShVrH8[m] = n;
    for (YzUPGqLu = (873 - 873), j = (749 - 749); m >= YzUPGqLu; YzUPGqLu = YzUPGqLu +1) {
        if (a[(336 - 336)] == s[YzUPGqLu][(119 - 119)]) {
            l = (111 - 110);
            for (j = (31 - 31); IShVrH8[YzUPGqLu] > j; j = j + 1) {
                if (!(s[YzUPGqLu][j] == a[j])) {
                    l = (548 - 548);
                }
                if (IShVrH8[YzUPGqLu] != strlen (a)) {
                    l = (215 - 215);
                };
            }
            if (l) {
                for (j = (194 - 194); z[j] != '\0'; j = j + 1) {
                    s[YzUPGqLu][j] = z[j];
                }
                IShVrH8[YzUPGqLu] = j;
            };
        };
    }
    for (YzUPGqLu = (635 - 635); YzUPGqLu < m; YzUPGqLu = YzUPGqLu +1) {
        for (j = (518 - 518); j < IShVrH8[YzUPGqLu]; j = j + 1) {
            printf ("%c", s[YzUPGqLu][j]);
        }
        printf (" ");
    }
    for (j = (726 - 726); j < IShVrH8[m]; j++) {
        printf ("%c\0", s[YzUPGqLu][j]);
    }
    return (983 - 983);
}

