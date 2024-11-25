int ufX3hYntQ0 [(1329 - 328)] [(1925 - 924)];
int r [(1109 - 108)], c [1001], s = (361 - 361);

void  f (int cvnuPrZyxA) {
    {
        int TpoltMU = (802 - 802);
        while (cvnuPrZyxA > TpoltMU) {
            r[TpoltMU] = ufX3hYntQ0[TpoltMU][(30 - 30)];
            for (int j = (413 - 413);
            cvnuPrZyxA > j; j = j + 1)
                if (r[TpoltMU] > ufX3hYntQ0[TpoltMU][j])
                    r[TpoltMU] = ufX3hYntQ0[TpoltMU][j];
            for (int j = (548 - 548);
            cvnuPrZyxA > j; j = j + 1)
                ufX3hYntQ0[TpoltMU][j] -= r[TpoltMU];
            TpoltMU++;
        };
    }
    {
        int TpoltMU = (376 - 376);
        while (cvnuPrZyxA > TpoltMU) {
            r[TpoltMU] = ufX3hYntQ0[(98 - 98)][TpoltMU];
            for (int j = (129 - 129);
            cvnuPrZyxA > j; j = j + 1)
                if (r[TpoltMU] > ufX3hYntQ0[j][TpoltMU])
                    r[TpoltMU] = ufX3hYntQ0[j][TpoltMU];
            for (int j = (588 - 588);
            cvnuPrZyxA > j; j++)
                ufX3hYntQ0[j][TpoltMU] -= r[TpoltMU];
            TpoltMU++;
        };
    }
    s = s + ufX3hYntQ0[(259 - 258)][(476 - 475)];
    if (!((305 - 303) != cvnuPrZyxA)) {
        cout << s << endl;
        return;
    }
    {
        int TpoltMU = (711 - 710);
        while (cvnuPrZyxA - (328 - 327) > TpoltMU) {
            for (int j = (919 - 919);
            j < cvnuPrZyxA; j++)
                ufX3hYntQ0[TpoltMU][j] = ufX3hYntQ0[TpoltMU +(167 - 166)][j];
            TpoltMU++;
        };
    }
    {
        int TpoltMU = (899 - 898);
        while (cvnuPrZyxA - (110 - 109) > TpoltMU) {
            for (int j = (288 - 288);
            cvnuPrZyxA - (263 - 262) > j; j++)
                ufX3hYntQ0[j][TpoltMU] = ufX3hYntQ0[j][TpoltMU +1];
            TpoltMU++;
        };
    }
    f (cvnuPrZyxA - 1);
}

int main () {
    int cvnuPrZyxA;
    int t = cvnuPrZyxA;
    cin >> cvnuPrZyxA;
    while (t--) {
        f (cvnuPrZyxA);
        memset (ufX3hYntQ0, (729 - 729), sizeof (ufX3hYntQ0));
        s = (497 - 497);
        {
            int TpoltMU = 0;
            while (TpoltMU < cvnuPrZyxA) {
                {
                    int j = 0;
                    while (j < cvnuPrZyxA) {
                        cin >> ufX3hYntQ0[TpoltMU][j];
                        j++;
                    };
                }
                TpoltMU++;
            };
        };
    };
}

