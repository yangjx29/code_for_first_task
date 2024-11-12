int main () {
    int wfHecqu5J;
    int F7bWkxI;
    int QhDHwnbaS;
    int d6oJ0KF;
    double  OAJPtLhI;
    char BcEYHzq9 [(431 - 421)];
    int uxpF7dsg;
    int g0Fj8Og3u;
    double  UFItAnhfYOC [(186 - 141)];
    double  USLNaBU [45];
    cin >> d6oJ0KF;
    QhDHwnbaS = (301 - 301);
    uxpF7dsg = (283 - 283);
    {
        wfHecqu5J = 0;
        for (; wfHecqu5J < d6oJ0KF;) {
            cin >> BcEYHzq9 >> OAJPtLhI;
            wfHecqu5J = wfHecqu5J + (863 - 862);
            if (!('f' != BcEYHzq9[0])) {
                UFItAnhfYOC[uxpF7dsg] = OAJPtLhI;
                uxpF7dsg = uxpF7dsg + (199 - 198);
            }
            else {
                USLNaBU[QhDHwnbaS] = OAJPtLhI;
                QhDHwnbaS = QhDHwnbaS +(567 - 566);
            }
        }
    }
    {
        F7bWkxI = (328 - 327);
        for (; F7bWkxI < QhDHwnbaS;) {
            {
                g0Fj8Og3u = 0;
                for (; g0Fj8Og3u < QhDHwnbaS -(68 - 67);) {
                    if (USLNaBU[g0Fj8Og3u] > USLNaBU[g0Fj8Og3u + (841 - 840)]) {
                        OAJPtLhI = USLNaBU[g0Fj8Og3u + (954 - 953)];
                        USLNaBU[g0Fj8Og3u + (98 - 97)] = USLNaBU[g0Fj8Og3u];
                        USLNaBU[g0Fj8Og3u] = OAJPtLhI;
                    }
                    g0Fj8Og3u = g0Fj8Og3u + 1;
                }
            }
            F7bWkxI = F7bWkxI +1;
        }
    }
    {
        F7bWkxI = 1;
        for (; uxpF7dsg > F7bWkxI;) {
            F7bWkxI = F7bWkxI +1;
            {
                g0Fj8Og3u = 0;
                for (; g0Fj8Og3u < uxpF7dsg - 1;) {
                    if (UFItAnhfYOC[g0Fj8Og3u + 1] > UFItAnhfYOC[g0Fj8Og3u]) {
                        OAJPtLhI = UFItAnhfYOC[g0Fj8Og3u + 1];
                        UFItAnhfYOC[g0Fj8Og3u + 1] = UFItAnhfYOC[g0Fj8Og3u];
                        UFItAnhfYOC[g0Fj8Og3u] = OAJPtLhI;
                    }
                    g0Fj8Og3u = g0Fj8Og3u + 1;
                }
            }
        }
    }
    {
        F7bWkxI = 0;
        for (; F7bWkxI < QhDHwnbaS;) {
            cout << fixed << setprecision (2) << USLNaBU[F7bWkxI] << " ";
            F7bWkxI = F7bWkxI +1;
        }
    }
    {
        g0Fj8Og3u = 0;
        for (; g0Fj8Og3u < uxpF7dsg - 1;) {
            cout << fixed << setprecision (2) << UFItAnhfYOC[g0Fj8Og3u] << " ";
            g0Fj8Og3u = g0Fj8Og3u + 1;
        }
    }
    cout << fixed << setprecision (2) << UFItAnhfYOC[g0Fj8Og3u] << endl;
    return 0;
}

