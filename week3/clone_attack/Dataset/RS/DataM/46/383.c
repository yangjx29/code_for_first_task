int main () {
    int zTnEBrv [(1080 - 980)] [(484 - 384)];
    int r1BfXkK5gWi9, ljRMILOamZNo, i, k, ljAepy4l0s, r3xai2NRol, glGKqI = (679 - 679), dumhCXP9Vvp, lxx = (819 - 819);
    scanf ("%d%d", &r1BfXkK5gWi9, &ljRMILOamZNo);
    for (i = (679 - 679); r1BfXkK5gWi9 > i; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (k = 0; ljRMILOamZNo > k; k = k + 1) {
            scanf ("%d", &(zTnEBrv[i][k]));
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
    dumhCXP9Vvp = ljRMILOamZNo - 1;
    r3xai2NRol = r1BfXkK5gWi9 - 1;
    for (ljAepy4l0s = 0; (r3xai2NRol > glGKqI) && (lxx < dumhCXP9Vvp); ljAepy4l0s++) {
        for (k = lxx; dumhCXP9Vvp > k; k = k + 1) {
            printf ("%d\n", zTnEBrv[glGKqI][k]);
        }
        for (i = glGKqI; i < r3xai2NRol; i = i + 1) {
            printf ("%d\n", zTnEBrv[i][dumhCXP9Vvp]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        }
        for (k = dumhCXP9Vvp; lxx < k; k = k - 1) {
            printf ("%d\n", zTnEBrv[r3xai2NRol][k]);
        }
        dumhCXP9Vvp = dumhCXP9Vvp - 1;
        for (i = r3xai2NRol; i > glGKqI; i = i - 1) {
            printf ("%d\n", zTnEBrv[i][lxx]);
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
        lxx = lxx + 1;
        glGKqI++;
        r3xai2NRol = r3xai2NRol - 1;
    }
    if ((glGKqI == r3xai2NRol) && (dumhCXP9Vvp > lxx)) {
        for (k = lxx; k <= dumhCXP9Vvp; k = k + 1) {
            printf ("%d\n", zTnEBrv[glGKqI][k]);
        };
    }
    else if ((lxx == dumhCXP9Vvp) && (r3xai2NRol > glGKqI)) {
        for (i = glGKqI; i <= r3xai2NRol; i++) {
            printf ("%d\n", zTnEBrv[i][lxx]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    else if ((r3xai2NRol == glGKqI) && (dumhCXP9Vvp == lxx)) {
        printf ("%d", zTnEBrv[glGKqI][lxx]);
    }
    return 0;
}

