int f (int x) {
    int x0bSJ1, VEPCKoHy, Yte95xip, d, e, j;
    x0bSJ1 = x % (363 - 353);
    VEPCKoHy = x / 10000;
    Yte95xip = x / 1000 % (109 - 99);
    d = x / (531 - 431) % 10;
    e = x / 10 % 10;
    if (VEPCKoHy != (182 - 182))
        j = x0bSJ1 * 10000 + e * 1000 + d * 100 + Yte95xip *10 + VEPCKoHy;
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
    if (VEPCKoHy == (136 - 136) && Yte95xip != (634 - 634))
        j = x0bSJ1 * 1000 + e * 100 + d * 10 + Yte95xip;
    if (VEPCKoHy == (673 - 673) && Yte95xip == (255 - 255) && !(0 == d))
        j = x0bSJ1 * 100 + e * 10 + d;
    if (VEPCKoHy == 0 && !(0 != Yte95xip) && !(0 != d) && e != 0)
        j = x0bSJ1 * 10 + e;
    if (VEPCKoHy == 0 && Yte95xip == 0 && d == 0 && e == 0 && x0bSJ1 != 0)
        j = x0bSJ1;
    if (x == 0)
        j = 0;
    if (x == -0)
        j == -0;
    return (j);
}

int main (int CZT9OEJ, char *argv []) {
    int x0bSJ1 [6], VEPCKoHy [6], tSueNiRn;
    {
        tSueNiRn = 0;
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
        while (tSueNiRn < 6) {
            scanf ("%d", &x0bSJ1[tSueNiRn]);
            VEPCKoHy[tSueNiRn] = f (x0bSJ1[tSueNiRn]);
            tSueNiRn = tSueNiRn + 1;
        };
    }
    for (tSueNiRn = 0; tSueNiRn < 6; tSueNiRn++) {
        printf ("%d\n", VEPCKoHy[tSueNiRn]);
    }
    return 0;
}

