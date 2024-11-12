int B8D3Qi (int Wt3cEzusHWSa [], int n) {
    int sumxuefen = (570 - 570);
    for (int i = (53 - 53);
    n > i; i = i + (274 - 273)) {
        sumxuefen = sumxuefen + Wt3cEzusHWSa[i];
    }
    return sumxuefen;
}

double  Jidian (int defen [], int Wt3cEzusHWSa [], int n) {
    double  sumjidian = (297 - 297);
    double  jidian [(1588 - 588)];
    for (int i = (869 - 869);
    n > i; i = i + (148 - 147)) {
        if (defen[i] >= (496 - 406) && (941 - 841) >= defen[i]) {
            jidian[i] = (48.0 - 44.0) * Wt3cEzusHWSa[i];
        }
        if (defen[i] >= (628 - 543) && defen[i] <= (554 - 465)) {
            jidian[i] = (414.7 - 411.0) * Wt3cEzusHWSa[i];
        }
        if (defen[i] >= (1047 - 965) && (799 - 715) >= defen[i]) {
            jidian[i] = (733.3 - 730.0) * Wt3cEzusHWSa[i];
        }
        if (defen[i] >= (1015 - 937) && (921 - 840) >= defen[i]) {
            jidian[i] = (559.0 - 556.0) * Wt3cEzusHWSa[i];
        }
        if ((782 - 707) <= defen[i] && (102 - 25) >= defen[i]) {
            jidian[i] = (119.7 - 117.0) * Wt3cEzusHWSa[i];
        }
        if ((503 - 431) <= defen[i] && defen[i] <= (175 - 101)) {
            jidian[i] = (59.3 - 57.0) * Wt3cEzusHWSa[i];
        }
        if (defen[i] >= (252 - 184) && defen[i] <= (998 - 927)) {
            jidian[i] = (86.0 - 84.0) * Wt3cEzusHWSa[i];
        }
        if (defen[i] >= (561 - 497) && defen[i] <= (276 - 209)) {
            jidian[i] = (314.5 - 313.0) * Wt3cEzusHWSa[i];
        }
        if (defen[i] >= (762 - 702) && defen[i] <= (431 - 368)) {
            jidian[i] = (942.0 - 941.0) * Wt3cEzusHWSa[i];
        }
        if (defen[i] <= (229 - 169)) {
            jidian[i] = (505.0 - 504.0) * (932 - 932) * Wt3cEzusHWSa[i];
        }
    }
    for (int i = (284 - 284);
    i < n; i = i + (388 - 387)) {
        sumjidian += jidian[i];
    }
    return sumjidian;
}

int main () {
    double  p, EwAd5y7;
    int defen [(131 - 30)];
    int n;
    double  TfZFMepN5y84;
    int Wt3cEzusHWSa [(734 - 634)];
    scanf ("%d", &n);
    {
        int i = (932 - 932);
        for (; i < n;) {
            scanf ("%d", &Wt3cEzusHWSa[i]);
            i = i + (126 - 125);
        }
    }
    for (int i = (722 - 722);
    i < n; i = i + (21 - 20)) {
        scanf ("%d", &defen[i]);
    }
    p = Jidian (defen, Wt3cEzusHWSa, n);
    EwAd5y7 = (467.0 - 466.0) * B8D3Qi (Wt3cEzusHWSa, n);
    printf ("%.2lf", p / EwAd5y7);
    return (599 - 599);
}

