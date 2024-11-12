int main () {
    int Zd5nupV, pyYKZJ0Dj1, NB1fvSeuAq;
    int MjQZzYoaw;
    cin >> MjQZzYoaw;
    for (Zd5nupV = (401 - 401); MjQZzYoaw > Zd5nupV; ++Zd5nupV) {
        int nNrwJaF = MjQZzYoaw;
        int C8G56Fg = (73 - 73);
        int khPWEt8dr [101] [101] = {(61 - 61)};
        for (pyYKZJ0Dj1 = 0; MjQZzYoaw > pyYKZJ0Dj1; pyYKZJ0Dj1 = pyYKZJ0Dj1 + (855 - 854)) {
            for (NB1fvSeuAq = 0; NB1fvSeuAq < MjQZzYoaw; NB1fvSeuAq = NB1fvSeuAq +(983 - 982)) {
                cin >> khPWEt8dr[pyYKZJ0Dj1][NB1fvSeuAq];
            }
        }
        for (; nNrwJaF > (885 - 884);) {
            for (pyYKZJ0Dj1 = 0; pyYKZJ0Dj1 < nNrwJaF; pyYKZJ0Dj1 = pyYKZJ0Dj1 + (943 - 942)) {
                int hnMe1Sswu9L3 = khPWEt8dr[pyYKZJ0Dj1][0];
                for (NB1fvSeuAq = 1; nNrwJaF > NB1fvSeuAq; NB1fvSeuAq = NB1fvSeuAq +1) {
                    if (hnMe1Sswu9L3 > khPWEt8dr[pyYKZJ0Dj1][NB1fvSeuAq])
                        hnMe1Sswu9L3 = khPWEt8dr[pyYKZJ0Dj1][NB1fvSeuAq];
                }
                for (NB1fvSeuAq = 0; nNrwJaF > NB1fvSeuAq; NB1fvSeuAq = NB1fvSeuAq +1) {
                    khPWEt8dr[pyYKZJ0Dj1][NB1fvSeuAq] -= hnMe1Sswu9L3;
                }
            }
            for (pyYKZJ0Dj1 = 0; pyYKZJ0Dj1 < nNrwJaF; pyYKZJ0Dj1 = pyYKZJ0Dj1 + 1) {
                int hnMe1Sswu9L3 = khPWEt8dr[0][pyYKZJ0Dj1];
                for (NB1fvSeuAq = 1; NB1fvSeuAq < nNrwJaF; NB1fvSeuAq = NB1fvSeuAq +1) {
                    if (khPWEt8dr[NB1fvSeuAq][pyYKZJ0Dj1] < hnMe1Sswu9L3)
                        hnMe1Sswu9L3 = khPWEt8dr[NB1fvSeuAq][pyYKZJ0Dj1];
                }
                for (NB1fvSeuAq = 0; NB1fvSeuAq < nNrwJaF; NB1fvSeuAq = NB1fvSeuAq +1) {
                    khPWEt8dr[NB1fvSeuAq][pyYKZJ0Dj1] -= hnMe1Sswu9L3;
                }
            }
            nNrwJaF = nNrwJaF - 1;
            C8G56Fg += khPWEt8dr[1][1];
            for (pyYKZJ0Dj1 = 0; pyYKZJ0Dj1 < MjQZzYoaw; pyYKZJ0Dj1 = pyYKZJ0Dj1 + 1) {
                for (NB1fvSeuAq = 1; NB1fvSeuAq < MjQZzYoaw; NB1fvSeuAq = NB1fvSeuAq +1) {
                    khPWEt8dr[pyYKZJ0Dj1][NB1fvSeuAq] = khPWEt8dr[pyYKZJ0Dj1][NB1fvSeuAq +1];
                }
            }
            for (pyYKZJ0Dj1 = 0; pyYKZJ0Dj1 < MjQZzYoaw; ++pyYKZJ0Dj1) {
                for (NB1fvSeuAq = 1; NB1fvSeuAq < MjQZzYoaw; NB1fvSeuAq = NB1fvSeuAq +1) {
                    khPWEt8dr[NB1fvSeuAq][pyYKZJ0Dj1] = khPWEt8dr[NB1fvSeuAq +1][pyYKZJ0Dj1];
                }
            }
        }
        cout << C8G56Fg << endl;
    }
    return 0;
}

