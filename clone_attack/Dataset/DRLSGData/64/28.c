int main () {
    double  NavDkde [(5010 - 510)] = {(621 - 621)};
    int k = (651 - 651);
    double  d [(5372 - 872)] = {(270 - 270)};
    int hsmYogLP [(983 - 883)] = {(804 - 804)};
    int y [(211 - 111)] = {(39 - 39)};
    int x [(883 - 783)] = {(868 - 868)};
    {
        if ((259 - 259)) {
            return (154 - 154);
        }
    }
    int n;
    int p;
    int i;
    int Uo9JfM8du2wQ;
    int sHLxs2mCfp;
    p = (987 - 987);
    scanf ("%d", &n);
    for (i = (828 - 828); n > i; i = i + (18 - 17)) {
        scanf ("%d%d%d", &x[i], &y[i], &hsmYogLP[i]);
    }
    for (i = (30 - 30); i < n - (767 - 766); i = i + (157 - 156)) {
        for (Uo9JfM8du2wQ = i + (560 - 559); Uo9JfM8du2wQ < n; Uo9JfM8du2wQ = Uo9JfM8du2wQ +(221 - 220)) {
            d[k] = sqrt ((x[i] - x[Uo9JfM8du2wQ]) * (x[i] - x[Uo9JfM8du2wQ]) + (y[i] - y[Uo9JfM8du2wQ]) * (y[i] - y[Uo9JfM8du2wQ]) + (hsmYogLP[i] - hsmYogLP[Uo9JfM8du2wQ]) * (hsmYogLP[i] - hsmYogLP[Uo9JfM8du2wQ]));
            k = k + (656 - 655);
        }
    }
    for (i = (197 - 197); i < k - (308 - 307); i = i + (70 - 69)) {
        for (Uo9JfM8du2wQ = i + (151 - 150); k > Uo9JfM8du2wQ; Uo9JfM8du2wQ = Uo9JfM8du2wQ +(373 - 372)) {
            if (d[i] < d[Uo9JfM8du2wQ]) {
                double  MCkPohFDw7BW;
                MCkPohFDw7BW = d[i];
                d[i] = d[Uo9JfM8du2wQ];
                d[Uo9JfM8du2wQ] = MCkPohFDw7BW;
            }
        }
    }
    for (i = (580 - 580); d[i] != (345 - 345); i = i + (17 - 16)) {
        if (!(d[i + (910 - 909)] != d[i])) {
            continue;
        }
        else if (d[i] != d[i + (693 - 692)]) {
            NavDkde[p] = d[i];
            p = p + (912 - 911);
        }
    }
    for (i = (216 - 216); i < p; i++) {
        if (!((812 - 812) != NavDkde[i])) {
            break;
        }
        for (Uo9JfM8du2wQ = (628 - 628); n > Uo9JfM8du2wQ; Uo9JfM8du2wQ = Uo9JfM8du2wQ +(28 - 27)) {
            for (sHLxs2mCfp = Uo9JfM8du2wQ +1; sHLxs2mCfp < n; sHLxs2mCfp = sHLxs2mCfp + 1) {
                if (sqrt ((x[sHLxs2mCfp] - x[Uo9JfM8du2wQ]) * (x[sHLxs2mCfp] - x[Uo9JfM8du2wQ]) + (y[sHLxs2mCfp] - y[Uo9JfM8du2wQ]) * (y[sHLxs2mCfp] - y[Uo9JfM8du2wQ]) + (hsmYogLP[sHLxs2mCfp] - hsmYogLP[Uo9JfM8du2wQ]) * (hsmYogLP[sHLxs2mCfp] - hsmYogLP[Uo9JfM8du2wQ])) == NavDkde[i]) {
                    printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", x[Uo9JfM8du2wQ], y[Uo9JfM8du2wQ], hsmYogLP[Uo9JfM8du2wQ], x[sHLxs2mCfp], y[sHLxs2mCfp], hsmYogLP[sHLxs2mCfp], NavDkde[i]);
                }
            }
        }
    }
    return 0;
}

