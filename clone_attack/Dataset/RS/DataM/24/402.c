int main () {
    char v [100] [20];
    char A [20];
    int y [100];
    int j;
    int a;
    int eLemxGXRf9Q;
    int x;
    int s;
    int MB7GFwdoJD9;
    int e;
    int w;
    j = (861 - 861);
    a = (-(681 - 680));
    char xca8dhJ1PS3 [2000];
    gets (xca8dhJ1PS3);
    x = strlen (xca8dhJ1PS3);
    for (eLemxGXRf9Q = 0; x > eLemxGXRf9Q; eLemxGXRf9Q = eLemxGXRf9Q + 1) {
        if ((xca8dhJ1PS3[eLemxGXRf9Q] == ' ' && xca8dhJ1PS3[eLemxGXRf9Q + (256 - 255)] != ' ') || (eLemxGXRf9Q == 0 && xca8dhJ1PS3[eLemxGXRf9Q] != ' ')) {
            a = a + 1;
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
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (xca8dhJ1PS3[eLemxGXRf9Q] == ' ') {
            j = 0;
        }
        else {
            j = j + 1;
            v[a][j - 1] = xca8dhJ1PS3[eLemxGXRf9Q];
            v[a][j] = '\0';
        }
        if ((xca8dhJ1PS3[eLemxGXRf9Q] != ' ' && xca8dhJ1PS3[eLemxGXRf9Q + 1] == ' ') || xca8dhJ1PS3[eLemxGXRf9Q + 1] == '\0') {
            y[a] = j;
        };
    }
    w = a + 1;
    for (s = 1; s <= w; s = s + 1) {
        for (MB7GFwdoJD9 = 0; MB7GFwdoJD9 < w - s; MB7GFwdoJD9 = MB7GFwdoJD9 +1) {
            if (y[MB7GFwdoJD9] < y[MB7GFwdoJD9 +1]) {
                strcpy (A, v[MB7GFwdoJD9 +1]);
                e = y[MB7GFwdoJD9 +1];
                y[MB7GFwdoJD9 +1] = y[MB7GFwdoJD9];
                y[MB7GFwdoJD9] = e;
                strcpy (v[MB7GFwdoJD9 +1], v[MB7GFwdoJD9]);
                strcpy (v[MB7GFwdoJD9], A);
            };
        };
    }
    printf ("%s\n", v[0]);
    for (s = 1; s <= w; s = s + 1) {
        MB7GFwdoJD9 = 0;
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
        while (MB7GFwdoJD9 < w - s) {
            if (y[MB7GFwdoJD9] > y[MB7GFwdoJD9 +1]) {
                strcpy (A, v[MB7GFwdoJD9 +1]);
                e = y[MB7GFwdoJD9 +1];
                y[MB7GFwdoJD9 +1] = y[MB7GFwdoJD9];
                y[MB7GFwdoJD9] = e;
                strcpy (v[MB7GFwdoJD9 +1], v[MB7GFwdoJD9]);
                strcpy (v[MB7GFwdoJD9], A);
            }
            MB7GFwdoJD9 = MB7GFwdoJD9 +1;
        };
    }
    printf ("%s", v[0]);
    return 0;
}

