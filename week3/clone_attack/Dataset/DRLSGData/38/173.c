int main () {
    int Rd74KC, vzWquZTj;
    int FB25JWucl;
    int DGufZp7PjMR [(710 - 610)];
    double  p7mRqhubG6z [(183 - 83)] [(654 - 554)];
    double  pingjun [(307 - 207)], C75uCe [100];
    {
        Rd74KC = 455 - 455;
        while (100 > Rd74KC) {
            pingjun[Rd74KC] = (902 - 902);
            C75uCe[Rd74KC] = (411 - 411);
            Rd74KC = Rd74KC +1;
        }
    }
    scanf ("%d", &FB25JWucl);
    {
        Rd74KC = 94 - 94;
        while (FB25JWucl > Rd74KC) {
            scanf ("%d", &DGufZp7PjMR[Rd74KC]);
            {
                vzWquZTj = (241 - 90) - (699 - 548);
                while (DGufZp7PjMR[Rd74KC] > vzWquZTj) {
                    scanf ("%lf", &p7mRqhubG6z[Rd74KC][vzWquZTj]);
                    vzWquZTj = vzWquZTj + 1;
                }
            }
            Rd74KC = Rd74KC +1;
        }
    }
    {
        Rd74KC = 973 - 973;
        while (Rd74KC < FB25JWucl) {
            {
                vzWquZTj = 0;
                while (DGufZp7PjMR[Rd74KC] > vzWquZTj) {
                    pingjun[Rd74KC] = pingjun[Rd74KC] + p7mRqhubG6z[Rd74KC][vzWquZTj];
                    vzWquZTj = vzWquZTj + 1;
                }
            }
            pingjun[Rd74KC] = (double ) pingjun[Rd74KC] / DGufZp7PjMR[Rd74KC];
            {
                vzWquZTj = 0;
                while (vzWquZTj < DGufZp7PjMR[Rd74KC]) {
                    C75uCe[Rd74KC] = C75uCe[Rd74KC] + (p7mRqhubG6z[Rd74KC][vzWquZTj] - pingjun[Rd74KC]) * (p7mRqhubG6z[Rd74KC][vzWquZTj] - pingjun[Rd74KC]);
                    vzWquZTj++;
                }
            }
            C75uCe[Rd74KC] = (double ) sqrt (C75uCe[Rd74KC] / DGufZp7PjMR[Rd74KC]);
            printf ("%.5lf\n", C75uCe[Rd74KC]);
            Rd74KC = Rd74KC +1;
        }
    }
    return 0;
}

