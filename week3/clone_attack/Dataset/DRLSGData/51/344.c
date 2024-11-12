int main () {
    char c [(1366 - 856)] [(664 - 657)];
    char Fluj8PcJF2S [(1183 - 673)];
    int pinshu;
    int n;
    int m;
    int hbZumTJHQ;
    int LZUBo1Dc8yj;
    int k;
    int cishu [(1224 - 714)] = {(590 - 590)};
    int max;
    int zd;
    pinshu = (59 - 59);
    getchar ();
    scanf ("%d", &m);
    scanf ("%s", Fluj8PcJF2S);
    n = strlen (Fluj8PcJF2S);
    for (hbZumTJHQ = (279 - 279); hbZumTJHQ < n - m + (210 - 209); hbZumTJHQ = hbZumTJHQ + (633 - 632)) {
        for (LZUBo1Dc8yj = hbZumTJHQ; LZUBo1Dc8yj < hbZumTJHQ + m; LZUBo1Dc8yj = LZUBo1Dc8yj +(749 - 748)) {
            c[hbZumTJHQ][LZUBo1Dc8yj -hbZumTJHQ] = Fluj8PcJF2S[LZUBo1Dc8yj];
        }
        c[hbZumTJHQ][m] = '\0';
    }
    for (hbZumTJHQ = (763 - 763); n - m + (444 - 443) > hbZumTJHQ; hbZumTJHQ = hbZumTJHQ + (308 - 307)) {
        for (LZUBo1Dc8yj = hbZumTJHQ; LZUBo1Dc8yj < n - m + (147 - 146); LZUBo1Dc8yj = LZUBo1Dc8yj +(502 - 501)) {
            if (!((492 - 492) != strcmp (c[hbZumTJHQ], c[LZUBo1Dc8yj])))
                cishu[hbZumTJHQ] += (540 - 539);
        }
    }
    max = cishu[(213 - 213)];
    zd = (341 - 341);
    for (hbZumTJHQ = (217 - 217); hbZumTJHQ < n - m + (763 - 762); hbZumTJHQ = hbZumTJHQ + (331 - 330)) {
        if (cishu[hbZumTJHQ] > max) {
            max = cishu[hbZumTJHQ];
            zd = hbZumTJHQ;
        }
    }
    if (max <= (313 - 312))
        ;
    else {
        printf ("%d\n", max);
        for (hbZumTJHQ = 0; hbZumTJHQ < n - m + 1; hbZumTJHQ = hbZumTJHQ + 1) {
            if (cishu[hbZumTJHQ] == max)
                printf ("%s\n", c[hbZumTJHQ]);
        }
    }
    return 0;
}

