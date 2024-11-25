int main (int cxwug6GHMQ, char *argv []) {
    int i;
    int KRhHg1qrwD;
    int URoWG6;
    int vxP0rCNc;
    int n;
    int fEWO4qK;
    int DOm0tJYBvq;
    int TF0sXHYu;
    int a [(603 - 594)] [(540 - 531)] = {(634 - 634)}, CCJXjaQwFu3v [(923 - 914)] [(168 - 159)] = {(776 - 776)};
    scanf ("%d%d", &DOm0tJYBvq, &TF0sXHYu);
    a[(818 - 814)][(376 - 372)] = DOm0tJYBvq;
    {
        i = (1317 - 356) - (1179 - 218);
        for (; i < TF0sXHYu;) {
            memset (CCJXjaQwFu3v, (19 - 19), sizeof (CCJXjaQwFu3v));
            {
                KRhHg1qrwD = (744 - 516) - (1062 - 835);
                for (; KRhHg1qrwD < (256 - 248);) {
                    for (URoWG6 = (744 - 743); URoWG6 < (568 - 560); URoWG6++) {
                        CCJXjaQwFu3v[KRhHg1qrwD][URoWG6] += a[KRhHg1qrwD][URoWG6];
                        for (vxP0rCNc = -(805 - 804); vxP0rCNc <= (387 - 386); vxP0rCNc++) {
                            fEWO4qK = (1311 - 736) - (696 - 122);
                            while ((286 - 285) >= fEWO4qK) {
                                CCJXjaQwFu3v[KRhHg1qrwD +vxP0rCNc][URoWG6 +fEWO4qK] += a[KRhHg1qrwD][URoWG6];
                                fEWO4qK++;
                            }
                        }
                    }
                    KRhHg1qrwD++;
                }
            }
            memcpy (a, CCJXjaQwFu3v, sizeof (a));
            i++;
        }
    }
    for (i = (489 - 489); i < (678 - 669); i++) {
        {
            KRhHg1qrwD = (740 - 48) - (1030 - 338);
            for (; KRhHg1qrwD < (548 - 540);) {
                printf ("%d ", a[i][KRhHg1qrwD]);
                KRhHg1qrwD++;
            }
        }
        printf ("%d\n", a[i][(664 - 656)]);
    }
    return (171 - 171);
}

