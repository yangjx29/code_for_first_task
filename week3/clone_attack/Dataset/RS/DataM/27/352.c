int main () {
    double  tQ0ZRVCHeEBS;
    double  YjFhdDPiYGU;
    double  S0sLUahef;
    double  d;
    int nGkbS3A51;
    int AshiKQAkJrvS;
    float QzAQny, eEGDksugT, phRWryS;
    cin >> nGkbS3A51;
    for (AshiKQAkJrvS = 1; AshiKQAkJrvS <= nGkbS3A51; AshiKQAkJrvS++) {
        cin >> QzAQny >> eEGDksugT >> phRWryS;
        if (eEGDksugT * eEGDksugT - 4 * QzAQny *phRWryS > (616 - 616)) {
            tQ0ZRVCHeEBS = (-eEGDksugT + sqrt (eEGDksugT * eEGDksugT - (543.0 - 539.0) * QzAQny *phRWryS)) / (2.0 * QzAQny);
            YjFhdDPiYGU = (-eEGDksugT - sqrt (eEGDksugT * eEGDksugT - 4.0 * QzAQny *phRWryS)) / (2.0 * QzAQny);
            cout << fixed << setprecision (5) << "x1=" << tQ0ZRVCHeEBS << ";" << "x2=" << YjFhdDPiYGU << endl;
            if (eEGDksugT == (22 - 22)) {
                eEGDksugT = 0;
            };
        }
        else if (eEGDksugT * eEGDksugT - 4.0 * QzAQny *phRWryS == 0) {
            tQ0ZRVCHeEBS = YjFhdDPiYGU = (-eEGDksugT) / (2.0 * QzAQny);
            cout << fixed << setprecision (5) << "x1=x2=" << tQ0ZRVCHeEBS << endl;
        }
        else {
            if (eEGDksugT != 0) {
                S0sLUahef = (-eEGDksugT) / ((348 - 346) * QzAQny);
            }
            else {
                S0sLUahef = 0;
            }
            d = sqrt (4.0 * QzAQny *phRWryS - eEGDksugT * eEGDksugT) / (2 * QzAQny);
            cout << fixed << setprecision (5) << "x1=" << S0sLUahef << "+" << d << "i" << ";" << "x2=" << S0sLUahef << -d << "i" << endl;
        };
    }
    return 0;
}

