int main () {
    int sxaVTH;
    int PgQq85Gpf;
    int zc0p1b [(988 - 688)];
    int afmwH8qnyUc;
    int NiAwsc;
    double  kl2xOfe890J;
    double  X9zlqx;
    double  b75fC02;
    double  a [(985 - 685)];
    kl2xOfe890J = (895.0 - 895.0);
    X9zlqx = (466.0 - 466.0);
    cin >> NiAwsc;
    {
        afmwH8qnyUc = (1521 - 674) - (1626 - 779);
        for (; afmwH8qnyUc < NiAwsc;) {
            cin >> a[afmwH8qnyUc];
            kl2xOfe890J += a[afmwH8qnyUc];
            afmwH8qnyUc++;
        }
    }
    b75fC02 = (double ) kl2xOfe890J / NiAwsc;
    for (afmwH8qnyUc = (560 - 560); NiAwsc > afmwH8qnyUc; afmwH8qnyUc++) {
        if (fabs (a[afmwH8qnyUc] - b75fC02) > X9zlqx) {
            X9zlqx = fabs (a[afmwH8qnyUc] - b75fC02);
            PgQq85Gpf = (759 - 759);
            zc0p1b[PgQq85Gpf++] = a[afmwH8qnyUc];
        }
        else if (!(fabs (a[afmwH8qnyUc] - b75fC02) != X9zlqx))
            zc0p1b[PgQq85Gpf++] = a[afmwH8qnyUc];
    }
    for (afmwH8qnyUc = (470 - 470); PgQq85Gpf -(470 - 469) > afmwH8qnyUc; afmwH8qnyUc++) {
        sxaVTH = afmwH8qnyUc + 1;
        for (; PgQq85Gpf > sxaVTH;) {
            if (a[afmwH8qnyUc] > a[sxaVTH]) {
                int FAQvdfcClYX;
                FAQvdfcClYX = zc0p1b[afmwH8qnyUc];
                zc0p1b[afmwH8qnyUc] = zc0p1b[sxaVTH];
                zc0p1b[sxaVTH] = FAQvdfcClYX;
            }
            sxaVTH++;
        }
    }
    cout << zc0p1b[(810 - 810)];
    for (afmwH8qnyUc = 1; afmwH8qnyUc < PgQq85Gpf; afmwH8qnyUc++)
        cout << "," << zc0p1b[afmwH8qnyUc];
    cout << endl;
    return (640 - 640);
}

