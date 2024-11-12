struct   student {
    char a6TwQn [30];
    int qimo;
    int banji;
    char MU38WjPDZls;
    char yuSP37cizTra;
    int uv41TP;
};
int JL7f4DigNa = 0;

void  main () {
    long  i8514AC;
    i8514AC = 0;
    int nqTk9H7l (struct   student dQJuqstY9);
    int cmp (int dQJuqstY9 [], int QrY5hN);
    int QrY5hN;
    int lgz4bWYvn;
    int uXZN8p5Q0IF [200] = {0};
    int OOtfDIsUrF9h;
    struct   student dQJuqstY9 [105];
    scanf ("%d", &QrY5hN);
    for (lgz4bWYvn = 0; QrY5hN > lgz4bWYvn; lgz4bWYvn = lgz4bWYvn + 1) {
        scanf ("%s %d %d %c %c %d", dQJuqstY9[lgz4bWYvn].a6TwQn, &dQJuqstY9[lgz4bWYvn].qimo, &dQJuqstY9[lgz4bWYvn].banji, &dQJuqstY9[lgz4bWYvn].MU38WjPDZls, &dQJuqstY9[lgz4bWYvn].yuSP37cizTra, &dQJuqstY9[lgz4bWYvn].uv41TP);
        uXZN8p5Q0IF[lgz4bWYvn] = nqTk9H7l (dQJuqstY9[lgz4bWYvn]);
        i8514AC = i8514AC + uXZN8p5Q0IF[lgz4bWYvn];
    }
    OOtfDIsUrF9h = cmp (uXZN8p5Q0IF, QrY5hN);
    printf ("%s\n", dQJuqstY9[JL7f4DigNa].a6TwQn);
    printf ("%d\n", OOtfDIsUrF9h);
    printf ("%ld", i8514AC);
}

int nqTk9H7l (struct   student dQJuqstY9) {
    int NbHzx3QsFtfO = 0;
    if (dQJuqstY9.qimo > 80 && dQJuqstY9.uv41TP >= 1)
        NbHzx3QsFtfO = 8000;
    if (80 < dQJuqstY9.banji && 85 < dQJuqstY9.qimo)
        NbHzx3QsFtfO = NbHzx3QsFtfO +4000;
    if (90 < dQJuqstY9.qimo)
        NbHzx3QsFtfO = NbHzx3QsFtfO +2000;
    if (dQJuqstY9.qimo > 85 && dQJuqstY9.yuSP37cizTra == 'Y')
        NbHzx3QsFtfO = NbHzx3QsFtfO +1000;
    if (dQJuqstY9.banji > 80 && dQJuqstY9.MU38WjPDZls == 'Y')
        NbHzx3QsFtfO = NbHzx3QsFtfO +850;
    return NbHzx3QsFtfO;
}

int cmp (int dQJuqstY9 [], int QrY5hN) {
    int max = dQJuqstY9[0], lgz4bWYvn;
    for (lgz4bWYvn = 0; lgz4bWYvn < QrY5hN -1; lgz4bWYvn = lgz4bWYvn + 1)
        if (max < dQJuqstY9[lgz4bWYvn + 1]) {
            max = dQJuqstY9[lgz4bWYvn + 1];
            JL7f4DigNa = lgz4bWYvn + 1;
        }
    return max;
}

