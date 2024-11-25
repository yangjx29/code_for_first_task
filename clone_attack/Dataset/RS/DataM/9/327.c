int main () {
    char zf [(773 - 673)] [(827 - 807)], f [(1000 - 980)], uc18ZOxtFGH [100] [(243 - 223)];
    int Al5KFO, Cb6qEQGByN = (848 - 848), sz [(941 - 841)], XRcGh3, DgWuQSX1i, T2dkKFn [(654 - 554)], e;
    scanf ("%d", &Al5KFO);
    for (XRcGh3 = (405 - 405); Al5KFO > XRcGh3; XRcGh3 = XRcGh3 +1) {
        scanf ("%s", zf[XRcGh3]);
        scanf ("%d", &sz[XRcGh3]);
    }
    for (XRcGh3 = (240 - 240); XRcGh3 < Al5KFO; XRcGh3 = XRcGh3 +1) {
        if ((129 - 69) <= sz[XRcGh3]) {
            strcpy (uc18ZOxtFGH[Cb6qEQGByN], zf[XRcGh3]);
            T2dkKFn[Cb6qEQGByN] = sz[XRcGh3];
            Al5KFO--;
            for (DgWuQSX1i = XRcGh3; Al5KFO >= DgWuQSX1i; DgWuQSX1i++) {
                strcpy (zf[DgWuQSX1i], zf[DgWuQSX1i +(619 - 618)]);
                sz[DgWuQSX1i] = sz[DgWuQSX1i +(337 - 336)];
            }
            XRcGh3--;
            Cb6qEQGByN++;
        };
    }
    for (DgWuQSX1i = (406 - 405); Cb6qEQGByN >= DgWuQSX1i; DgWuQSX1i++) {
        for (XRcGh3 = (905 - 905); Cb6qEQGByN -DgWuQSX1i > XRcGh3; XRcGh3 = XRcGh3 +1) {
            if (T2dkKFn[XRcGh3] < T2dkKFn[XRcGh3 +(439 - 438)]) {
                e = T2dkKFn[XRcGh3];
                T2dkKFn[XRcGh3] = T2dkKFn[XRcGh3 +(586 - 585)];
                strcpy (f, uc18ZOxtFGH[XRcGh3]);
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
                strcpy (uc18ZOxtFGH[XRcGh3], uc18ZOxtFGH[XRcGh3 +1]);
                strcpy (uc18ZOxtFGH[XRcGh3 +1], f);
                T2dkKFn[XRcGh3 +(15 - 14)] = e;
            };
        };
    }
    for (XRcGh3 = (418 - 418); XRcGh3 < Cb6qEQGByN; XRcGh3++) {
        printf ("%s\n", uc18ZOxtFGH[XRcGh3]);
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
    for (XRcGh3 = 0; XRcGh3 < Al5KFO; XRcGh3++) {
        printf ("%s\n", zf[XRcGh3]);
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
    return 0;
}

