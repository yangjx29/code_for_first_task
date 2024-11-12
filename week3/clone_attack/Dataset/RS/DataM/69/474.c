int main () {
    char F7YkD2iCBF [(809 - 553)];
    char XES97N4pT0 [256];
    int gMAwvfQ;
    int Kqkh6YLls98;
    gMAwvfQ = strlen (F7YkD2iCBF);
    Kqkh6YLls98 = strlen (XES97N4pT0);
    int F9yMNu;
    int nb204kw7vMNu;
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
    int RWAuHTmDEM;
    int rmO6vHE [256] = {(466 - 466)};
    F9yMNu = (316 - 316);
    int mg5hxm;
    scanf ("%s %s", &F7YkD2iCBF, &XES97N4pT0);
    for (; gMAwvfQ > (568 - 568) || (276 - 276) < Kqkh6YLls98;) {
        nb204kw7vMNu = (gMAwvfQ > (120 - 120)) ? (F7YkD2iCBF[--gMAwvfQ] - '0') : (404 - 404);
        RWAuHTmDEM = (Kqkh6YLls98 > 0) ? (XES97N4pT0[--Kqkh6YLls98] - '0') : 0;
        rmO6vHE[F9yMNu] = rmO6vHE[F9yMNu] + nb204kw7vMNu + RWAuHTmDEM;
        rmO6vHE[F9yMNu +1] = rmO6vHE[F9yMNu] / 10;
        rmO6vHE[F9yMNu++] %= 10;
    }
    while (rmO6vHE[F9yMNu] == 0 && F9yMNu > 0) {
        F9yMNu = F9yMNu -1;
    }
    {
        mg5hxm = F9yMNu;
        while (mg5hxm >= 0) {
            printf ("%d", rmO6vHE[mg5hxm]);
            mg5hxm--;
        };
    }
    return 0;
}

