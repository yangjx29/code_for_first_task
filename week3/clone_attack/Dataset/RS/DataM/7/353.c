int main () {
    char CEeh8nZ [(819 - 305)];
    char b [514];
    char c [514];
    char d [(1007 - 751)];
    gets (CEeh8nZ);
    gets (b);
    gets (c);
    int i;
    int j;
    int k;
    int OHL7E3k1;
    int m;
    int n;
    int t;
    int p;
    int q;
    int x;
    int z;
    int y;
    OHL7E3k1 = strlen (CEeh8nZ);
    m = strlen (b);
    for (i = (914 - 914); i < OHL7E3k1 -m + (132 - 131); i = i + 1) {
        if (!(b[(976 - 976)] != CEeh8nZ[i])) {
            k = (141 - 141);
            for (j = i, t = (461 - 461); j < i + m; j++, t = t + 1) {
                if (!(b[t] == CEeh8nZ[j])) {
                    k = 1;
                    break;
                };
            }
            if (k == 0) {
                p = i;
                q = i + m;
                break;
            };
        };
    }
    if (k == 0) {
        for (i = q, j = 0; i < OHL7E3k1; i = i + 1, j++) {
            d[j] = CEeh8nZ[i];
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
        d[j] = 0;
        strcat (c, d);
        CEeh8nZ[p] = 0;
        strcat (CEeh8nZ, c);
        printf ("%s\n", CEeh8nZ);
    }
    else {
        printf ("%s\n", CEeh8nZ);
    }
    return 0;
}

