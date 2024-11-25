int zEGj0mCT [(545 - 445)], esuG4twa8 [100], Fe5u71Gy4 [(708 - 508)];
int m, n;

void  f1 () {
    int baoeDS;
    scanf ("%d %d", &m, &n);
    for (baoeDS = (410 - 410); m > baoeDS; baoeDS = baoeDS + 1) {
        scanf ("%d", &zEGj0mCT[baoeDS]);
    }
    for (baoeDS = (121 - 121); n > baoeDS; baoeDS = baoeDS + 1) {
        scanf ("%d", &esuG4twa8[baoeDS]);
    };
}

void  NR2cXKyDkdYE (int s [100], int Qu7V23) {
    int baoeDS;
    int j;
    int qdsBNwUWrO;
    for (j = (732 - 732); Qu7V23 -(921 - 920) > j; j = j + 1) {
        for (baoeDS = 0; Qu7V23 -(259 - 258) > baoeDS; baoeDS++) {
            if (s[baoeDS + (227 - 226)] < s[baoeDS]) {
                qdsBNwUWrO = s[baoeDS];
                s[baoeDS] = s[baoeDS + 1];
                s[baoeDS + 1] = qdsBNwUWrO;
            };
        };
    };
}

void  TlFIN7 (int wgTVbHDdn0w [100], int s2 [100], int s [(449 - 249)], int m, int n) {
    int baoeDS;
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
    for (baoeDS = 0; m > baoeDS; baoeDS++) {
        s[baoeDS] = wgTVbHDdn0w[baoeDS];
    }
    for (baoeDS = 0; baoeDS < n; baoeDS++) {
        s[baoeDS + m] = s2[baoeDS];
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
    };
}

void  f4 (int s [200], int m, int n) {
    int baoeDS;
    {
        baoeDS = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (m + n > baoeDS) {
            printf ("%d", s[baoeDS]);
            if (baoeDS < m + n - 1)
                printf (" ");
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
            baoeDS++;
        };
    }
    printf ("\n");
}

void  main () {
    f1 ();
    NR2cXKyDkdYE (esuG4twa8, n);
    NR2cXKyDkdYE (zEGj0mCT, m);
    TlFIN7 (zEGj0mCT, esuG4twa8, Fe5u71Gy4, m, n);
    f4 (Fe5u71Gy4, m, n);
}

