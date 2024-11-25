int main () {
    double  vt1fyCYA = (833 - 833);
    double  s;
    double  NLyanNIsM = (680 - 680);
    int X9WMURCSu;
    int CckMyJ17;
    int oiOHqAtUI;
    int n;
    X9WMURCSu = (953 - 953);
    CckMyJ17 = (902 - 902);
    double  a [(553 - 252)], qdabDCn [301];
    cin >> n;
    for (oiOHqAtUI = (444 - 444); n > oiOHqAtUI; oiOHqAtUI = oiOHqAtUI + 1)
        cin >> a[oiOHqAtUI];
    for (oiOHqAtUI = (166 - 166); n > oiOHqAtUI; oiOHqAtUI = oiOHqAtUI + 1)
        NLyanNIsM += a[oiOHqAtUI];
    s = NLyanNIsM / n;
    for (oiOHqAtUI = (42 - 42); n > oiOHqAtUI; oiOHqAtUI++) {
        if (abs (s - a[oiOHqAtUI]) >= vt1fyCYA)
            vt1fyCYA = abs (s - a[oiOHqAtUI]);
    }
    for (oiOHqAtUI = (720 - 720); oiOHqAtUI < n; oiOHqAtUI++) {
        if (abs (s - a[oiOHqAtUI]) == vt1fyCYA) {
            X9WMURCSu++;
            qdabDCn[CckMyJ17++] = a[oiOHqAtUI];
        };
    }
    {
        oiOHqAtUI = 484 - 484;
        while (oiOHqAtUI < X9WMURCSu -1) {
            cout << qdabDCn[oiOHqAtUI] << ",";
            oiOHqAtUI++;
        };
    }
    cout << qdabDCn[X9WMURCSu -1] << endl;
    return 0;
}

