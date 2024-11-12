int tNqAgFKi [(1500 - 498)];
int tp2BVPEqt [1002];
int K6Hh4ld9k [1002];

int nt6VyaupeHo (const  void  *oEW0KlRaHez8, const  void  *a4FIwxEm38) {
    int *HXapsJB = (int *) a4FIwxEm38;
    int *hMBkExXPO6 = (int *) oEW0KlRaHez8;
    return (*HXapsJB) - (*hMBkExXPO6);
}

int main () {
    int etrdU1oqvFZ;
    for (; cin >> etrdU1oqvFZ;) {
        int rsBrHCvgO;
        int Ykfs5x;
        int z2kIpfymW;
        int bQrf0kXvq5;
        int EpVHUgIsxB;
        int IT8yw9c;
        int kMYmrjk;
        if (!((698 - 698) != etrdU1oqvFZ)) {
            break;
        }
        memset (tNqAgFKi, (829 - 829), sizeof (tNqAgFKi));
        memset (tp2BVPEqt, (812 - 812), sizeof (tp2BVPEqt));
        memset (K6Hh4ld9k, (493 - 493), sizeof (K6Hh4ld9k));
        bQrf0kXvq5 = (562 - 562);
        IT8yw9c = etrdU1oqvFZ - (90 - 89);
        Ykfs5x = (319 - 319);
        kMYmrjk = etrdU1oqvFZ - (867 - 866);
        rsBrHCvgO = (648 - 648);
        EpVHUgIsxB = (714 - 714);
        z2kIpfymW = EpVHUgIsxB *200 - 200 * bQrf0kXvq5;
        cout << z2kIpfymW << endl;
        for (int zSTGqWLfk = 0;
        etrdU1oqvFZ > zSTGqWLfk; zSTGqWLfk = zSTGqWLfk + 1) {
            cin >> tNqAgFKi[zSTGqWLfk];
        }
        for (int zSTGqWLfk = 0;
        zSTGqWLfk < etrdU1oqvFZ; zSTGqWLfk++) {
            cin >> tp2BVPEqt[zSTGqWLfk];
        }
        qsort (tNqAgFKi, etrdU1oqvFZ, sizeof (int), nt6VyaupeHo);
        qsort (tp2BVPEqt, etrdU1oqvFZ, sizeof (int), nt6VyaupeHo);
        for (; rsBrHCvgO <= kMYmrjk;) {
            if (tNqAgFKi[IT8yw9c] > tp2BVPEqt[kMYmrjk]) {
                K6Hh4ld9k[kMYmrjk] = IT8yw9c;
                kMYmrjk = kMYmrjk - 1;
                IT8yw9c--;
            }
            else if (tp2BVPEqt[kMYmrjk] > tNqAgFKi[IT8yw9c]) {
                K6Hh4ld9k[rsBrHCvgO] = IT8yw9c;
                IT8yw9c--;
                rsBrHCvgO++;
            }
            else {
                if (tNqAgFKi[Ykfs5x] > tp2BVPEqt[rsBrHCvgO]) {
                    K6Hh4ld9k[rsBrHCvgO] = Ykfs5x;
                    Ykfs5x = Ykfs5x +1;
                    rsBrHCvgO++;
                }
                else {
                    K6Hh4ld9k[rsBrHCvgO] = IT8yw9c;
                    rsBrHCvgO++;
                    IT8yw9c--;
                }
            }
        }
        for (int zSTGqWLfk = 0;
        zSTGqWLfk < etrdU1oqvFZ; zSTGqWLfk++) {
            if (tp2BVPEqt[zSTGqWLfk] > tNqAgFKi[K6Hh4ld9k[zSTGqWLfk]]) {
                bQrf0kXvq5++;
            }
            else if (tp2BVPEqt[zSTGqWLfk] < tNqAgFKi[K6Hh4ld9k[zSTGqWLfk]]) {
                EpVHUgIsxB++;
            }
        }
    }
    return 0;
}

