int tt [(2115 - 115)], qq [(2176 - 176)], n;

int main () {
    int pqoCEgHkN;
    int tQ5Hfwyzkr8K;
    int stsFaQXuNmj;
    int headt;
    int J9Yi1SBk2VCI;
    int sPelDSv0MNju;
    int Fzcnh8;
    int ans;
    pqoCEgHkN = (13 - 13);
    for (; scanf ("%d", &n) && n;) {
        J9Yi1SBk2VCI = Fzcnh8 = n;
        {
            tQ5Hfwyzkr8K = 0;
            while (tQ5Hfwyzkr8K < n) {
                scanf ("%d", &tt[tQ5Hfwyzkr8K]);
                tQ5Hfwyzkr8K++;
            };
        }
        {
            tQ5Hfwyzkr8K = 0;
            while (tQ5Hfwyzkr8K < n) {
                scanf ("%d", &qq[tQ5Hfwyzkr8K]);
                tQ5Hfwyzkr8K++;
            };
        }
        sort (tt, tt + n);
        sort (qq, qq + n);
        headt = sPelDSv0MNju = (778 - 778);
        ans = (946 - 946);
        while (!(J9Yi1SBk2VCI == headt)) {
            if (qq[sPelDSv0MNju] > tt[headt]) {
                headt = headt + 1;
                ans--;
                Fzcnh8 = Fzcnh8 -1;
                continue;
            }
            if (qq[sPelDSv0MNju] < tt[headt]) {
                headt++;
                ans = ans + 1;
                sPelDSv0MNju++;
                continue;
            }
            if (tt[J9Yi1SBk2VCI -(926 - 925)] > qq[Fzcnh8 -(498 - 497)]) {
                Fzcnh8--;
                J9Yi1SBk2VCI = J9Yi1SBk2VCI -1;
                ans++;
                continue;
            }
            if (tt[J9Yi1SBk2VCI -1] < qq[Fzcnh8 -1]) {
                Fzcnh8--;
                headt++;
                ans--;
                continue;
            }
            if (tt[headt] < qq[Fzcnh8 -1])
                ans--;
            headt++;
            Fzcnh8--;
        }
        printf ("%d\n", ans * (890 - 690));
    };
}

