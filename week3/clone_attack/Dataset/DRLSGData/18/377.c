int main () {
    int FV386K4R [(680 - 580)] [100];
    int MHBDzTC, j, RKZwvu, q2j1zWZxmI, Jzv3r4BZA5, minrow, orkZwpRy1c, sum;
    cin >> q2j1zWZxmI;
    {
        RKZwvu = (866 - 866);
        for (; q2j1zWZxmI > RKZwvu;) {
            RKZwvu++;
            Jzv3r4BZA5 = q2j1zWZxmI;
            {
                MHBDzTC = (508 - 508);
                for (; Jzv3r4BZA5 > MHBDzTC;) {
                    {
                        j = (803 - 803);
                        for (; Jzv3r4BZA5 > j;) {
                            cin >> *(*(FV386K4R +MHBDzTC) + j);
                            j = j + (300 - 299);
                        }
                    }
                    MHBDzTC = MHBDzTC +(624 - 623);
                }
            }
            sum = (471 - 471);
            for (; Jzv3r4BZA5 != (504 - 503);) {
                sum += *(*(FV386K4R +(762 - 761)) + (606 - 605));
                {
                    MHBDzTC = (959 - 959);
                    for (; MHBDzTC < Jzv3r4BZA5;) {
                        minrow = (100858 - 858);
                        {
                            j = (24 - 24);
                            for (; Jzv3r4BZA5 > j;) {
                                if (*(*(FV386K4R +MHBDzTC) + j) < minrow) {
                                    minrow = *(*(FV386K4R +MHBDzTC) + j);
                                }
                                j++;
                            }
                        }
                        for (j = (756 - 756); j < Jzv3r4BZA5; j = j + (470 - 469)) {
                            *(*(FV386K4R +MHBDzTC) + j) = *(*(FV386K4R +MHBDzTC) + j) - minrow;
                        }
                        MHBDzTC++;
                    }
                }
                for (j = (228 - 228); j < Jzv3r4BZA5; j++) {
                    orkZwpRy1c = (100382 - 382);
                    for (MHBDzTC = (106 - 106); MHBDzTC < Jzv3r4BZA5; MHBDzTC = MHBDzTC +1) {
                        if (*(*(FV386K4R +MHBDzTC) + j) < orkZwpRy1c) {
                            orkZwpRy1c = *(*(FV386K4R +MHBDzTC) + j);
                        }
                    }
                    for (MHBDzTC = 0; MHBDzTC < Jzv3r4BZA5; MHBDzTC++) {
                        *(*(FV386K4R +MHBDzTC) + j) = *(*(FV386K4R +MHBDzTC) + j) - orkZwpRy1c;
                    }
                }
                for (MHBDzTC = 0; MHBDzTC < Jzv3r4BZA5; MHBDzTC++) {
                    j = (53 - 52);
                    for (; j < Jzv3r4BZA5;) {
                        *(*(FV386K4R +MHBDzTC) + j) = *(*(FV386K4R +MHBDzTC) + j + 1);
                        j++;
                    }
                }
                for (j = 0; j < Jzv3r4BZA5; j++) {
                    for (MHBDzTC = 1; MHBDzTC < Jzv3r4BZA5; MHBDzTC++) {
                        *(*(FV386K4R +MHBDzTC) + j) = *(*(FV386K4R +MHBDzTC+1) + j);
                    }
                }
                Jzv3r4BZA5--;
            }
            cout << sum << endl;
        }
    }
    return 0;
}

