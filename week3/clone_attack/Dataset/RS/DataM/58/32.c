int main () {
    char UXloYS3w74 [30] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '_'}, fQVwYy [1000] [1000];
    gets (fQVwYy [1]);
    int go34RB;
    int A4XgTEduxG;
    int OegmwIkATU;
    int kd06CoY;
    int q;
    go34RB = 0;
    scanf ("%d", &A4XgTEduxG);
    {
        OegmwIkATU = 1;
        while (OegmwIkATU <= A4XgTEduxG) {
            gets (fQVwYy [OegmwIkATU]);
            go34RB = 0;
            {
                q = 0;
                while (1) {
                    if (!(' ' != fQVwYy[OegmwIkATU][q]) || !('.' != fQVwYy[OegmwIkATU][q]) || fQVwYy[OegmwIkATU][q] == '@' || !(';' != fQVwYy[OegmwIkATU][q]) || !('-' != fQVwYy[OegmwIkATU][q]) || !('=' != fQVwYy[OegmwIkATU][q]) || fQVwYy[OegmwIkATU][q] == '+') {
                        go34RB = 5;
                    }
                    if (fQVwYy[OegmwIkATU][q] == '\0')
                        break;
                    q++;
                };
            }
            if (go34RB == 5) {
                continue;
            }
            {
                kd06CoY = 0;
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
                while (kd06CoY <= 26) {
                    if (fQVwYy[OegmwIkATU][0] == UXloYS3w74[kd06CoY] || fQVwYy[OegmwIkATU][0] == (UXloYS3w74[kd06CoY] - 32)) {
                        go34RB = go34RB + 1;
                    }
                    kd06CoY = kd06CoY + 1;
                };
            }
            if (go34RB == 0) {
            }
            OegmwIkATU = OegmwIkATU +1;
        };
    }
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
}

