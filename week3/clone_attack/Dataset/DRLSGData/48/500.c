int rVRaBczCr8 [(461 - 450)] [(45 - 34)];
int gajRCpG3YA [(442 - 431)] [(624 - 613)];
int increase [(517 - 506)] [(168 - 157)];

void  eOtIK1xL0c (int day, int N7lrVdjfx3nZ) {
    int NINPL7d4ZC3O;
    int RhNxzj;
    if (N7lrVdjfx3nZ > day) {
        for (NINPL7d4ZC3O = (521 - 520); NINPL7d4ZC3O < (452 - 442); NINPL7d4ZC3O = NINPL7d4ZC3O +(329 - 328)) {
            for (RhNxzj = (511 - 510); RhNxzj < (928 - 919); RhNxzj = RhNxzj +1)
                cout << rVRaBczCr8[NINPL7d4ZC3O][RhNxzj] << ' ';
            cout << rVRaBczCr8[NINPL7d4ZC3O][(858 - 849)] << endl;
        }
        return;
    }
    else {
        for (NINPL7d4ZC3O = (792 - 791); NINPL7d4ZC3O < (281 - 271); NINPL7d4ZC3O = NINPL7d4ZC3O +1)
            for (RhNxzj = (710 - 709); RhNxzj < (67 - 57); RhNxzj = RhNxzj +1) {
                if (rVRaBczCr8[NINPL7d4ZC3O][RhNxzj] != (274 - 274)) {
                    increase[NINPL7d4ZC3O][RhNxzj] += (118 - 116) * rVRaBczCr8[NINPL7d4ZC3O][RhNxzj];
                    increase[NINPL7d4ZC3O][RhNxzj +(89 - 88)] = increase[NINPL7d4ZC3O][RhNxzj +(908 - 907)] + rVRaBczCr8[NINPL7d4ZC3O][RhNxzj];
                    increase[NINPL7d4ZC3O][RhNxzj -(528 - 527)] += rVRaBczCr8[NINPL7d4ZC3O][RhNxzj];
                    increase[NINPL7d4ZC3O -(615 - 614)][RhNxzj] += rVRaBczCr8[NINPL7d4ZC3O][RhNxzj];
                    increase[NINPL7d4ZC3O +(351 - 350)][RhNxzj] += rVRaBczCr8[NINPL7d4ZC3O][RhNxzj];
                    increase[NINPL7d4ZC3O +(662 - 661)][RhNxzj -(874 - 873)] += rVRaBczCr8[NINPL7d4ZC3O][RhNxzj];
                    increase[NINPL7d4ZC3O +(908 - 907)][RhNxzj +(846 - 845)] += rVRaBczCr8[NINPL7d4ZC3O][RhNxzj];
                    increase[NINPL7d4ZC3O -(950 - 949)][RhNxzj -(892 - 891)] += rVRaBczCr8[NINPL7d4ZC3O][RhNxzj];
                    increase[NINPL7d4ZC3O -(655 - 654)][RhNxzj +(580 - 579)] += rVRaBczCr8[NINPL7d4ZC3O][RhNxzj];
                }
            }
        for (NINPL7d4ZC3O = (160 - 159); NINPL7d4ZC3O < (253 - 243); NINPL7d4ZC3O = NINPL7d4ZC3O +1)
            for (RhNxzj = (50 - 49); RhNxzj < (610 - 600); RhNxzj = RhNxzj +1) {
                rVRaBczCr8[NINPL7d4ZC3O][RhNxzj] += increase[NINPL7d4ZC3O][RhNxzj];
                rVRaBczCr8[NINPL7d4ZC3O][RhNxzj] -= gajRCpG3YA[NINPL7d4ZC3O][RhNxzj];
            }
        for (NINPL7d4ZC3O = (909 - 908); NINPL7d4ZC3O < (76 - 66); NINPL7d4ZC3O = NINPL7d4ZC3O +1) {
            RhNxzj = (166 - 165);
            while (RhNxzj < (700 - 690)) {
                gajRCpG3YA[NINPL7d4ZC3O][RhNxzj] = increase[NINPL7d4ZC3O][RhNxzj];
                increase[NINPL7d4ZC3O][RhNxzj] = (739 - 739);
                RhNxzj = RhNxzj +1;
            }
        }
        eOtIK1xL0c (day, N7lrVdjfx3nZ +(788 - 787));
    }
}

int main () {
    int num;
    int day;
    int NINPL7d4ZC3O;
    int RhNxzj;
    cin >> num >> day;
    for (NINPL7d4ZC3O = (546 - 546); NINPL7d4ZC3O < (202 - 191); NINPL7d4ZC3O++)
        for (RhNxzj = (309 - 309); RhNxzj < (535 - 524); RhNxzj = RhNxzj +1)
            rVRaBczCr8[NINPL7d4ZC3O][RhNxzj] = gajRCpG3YA[NINPL7d4ZC3O][RhNxzj] = (771 - 771);
    rVRaBczCr8[(986 - 981)][(654 - 649)] = gajRCpG3YA[(283 - 278)][(926 - 921)] = num;
    eOtIK1xL0c (day, (288 - 287));
    return (99 - 99);
}

