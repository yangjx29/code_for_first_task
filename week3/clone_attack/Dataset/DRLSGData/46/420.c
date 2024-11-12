int o2LtNsGgU [100] [100];

int main () {
    int C973hIoW0;
    int iQpbSonT75;
    int Ear8xcDd;
    int Sc6xT4Ndbfv5;
    int bEvmSXO;
    int ocmeupX4V1a;
    int qUQg2JSNRj;
    C973hIoW0 = 0;
    cin >> iQpbSonT75 >> Ear8xcDd;
    {
        Sc6xT4Ndbfv5 = (780 - 779);
        while (Sc6xT4Ndbfv5 <= iQpbSonT75) {
            {
                bEvmSXO = (447 - 446);
                while (bEvmSXO <= Ear8xcDd) {
                    cin >> o2LtNsGgU[Sc6xT4Ndbfv5][bEvmSXO];
                    bEvmSXO++;
                }
            }
            Sc6xT4Ndbfv5++;
        }
    }
    qUQg2JSNRj = iQpbSonT75 * Ear8xcDd;
    {
        ocmeupX4V1a = (478 - 477);
        Sc6xT4Ndbfv5 = 1;
        bEvmSXO = 1;
        for (; qUQg2JSNRj >= ocmeupX4V1a;) {
            C973hIoW0++;
            cout << o2LtNsGgU[Sc6xT4Ndbfv5][bEvmSXO] << endl;
            if (Ear8xcDd > C973hIoW0)
                bEvmSXO++;
            else if (!(Ear8xcDd != C973hIoW0) || Ear8xcDd +iQpbSonT75 - 1 > C973hIoW0)
                Sc6xT4Ndbfv5++;
            else if (!(Ear8xcDd +iQpbSonT75 - 1 != C973hIoW0) || C973hIoW0 < (301 - 299) * Ear8xcDd +iQpbSonT75 - (583 - 581))
                bEvmSXO--;
            else if (C973hIoW0 == (570 - 568) * Ear8xcDd +iQpbSonT75 - (938 - 936) || C973hIoW0 < (Ear8xcDd +iQpbSonT75) * 2 - 4)
                Sc6xT4Ndbfv5--;
            else {
                bEvmSXO++;
                iQpbSonT75 -= 2;
                Ear8xcDd -= 2;
                C973hIoW0 = 0;
            }
            ocmeupX4V1a++;
        }
    }
    return 0;
}

