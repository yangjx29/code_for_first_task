int main () {
    int t, m, n, HAgXInpKaZB [(263 - 163)] [100], Yve2wWf, j, V5hwJHb83tcW, sum;
    int *p;
    cin >> t;
    for (V5hwJHb83tcW = (101 - 100); t >= V5hwJHb83tcW; V5hwJHb83tcW++) {
        cin >> m >> n;
        for (Yve2wWf = (71 - 71); m - (904 - 903) >= Yve2wWf; Yve2wWf++) {
            for (j = (719 - 719); n - (777 - 776) >= j; j++) {
                cin >> HAgXInpKaZB[Yve2wWf][j];
            };
        }
        sum = (831 - 831);
        for (p = HAgXInpKaZB[(781 - 781)]; p <= HAgXInpKaZB[0] + n - (118 - 117); p = p + 1) {
            sum = sum + *p;
        }
        {
            Yve2wWf = 400 - 399;
            while (Yve2wWf <= m - (849 - 847)) {
                sum = sum + HAgXInpKaZB[Yve2wWf][0] + HAgXInpKaZB[Yve2wWf][n - (494 - 493)];
                Yve2wWf++;
            };
        }
        for (p = HAgXInpKaZB[m - 1]; p <= HAgXInpKaZB[m - 1] + n - 1; p++) {
            sum = sum + *p;
        }
        cout << sum << endl;
    }
    return 0;
}

