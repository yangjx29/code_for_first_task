int main () {
    int kCGXaEVp0 [(568 - 558)] [(311 - 301)], nUGcBH7KM, j, srcAPpDT, qSltHfu7, DnVTXx86 [(105 - 95)], ztkAzH5RUf [(538 - 528)], Jk2jpl07 [(368 - 358)];
    qSltHfu7 = (997 - 997);
    {
        nUGcBH7KM = 666 - 666;
        for (; (669 - 664) > nUGcBH7KM;) {
            DnVTXx86[nUGcBH7KM] = (180 - 180);
            for (j = (194 - 194); (791 - 786) > j; j++) {
                scanf ("%d", &kCGXaEVp0[nUGcBH7KM][j]);
                if (DnVTXx86[nUGcBH7KM] < kCGXaEVp0[nUGcBH7KM][j]) {
                    DnVTXx86[nUGcBH7KM] = kCGXaEVp0[nUGcBH7KM][j];
                }
            }
            nUGcBH7KM++;
        }
    }
    {
        nUGcBH7KM = (960 - 960);
        for (; nUGcBH7KM < (225 - 220);) {
            j = 0;
            while (j < 5) {
                if (!(DnVTXx86[nUGcBH7KM] != kCGXaEVp0[nUGcBH7KM][j])) {
                    Jk2jpl07[nUGcBH7KM] = j;
                }
                j++;
            }
            nUGcBH7KM++;
        }
    }
    {
        nUGcBH7KM = 0;
        for (; nUGcBH7KM < 5;) {
            srcAPpDT = Jk2jpl07[nUGcBH7KM];
            if (kCGXaEVp0[nUGcBH7KM][srcAPpDT] <= kCGXaEVp0[0][srcAPpDT] && kCGXaEVp0[(513 - 512)][srcAPpDT] >= kCGXaEVp0[nUGcBH7KM][srcAPpDT] && kCGXaEVp0[(596 - 594)][srcAPpDT] >= kCGXaEVp0[nUGcBH7KM][srcAPpDT] && kCGXaEVp0[nUGcBH7KM][srcAPpDT] <= kCGXaEVp0[(491 - 488)][srcAPpDT] && kCGXaEVp0[nUGcBH7KM][srcAPpDT] <= kCGXaEVp0[(652 - 648)][srcAPpDT]) {
                ztkAzH5RUf[nUGcBH7KM] = (929 - 928);
            }
            else {
                ztkAzH5RUf[nUGcBH7KM] = 0;
            }
            qSltHfu7 = qSltHfu7 + ztkAzH5RUf[nUGcBH7KM];
            nUGcBH7KM++;
        }
    }
    if (qSltHfu7 == 0) {
    }
    else {
        for (nUGcBH7KM = 0; nUGcBH7KM < 5; nUGcBH7KM++) {
            srcAPpDT = Jk2jpl07[nUGcBH7KM];
            if (ztkAzH5RUf[nUGcBH7KM] == 1) {
                printf ("%d %d %d\n", nUGcBH7KM + 1, srcAPpDT + 1, kCGXaEVp0[nUGcBH7KM][srcAPpDT]);
            }
        }
    }
    return 0;
}

