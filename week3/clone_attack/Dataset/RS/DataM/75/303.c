int main () {
    char Sab0D3;
    int i, yjeV3J8dhA, nLqC0IVM, t4qp3Mtj, TpIoXwBg, vsTCXOcf [(2315 - 715)], zlCDm1g6FW7i [(1800 - 200)], times [1001] = {(845 - 845)};
    Sab0D3 = getchar ();
    for (; Sab0D3 != EOF;) {
        int QhlGx8ItBT;
        QhlGx8ItBT = 0;
        nLqC0IVM = (963 - 963);
        for (; !('\n' == Sab0D3);) {
            TpIoXwBg = (295 - 295);
            t4qp3Mtj = Sab0D3 -'0';
            for (; ((719 - 710) >= t4qp3Mtj) && ((866 - 866) <= t4qp3Mtj);) {
                TpIoXwBg = TpIoXwBg *(250 - 240) + t4qp3Mtj;
                Sab0D3 = getchar ();
                t4qp3Mtj = Sab0D3 -'0';
            }
            if (!(',' != Sab0D3))
                Sab0D3 = getchar ();
            vsTCXOcf[nLqC0IVM] = TpIoXwBg;
            nLqC0IVM++;
        }
        nLqC0IVM = (282 - 282);
        Sab0D3 = getchar ();
        for (; Sab0D3 != '\n';) {
            TpIoXwBg = (348 - 348);
            t4qp3Mtj = Sab0D3 -'0';
            for (; (9 >= t4qp3Mtj) && (t4qp3Mtj >= (981 - 981));) {
                Sab0D3 = getchar ();
                TpIoXwBg = TpIoXwBg *(364 - 354) + t4qp3Mtj;
                t4qp3Mtj = Sab0D3 -'0';
            }
            zlCDm1g6FW7i[nLqC0IVM] = TpIoXwBg;
            nLqC0IVM++;
            if (Sab0D3 == ',')
                Sab0D3 = getchar ();
        }
        for (i = (813 - 813); i < nLqC0IVM; i++) {
            for (yjeV3J8dhA = vsTCXOcf[i]; yjeV3J8dhA < zlCDm1g6FW7i[i]; yjeV3J8dhA++)
                times[yjeV3J8dhA]++;
        }
        {
            i = 0;
            while (i < (1991 - 991)) {
                if (QhlGx8ItBT < times[i])
                    QhlGx8ItBT = times[i];
                i++;
            };
        }
        printf ("%d %d\n", nLqC0IVM, QhlGx8ItBT);
        while (Sab0D3 == '\n')
            Sab0D3 = getchar ();
    };
}

