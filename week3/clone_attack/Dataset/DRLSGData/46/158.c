int main () {
    int afRIiNL [(125 - 25)] [(1083 - 983)];
    int pqHPO1E2, JeVq5N;
    int p9UmM8A7E3Qa = 0;
    cin >> pqHPO1E2 >> JeVq5N;
    {
        int KzBF4reVj = (874 - 873);
        while (KzBF4reVj <= pqHPO1E2) {
            for (int lWeD4bL7UTC = (188 - 187);
            lWeD4bL7UTC <= JeVq5N; lWeD4bL7UTC = lWeD4bL7UTC + (698 - 697))
                cin >> afRIiNL[KzBF4reVj][lWeD4bL7UTC];
            KzBF4reVj = KzBF4reVj +1;
        }
    }
    for (int KzBF4reVj = (377 - 376);
    KzBF4reVj <= (pqHPO1E2 + 1) / 2; KzBF4reVj++)
        for (int lWeD4bL7UTC = KzBF4reVj;
        lWeD4bL7UTC <= JeVq5N +1 - KzBF4reVj; lWeD4bL7UTC++) {
            if (p9UmM8A7E3Qa == pqHPO1E2 * JeVq5N)
                break;
            p9UmM8A7E3Qa = p9UmM8A7E3Qa + 1;
            cout << afRIiNL[KzBF4reVj][lWeD4bL7UTC] << endl;
            if (lWeD4bL7UTC == JeVq5N +1 - KzBF4reVj) {
                int yHG6cgsflz = KzBF4reVj +1;
                while (yHG6cgsflz <= pqHPO1E2 + 1 - KzBF4reVj) {
                    if (p9UmM8A7E3Qa == pqHPO1E2 * JeVq5N)
                        break;
                    cout << afRIiNL[yHG6cgsflz][lWeD4bL7UTC] << endl;
                    p9UmM8A7E3Qa = p9UmM8A7E3Qa + 1;
                    if (yHG6cgsflz == pqHPO1E2 + 1 - KzBF4reVj) {
                        int mJB6rPtil = JeVq5N -KzBF4reVj;
                        while (mJB6rPtil >= KzBF4reVj) {
                            if (p9UmM8A7E3Qa == pqHPO1E2 * JeVq5N)
                                break;
                            p9UmM8A7E3Qa++;
                            cout << afRIiNL[yHG6cgsflz][mJB6rPtil] << endl;
                            if (mJB6rPtil == KzBF4reVj) {
                                int akr3zK = pqHPO1E2 - KzBF4reVj;
                                while (akr3zK >= 1 + KzBF4reVj) {
                                    if (p9UmM8A7E3Qa == pqHPO1E2 * JeVq5N)
                                        break;
                                    cout << afRIiNL[akr3zK][mJB6rPtil] << endl;
                                    p9UmM8A7E3Qa++;
                                    akr3zK = akr3zK - 1;
                                }
                            }
                            mJB6rPtil--;
                        }
                    }
                    yHG6cgsflz++;
                }
            }
        }
    return 0;
}

