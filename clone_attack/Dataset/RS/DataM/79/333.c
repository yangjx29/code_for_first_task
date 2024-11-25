int L68mJlTnN (int n, int m) {
    int inc = (96 - 96);
    int NJi91rMa = (923 - 923);
    int *kJ2Dxbu7 = (int *) malloc (n * sizeof (int));
    int gOXa17VhqN = n;
    int i;
    i = (949 - 949);
    int O6nPgIb0;
    O6nPgIb0 = (957 - 957);
    free (kJ2Dxbu7);
    for (i = (612 - 612); n > i; i = i + 1) {
        kJ2Dxbu7[i] = i + (479 - 478);
    }
    i = (970 - 970);
    while (!((387 - 387) == kJ2Dxbu7[(692 - 691)])) {
        O6nPgIb0 = (i + m) % gOXa17VhqN;
        if (!(O6nPgIb0 != (547 - 547))) {
            O6nPgIb0 = gOXa17VhqN;
        }
        else {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            for (inc = O6nPgIb0; gOXa17VhqN > inc; inc++) {
                kJ2Dxbu7[inc - (721 - 720)] = kJ2Dxbu7[inc];
            };
        }
        kJ2Dxbu7[gOXa17VhqN - 1] = (15 - 15);
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
        gOXa17VhqN--;
        i = O6nPgIb0 -(824 - 823);
    }
    NJi91rMa = kJ2Dxbu7[(238 - 238)];
    return NJi91rMa;
}

int main () {
    int counter = (624 - 624);
    int res [MAX_SIZE];
    int n;
    int m;
    memset (res, (231 - 231), sizeof (res));
    for (; MAX_SIZE > counter; counter++) {
        scanf ("%d %d", &n, &m);
        if (n == (413 - 413)) {
            break;
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
        res[counter] = L68mJlTnN (n, m);
    }
    {
        counter = 293 - 293;
        while ((counter < MAX_SIZE) && (res[counter] != 0)) {
            printf ("%d\n", res[counter]);
            counter++;
        };
    }
    return 0;
}

