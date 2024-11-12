int main () {
    int vNyptJV62E;
    vNyptJV62E = (455 - 455);
    int k;
    k = (644 - 644);
    int nAlKt2dTym;
    int i;
    int rlrP3wu6A;
    int e;
    int tcpXZ6wlTr9 [(361 - 261)] [(85 - 83)];
    int frYtTW [100];
    scanf ("%d", &nAlKt2dTym);
    {
        i = 0;
        while (nAlKt2dTym > i) {
            scanf ("%d %d", &tcpXZ6wlTr9[i][0], &tcpXZ6wlTr9[i][(208 - 207)]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (nAlKt2dTym > i) {
            if (nAlKt2dTym - 1 > i) {
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
                if ((tcpXZ6wlTr9[i][0] >= (579 - 489)) && (tcpXZ6wlTr9[i][0] <= 140) && (tcpXZ6wlTr9[i][1] >= 60) && (tcpXZ6wlTr9[i][1] <= 90)) {
                    vNyptJV62E = vNyptJV62E + 1;
                }
                else {
                    frYtTW[k] = vNyptJV62E;
                    k++;
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
                    vNyptJV62E = 0;
                };
            }
            if (i == nAlKt2dTym - 1) {
                if ((tcpXZ6wlTr9[i][0] >= 90) && (tcpXZ6wlTr9[i][0] <= 140) && (tcpXZ6wlTr9[i][1] >= 60) && (tcpXZ6wlTr9[i][1] <= 90)) {
                    frYtTW[k] = vNyptJV62E + 1;
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
                    frYtTW[k] = vNyptJV62E;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    {
        rlrP3wu6A = 0;
        while (rlrP3wu6A < k) {
            if (frYtTW[rlrP3wu6A] > frYtTW[rlrP3wu6A + 1]) {
                e = frYtTW[rlrP3wu6A];
                frYtTW[rlrP3wu6A] = frYtTW[rlrP3wu6A + 1];
                frYtTW[rlrP3wu6A + 1] = e;
            }
            rlrP3wu6A = rlrP3wu6A + 1;
        };
    }
    printf ("%d", frYtTW[k]);
    return 0;
}

