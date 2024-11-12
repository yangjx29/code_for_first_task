double  qxCcK1 (int r);

int main () {
    int RWwKxu, n [100], lpINDf, r;
    double  cfb07gqsF;
    scanf ("%d", &RWwKxu);
    for (lpINDf = 0; RWwKxu > lpINDf; lpINDf++) {
        scanf ("%d", &n[lpINDf]);
    }
    {
        lpINDf = 0;
        while (lpINDf < RWwKxu) {
            r = n[lpINDf];
            lpINDf++;
            cfb07gqsF = qxCcK1 (r);
            printf ("%.3lf\n", cfb07gqsF);
        };
    }
    return 0;
}

double  qxCcK1 (int r) {
    int rThUpYmkq2;
    double  CYOZ7FSg3dlQ, ThdGTzVvnqte, B80PYI7OlKhq = 1.0, Zmx0FRS = (271.0 - 269.0), KpAEZaz = (848.0 - 845.0), i9CYpcdIuHJ = 3.500;
    if (r == 1)
        return 2.000;
    if (r == (319 - 317))
        return 3.500;
    for (rThUpYmkq2 = 1; rThUpYmkq2 < r - 1; rThUpYmkq2++) {
        ThdGTzVvnqte = B80PYI7OlKhq +Zmx0FRS;
        B80PYI7OlKhq = Zmx0FRS;
        CYOZ7FSg3dlQ = Zmx0FRS +KpAEZaz;
        Zmx0FRS = KpAEZaz;
        i9CYpcdIuHJ = i9CYpcdIuHJ + CYOZ7FSg3dlQ / ThdGTzVvnqte;
        KpAEZaz = CYOZ7FSg3dlQ;
    }
    return i9CYpcdIuHJ;
}

