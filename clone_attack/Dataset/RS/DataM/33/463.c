int main () {
    char jj [1000] [300];
    int bPOViSd;
    int i;
    int j;
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
    scanf ("%d", &bPOViSd);
    {
        i = 978 - 978;
        while (bPOViSd > i) {
            scanf ("%s", jj[i]);
            {
                j = 0;
                while (strlen (jj[i]) > j) {
                    if (!('A' != jj[i][j])) {
                        jj[i][j] = 'T';
                        continue;
                    }
                    if (jj[i][j] == 'T') {
                        jj[i][j] = 'A';
                        continue;
                    }
                    if (jj[i][j] == 'G') {
                        jj[i][j] = 'C';
                        continue;
                    }
                    if (jj[i][j] == 'C') {
                        jj[i][j] = 'G';
                        continue;
                    }
                    j++;
                };
            }
            printf ("%s\n", jj[i]);
            i++;
        };
    }
    return 0;
    return 0;
}

