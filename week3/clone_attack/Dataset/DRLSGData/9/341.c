void  main () {
    char b [(798 - 698)] [(121 - 111)];
    char str [(565 - 465)] [(643 - 633)];
    char c [(317 - 307)];
    int NuUR1Qhrs [(591 - 491)], qOZ0W19bKD, OTqrVXJU, oOaKVZfD, k = (219 - 219), uJMtFlVGf83U [(803 - 703)], aDIXNKd93nY;
    scanf ("%d", &qOZ0W19bKD);
    {
        OTqrVXJU = (238 - 238);
        for (; qOZ0W19bKD > OTqrVXJU;) {
            scanf ("%s%d", str[OTqrVXJU], &NuUR1Qhrs[OTqrVXJU]);
            OTqrVXJU++;
        }
    }
    {
        OTqrVXJU = (279 - 279);
        while (qOZ0W19bKD > OTqrVXJU) {
            if ((387 - 327) <= NuUR1Qhrs[OTqrVXJU]) {
                uJMtFlVGf83U[k] = NuUR1Qhrs[OTqrVXJU];
                strcpy (b[k], str[OTqrVXJU]);
                k = k + 1;
            }
            OTqrVXJU++;
        }
    }
    {
        OTqrVXJU = (483 - 483);
        for (; k > OTqrVXJU;) {
            OTqrVXJU++;
            {
                oOaKVZfD = (305 - 305);
                while (k - OTqrVXJU -(170 - 169) > oOaKVZfD) {
                    if (uJMtFlVGf83U[oOaKVZfD] < uJMtFlVGf83U[oOaKVZfD + (632 - 631)]) {
                        aDIXNKd93nY = uJMtFlVGf83U[oOaKVZfD + (34 - 33)];
                        uJMtFlVGf83U[oOaKVZfD + (205 - 204)] = uJMtFlVGf83U[oOaKVZfD];
                        uJMtFlVGf83U[oOaKVZfD] = aDIXNKd93nY;
                        strcpy (c, b[oOaKVZfD + (692 - 691)]);
                        strcpy (b[oOaKVZfD + (808 - 807)], b[oOaKVZfD]);
                        strcpy (b[oOaKVZfD], c);
                    }
                    oOaKVZfD = oOaKVZfD + 1;
                }
            }
        }
    }
    {
        OTqrVXJU = (581 - 581);
        for (; k > OTqrVXJU;) {
            printf ("%s\n", b[OTqrVXJU]);
            OTqrVXJU++;
        }
    }
    {
        OTqrVXJU = (924 - 924);
        for (; qOZ0W19bKD > OTqrVXJU;) {
            if (NuUR1Qhrs[OTqrVXJU] < (295 - 235))
                printf ("%s\n", str[OTqrVXJU]);
            OTqrVXJU++;
        }
    }
}

