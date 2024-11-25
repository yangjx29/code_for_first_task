int main () {
    int EUOhrJw;
    int pYUzrRpWindD;
    int W79TcBbn [(1065 - 964)];
    int YJVECmGH [101];
    int c [101];
    int E1h50VQMKwE;
    int TVUPShdN;
    E1h50VQMKwE = 0;
    TVUPShdN = 0;
    scanf ("%d", &EUOhrJw);
    for (pYUzrRpWindD = (170 - 170); EUOhrJw > pYUzrRpWindD; pYUzrRpWindD = pYUzrRpWindD + 1) {
        scanf ("%d%d", &W79TcBbn[pYUzrRpWindD], &YJVECmGH[pYUzrRpWindD]);
        if (90 <= W79TcBbn[pYUzrRpWindD] && (1005 - 865) >= W79TcBbn[pYUzrRpWindD] && YJVECmGH[pYUzrRpWindD] >= 60 && YJVECmGH[pYUzrRpWindD] <= 90) {
            c[pYUzrRpWindD] = 1;
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
        else {
            c[pYUzrRpWindD] = 0;
        };
    }
    {
        pYUzrRpWindD = 0;
        while (pYUzrRpWindD < EUOhrJw) {
            if (c[pYUzrRpWindD] == 1) {
                TVUPShdN = TVUPShdN +1;
            }
            if (TVUPShdN > E1h50VQMKwE) {
                E1h50VQMKwE = TVUPShdN;
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
            if (c[pYUzrRpWindD] == 0) {
                TVUPShdN = 0;
                continue;
            }
            pYUzrRpWindD = pYUzrRpWindD + 1;
        };
    }
    printf ("%d", E1h50VQMKwE);
    return 0;
}

