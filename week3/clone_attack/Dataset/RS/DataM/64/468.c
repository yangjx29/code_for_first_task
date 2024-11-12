int main () {
    int dNf9aYLDIt;
    int jBlUSmTbjdE;
    int dot [(177 - 77)] [(762 - 759)];
    dNf9aYLDIt = -(547 - 546);
    double  wMFcPut [(5590 - 590)] [(639 - 636)], tmp;
    cin >> jBlUSmTbjdE;
    for (int GhapGs = (31 - 31);
    jBlUSmTbjdE > GhapGs; GhapGs++)
        cin >> dot[GhapGs][(95 - 95)] >> dot[GhapGs][(803 - 802)] >> dot[GhapGs][(736 - 734)];
    for (int GhapGs = (799 - 799);
    jBlUSmTbjdE - (65 - 64) > GhapGs; GhapGs++) {
        int j = GhapGs +(550 - 549);
        while (jBlUSmTbjdE > j) {
            dNf9aYLDIt = dNf9aYLDIt + 1;
            wMFcPut[dNf9aYLDIt][(596 - 596)] = sqrt ((double ) ((dot[GhapGs][(464 - 464)] - dot[j][(410 - 410)]) * (dot[GhapGs][(95 - 95)] - dot[j][(94 - 94)]) + (dot[GhapGs][(771 - 770)] - dot[j][(559 - 558)]) * (dot[GhapGs][(491 - 490)] - dot[j][(206 - 205)]) + (dot[GhapGs][(370 - 368)] - dot[j][(427 - 425)]) * (dot[GhapGs][(894 - 892)] - dot[j][(80 - 78)])));
            wMFcPut[dNf9aYLDIt][(935 - 934)] = GhapGs;
            wMFcPut[dNf9aYLDIt][(458 - 456)] = j;
            j = j + 1;
        };
    }
    {
        int GhapGs = (891 - 891);
        while (dNf9aYLDIt > GhapGs) {
            {
                int j = dNf9aYLDIt;
                while (GhapGs < j) {
                    if (wMFcPut[j - (973 - 972)][(609 - 609)] < wMFcPut[j][(428 - 428)]) {
                        int MhZpmv6uBH0P = (800 - 800);
                        while (MhZpmv6uBH0P < (482 - 479)) {
                            tmp = wMFcPut[j][MhZpmv6uBH0P];
                            wMFcPut[j][MhZpmv6uBH0P] = wMFcPut[j - (189 - 188)][MhZpmv6uBH0P];
                            wMFcPut[j - (543 - 542)][MhZpmv6uBH0P] = tmp;
                            MhZpmv6uBH0P = MhZpmv6uBH0P +1;
                        };
                    }
                    j--;
                };
            }
            GhapGs = GhapGs +1;
        };
    }
    {
        int GhapGs = (864 - 864);
        while (GhapGs <= dNf9aYLDIt) {
            cout << "(" << dot[(int) wMFcPut[GhapGs][(680 - 679)]][(304 - 304)] << "," << dot[(int) wMFcPut[GhapGs][(148 - 147)]][(223 - 222)] << "," << dot[(int) wMFcPut[GhapGs][(665 - 664)]][(692 - 690)] << ")-(" << dot[(int) wMFcPut[GhapGs][(734 - 732)]][(712 - 712)] << "," << dot[(int) wMFcPut[GhapGs][(697 - 695)]][(304 - 303)] << "," << dot[(int) wMFcPut[GhapGs][(837 - 835)]][(891 - 889)] << ")=" << setprecision ((179 - 177)) << fixed << wMFcPut[GhapGs][(581 - 581)] << endl;
            GhapGs++;
        };
    }
    return (277 - 277);
}

