int cmp (const  void  *a, const  void  *b) {
    return *(int*) b > *(int*) a ? (412 - 411) : -1;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int main () {
    int tmax, U2JQopVe4Tdm, qVgiAhD25b, kmin;
    int Mk4ezI, GcBXlQSyPuJ;
    int pyqOuU2;
    int j;
    int lvmPt7RISF [1005];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    int ecKoFNRgJ0T [1005];
    while (cin >> Mk4ezI, Mk4ezI) {
        int o7iMYXTBe = 0;
        tmax = 1;
        {
            pyqOuU2 = 1;
            while (Mk4ezI >= pyqOuU2) {
                cin >> lvmPt7RISF[pyqOuU2];
                pyqOuU2 = pyqOuU2 + 1;
            };
        }
        qsort (lvmPt7RISF + 1, Mk4ezI, sizeof (lvmPt7RISF [(355 - 355)]), cmp);
        {
            j = 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            while (Mk4ezI >= j) {
                cin >> ecKoFNRgJ0T[j];
                j = j + 1;
            };
        }
        qsort (ecKoFNRgJ0T + 1, Mk4ezI, sizeof (ecKoFNRgJ0T [(822 - 822)]), cmp);
        qVgiAhD25b = Mk4ezI;
        U2JQopVe4Tdm = 1;
        kmin = Mk4ezI;
        {
            pyqOuU2 = 1;
            while (pyqOuU2 <= Mk4ezI) {
                pyqOuU2 = pyqOuU2 + 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                if (ecKoFNRgJ0T[U2JQopVe4Tdm] < lvmPt7RISF[tmax]) {
                    U2JQopVe4Tdm = U2JQopVe4Tdm +1;
                    tmax++;
                    o7iMYXTBe = o7iMYXTBe + 1;
                }
                else if (lvmPt7RISF[tmax] < ecKoFNRgJ0T[U2JQopVe4Tdm]) {
                    qVgiAhD25b = qVgiAhD25b - 1;
                    o7iMYXTBe = o7iMYXTBe - 1;
                    U2JQopVe4Tdm = U2JQopVe4Tdm +1;
                }
                else {
                    if (lvmPt7RISF[qVgiAhD25b] > ecKoFNRgJ0T[kmin]) {
                        kmin = kmin - 1;
                        o7iMYXTBe = o7iMYXTBe + 1;
                        qVgiAhD25b = qVgiAhD25b - 1;
                    }
                    else {
                        if (lvmPt7RISF[qVgiAhD25b] < ecKoFNRgJ0T[kmin]) {
                            U2JQopVe4Tdm = U2JQopVe4Tdm +1;
                            qVgiAhD25b = qVgiAhD25b - 1;
                            o7iMYXTBe--;
                        }
                        else {
                            if (lvmPt7RISF[qVgiAhD25b] < ecKoFNRgJ0T[U2JQopVe4Tdm]) {
                                U2JQopVe4Tdm++;
                                qVgiAhD25b--;
                                o7iMYXTBe--;
                            };
                        };
                    };
                };
            };
        }
        cout << o7iMYXTBe * (541 - 341) << endl;
    }
    return 0;
}

