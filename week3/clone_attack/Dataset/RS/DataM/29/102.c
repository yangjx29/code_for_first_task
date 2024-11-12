int main () {
    int afK25lSnbVgH;
    int jie;
    int eY2xgTl3u6;
    int uWlMtLd;
    int P4vMsquDJ;
    int c [100];
    afK25lSnbVgH = 0;
    jie = (439 - 438);
    float a [100] [300];
    float b [100];
    scanf ("%d", &eY2xgTl3u6);
    for (uWlMtLd = 1; eY2xgTl3u6 >= uWlMtLd; uWlMtLd = uWlMtLd + 1) {
        b[uWlMtLd] = 0;
    }
    for (uWlMtLd = 1; uWlMtLd <= eY2xgTl3u6; uWlMtLd++) {
        scanf ("%d", &c[uWlMtLd]);
        for (P4vMsquDJ = 1; c[uWlMtLd] + 2 >= P4vMsquDJ; P4vMsquDJ = P4vMsquDJ +1) {
            if (P4vMsquDJ == 1)
                a[uWlMtLd][P4vMsquDJ] = 1.0;
            else {
                if (P4vMsquDJ == 2)
                    a[uWlMtLd][P4vMsquDJ] = 2.0;
                else
                    a[uWlMtLd][P4vMsquDJ] = a[uWlMtLd][P4vMsquDJ -1] + a[uWlMtLd][P4vMsquDJ -2];
            };
        };
    }
    for (uWlMtLd = 1; uWlMtLd <= eY2xgTl3u6; uWlMtLd++) {
        for (P4vMsquDJ = 1; P4vMsquDJ <= c[uWlMtLd]; P4vMsquDJ++) {
            b[uWlMtLd] += a[uWlMtLd][P4vMsquDJ +1] / a[uWlMtLd][P4vMsquDJ];
        }
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
        printf ("%.3f\n", b[uWlMtLd]);
    }
    return 0;
}

