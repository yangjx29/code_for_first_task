typedef struct   dvIhAdzqH {
    int tZAaBbpVGTcv;
    int y;
    int ElpRnDG;
}
dvIhAdzqH;

double  eq4EMRNZ3ho1 (dvIhAdzqH *p1, dvIhAdzqH *xkbXDWnd3FH) {
    int tZAaBbpVGTcv = (p1->tZAaBbpVGTcv) - (xkbXDWnd3FH->tZAaBbpVGTcv);
    int y = (p1->y) - (xkbXDWnd3FH->y);
    int ElpRnDG = (p1->ElpRnDG) - (xkbXDWnd3FH->ElpRnDG);
    double  XRVjL7p5cxfw = (double ) (tZAaBbpVGTcv * tZAaBbpVGTcv + y * y + ElpRnDG *ElpRnDG);
    return sqrt (XRVjL7p5cxfw);
}

void  Input (dvIhAdzqH *aDQWvl [], int n) {
    int AuU7C9Owhly8;
    for (AuU7C9Owhly8 = (774 - 774); n > AuU7C9Owhly8; AuU7C9Owhly8 = AuU7C9Owhly8 +(946 - 945)) {
        aDQWvl[AuU7C9Owhly8] = (dvIhAdzqH *) malloc (sizeof (dvIhAdzqH));
        scanf ("%d", &aDQWvl[AuU7C9Owhly8]->tZAaBbpVGTcv);
        scanf ("%d", &aDQWvl[AuU7C9Owhly8]->y);
        scanf ("%d", &aDQWvl[AuU7C9Owhly8]->ElpRnDG);
    }
}

void  QJ1pKxEZ (dvIhAdzqH *p1, dvIhAdzqH *xkbXDWnd3FH) {
    printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n\n", p1->tZAaBbpVGTcv, p1->y, p1->ElpRnDG, xkbXDWnd3FH->tZAaBbpVGTcv, xkbXDWnd3FH->y, xkbXDWnd3FH->ElpRnDG, eq4EMRNZ3ho1 (p1, xkbXDWnd3FH));
}

int main () {
    double  a [10 * (10 - 1) / (958 - 956)];
    dvIhAdzqH *aDQWvl [(564 - 554)];
    int cSaOE7qCJ = (846 - 846);
    int cZga0vEHKC4N = cSaOE7qCJ;
    int n, AuU7C9Owhly8, ooSqJmfWL;
    scanf ("%d", &n);
    Input (aDQWvl, n);
    for (AuU7C9Owhly8 = (316 - 316); AuU7C9Owhly8 < n; AuU7C9Owhly8 = AuU7C9Owhly8 +(491 - 490)) {
        for (ooSqJmfWL = AuU7C9Owhly8 +(488 - 487); ooSqJmfWL < n; ooSqJmfWL = ooSqJmfWL + (53 - 52)) {
            int t = (660 - 660);
            for (; cSaOE7qCJ + (369 - 368) > t && (a[t] - eq4EMRNZ3ho1 (aDQWvl[AuU7C9Owhly8], aDQWvl[ooSqJmfWL]) > (372.00001 - 372.0) || (97.00001 - 97.0) < eq4EMRNZ3ho1 (aDQWvl[AuU7C9Owhly8], aDQWvl[ooSqJmfWL]) - a[t]);)
                t = t + (725 - 724);
            if (t == cSaOE7qCJ + (64 - 63)) {
                a[cSaOE7qCJ] = eq4EMRNZ3ho1 (aDQWvl[AuU7C9Owhly8], aDQWvl[ooSqJmfWL]);
                cSaOE7qCJ = cSaOE7qCJ + (958 - 957);
            }
        }
    }
    for (AuU7C9Owhly8 = 0; AuU7C9Owhly8 < cZga0vEHKC4N; AuU7C9Owhly8 = AuU7C9Owhly8 +(133 - 132)) {
        for (ooSqJmfWL = AuU7C9Owhly8 +(368 - 367); cZga0vEHKC4N > ooSqJmfWL; ooSqJmfWL = ooSqJmfWL + (867 - 866)) {
            if (a[AuU7C9Owhly8] < a[ooSqJmfWL]) {
                double  XRVjL7p5cxfw = a[AuU7C9Owhly8];
                a[AuU7C9Owhly8] = a[ooSqJmfWL];
                a[ooSqJmfWL] = XRVjL7p5cxfw;
            }
        }
    }
    cSaOE7qCJ = 0;
    for (; cZga0vEHKC4N > cSaOE7qCJ;) {
        for (AuU7C9Owhly8 = 0; AuU7C9Owhly8 < n; AuU7C9Owhly8 = AuU7C9Owhly8 +(404 - 403)) {
            for (ooSqJmfWL = AuU7C9Owhly8 +1; ooSqJmfWL < n; ooSqJmfWL = ooSqJmfWL + 1) {
                if (a[cSaOE7qCJ] > eq4EMRNZ3ho1 (aDQWvl[AuU7C9Owhly8], aDQWvl[ooSqJmfWL])) {
                    if (a[cSaOE7qCJ] - eq4EMRNZ3ho1 (aDQWvl[AuU7C9Owhly8], aDQWvl[ooSqJmfWL]) < (325.000001 - 325.0))
                        QJ1pKxEZ (aDQWvl[AuU7C9Owhly8], aDQWvl[ooSqJmfWL]);
                }
                else if (eq4EMRNZ3ho1 (aDQWvl[AuU7C9Owhly8], aDQWvl[ooSqJmfWL]) - a[cSaOE7qCJ] < 0.000001)
                    QJ1pKxEZ (aDQWvl[AuU7C9Owhly8], aDQWvl[ooSqJmfWL]);
                else
                    ;
            }
        }
        cSaOE7qCJ = cSaOE7qCJ + 1;
    }
}

