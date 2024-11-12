int main () {
    float MUId4S;
    int O0h1ZPS;
    int X4rBxR6pFS [(1027 - 927)], NMDEIK9H [100];
    int OWorSn84yA3X, KUOE7Tu, uFdqeijXa3, ufeVbdiu, AC7VPSoB = (865 - 865), qpY19Fm = (199 - 198);
    scanf ("%d", &O0h1ZPS);
    for (OWorSn84yA3X = 0; O0h1ZPS > OWorSn84yA3X; OWorSn84yA3X = OWorSn84yA3X +1) {
        scanf ("%d%d", &X4rBxR6pFS[OWorSn84yA3X], &NMDEIK9H[OWorSn84yA3X]);
    }
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
    uFdqeijXa3 = X4rBxR6pFS[0];
    ufeVbdiu = NMDEIK9H[0];
    for (OWorSn84yA3X = 0; O0h1ZPS > OWorSn84yA3X; OWorSn84yA3X = OWorSn84yA3X +1) {
        if (X4rBxR6pFS[OWorSn84yA3X] < uFdqeijXa3)
            uFdqeijXa3 = X4rBxR6pFS[OWorSn84yA3X];
        if (NMDEIK9H[OWorSn84yA3X] > ufeVbdiu)
            ufeVbdiu = NMDEIK9H[OWorSn84yA3X];
    }
    {
        OWorSn84yA3X = uFdqeijXa3;
        while (OWorSn84yA3X < ufeVbdiu) {
            AC7VPSoB = 0;
            MUId4S = OWorSn84yA3X +0.5f;
            for (KUOE7Tu = 0; KUOE7Tu < O0h1ZPS; KUOE7Tu = KUOE7Tu +1) {
                if (MUId4S >= X4rBxR6pFS[KUOE7Tu] && MUId4S <= NMDEIK9H[KUOE7Tu]) {
                    AC7VPSoB = 1;
                    break;
                };
            }
            if (AC7VPSoB == 0) {
                qpY19Fm = 0;
                break;
            }
            OWorSn84yA3X = OWorSn84yA3X +1;
        };
    }
    if (qpY19Fm == 1)
        printf ("%d %d\n", uFdqeijXa3, ufeVbdiu);
    else
        ;
    return 0;
}

