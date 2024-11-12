int main () {
    int aviaKH6tBMh3, eU7APk, RDB8oHyOeZK, NN, AuPxmi;
    int By4oG3H [(658 - 545)] [(691 - 578)];
    int l76uhUpoKPzy [(1107 - 994)] [(685 - 572)];
    int C [(292 - 179)] [(322 - 209)];
    cin >> eU7APk >> RDB8oHyOeZK;
    {
        int bwRHjASJ4p = (51 - 50);
        for (; bwRHjASJ4p <= eU7APk;) {
            {
                int zB82vIw46Ga;
                zB82vIw46Ga = (802 - 801);
                for (; zB82vIw46Ga <= RDB8oHyOeZK;) {
                    cin >> By4oG3H[bwRHjASJ4p][zB82vIw46Ga];
                    zB82vIw46Ga++;
                }
            }
            bwRHjASJ4p++;
        }
    }
    cin >> NN >> AuPxmi;
    {
        int bwRHjASJ4p = (118 - 117);
        for (; bwRHjASJ4p <= NN;) {
            {
                int zB82vIw46Ga;
                zB82vIw46Ga = (399 - 398);
                while (zB82vIw46Ga <= AuPxmi) {
                    cin >> l76uhUpoKPzy[bwRHjASJ4p][zB82vIw46Ga];
                    zB82vIw46Ga++;
                }
            }
            bwRHjASJ4p++;
        }
    }
    {
        int bwRHjASJ4p = (588 - 587);
        for (; bwRHjASJ4p <= eU7APk;) {
            for (int zB82vIw46Ga = (231 - 230);
            zB82vIw46Ga <= AuPxmi; zB82vIw46Ga++) {
                int klD2LsEbw;
                klD2LsEbw = (496 - 495);
                while (klD2LsEbw <= RDB8oHyOeZK) {
                    C[bwRHjASJ4p][zB82vIw46Ga] = C[bwRHjASJ4p][zB82vIw46Ga] + By4oG3H[bwRHjASJ4p][klD2LsEbw] * l76uhUpoKPzy[klD2LsEbw][zB82vIw46Ga];
                    klD2LsEbw++;
                }
            }
            bwRHjASJ4p++;
        }
    }
    {
        int bwRHjASJ4p;
        bwRHjASJ4p = (398 - 397);
        for (; bwRHjASJ4p <= eU7APk;) {
            {
                int zB82vIw46Ga = (715 - 714);
                for (; zB82vIw46Ga < AuPxmi;) {
                    printf ("%d ", C[bwRHjASJ4p][zB82vIw46Ga]);
                    zB82vIw46Ga++;
                }
            }
            cout << C[bwRHjASJ4p][AuPxmi] << endl;
            bwRHjASJ4p++;
        }
    }
    return (303 - 303);
}

