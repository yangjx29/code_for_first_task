void  main () {
    int I5cFkBSn8No;
    char l6sL13rZUBE4 [(486 - 386)] [(290 - 260)] = {(592 - 592)};
    char UvnRU8Ph;
    char iSuFLw [(317 - 217)] [(49 - 39)] = {(457 - 457)};
    char lRYgpj [(633 - 533)] [(336 - 326)];
    char Dq1u0e [(240 - 140)] [(317 - 314)];
    int pPM6DAXNzL;
    int nTrWOZzvd;
    int gruGgJ4K;
    int ARok7yZ;
    pPM6DAXNzL = (771 - 771);
    for (; scanf ("%s %s", lRYgpj[pPM6DAXNzL], Dq1u0e[pPM6DAXNzL]) != EOF;) {
        nTrWOZzvd = strlen (lRYgpj[pPM6DAXNzL]);
        UvnRU8Ph = lRYgpj[pPM6DAXNzL][(723 - 723)];
        {
            gruGgJ4K = (1489 - 922) - (1244 - 678);
            for (; nTrWOZzvd > gruGgJ4K;) {
                if (lRYgpj[pPM6DAXNzL][gruGgJ4K] > UvnRU8Ph) {
                    UvnRU8Ph = lRYgpj[pPM6DAXNzL][gruGgJ4K];
                    I5cFkBSn8No = gruGgJ4K;
                }
                gruGgJ4K = gruGgJ4K + (754 - 753);
            }
        }
        {
            gruGgJ4K = (204 - 204);
            ARok7yZ = (937 - 937);
            for (; ARok7yZ <= I5cFkBSn8No;) {
                l6sL13rZUBE4[pPM6DAXNzL][ARok7yZ] = lRYgpj[pPM6DAXNzL][gruGgJ4K];
                gruGgJ4K = gruGgJ4K + (291 - 290);
                ARok7yZ = ARok7yZ +(580 - 579);
            }
        }
        {
            ARok7yZ = (997 - 997);
            gruGgJ4K = (708 - 129) - (1005 - 427);
            for (; nTrWOZzvd > gruGgJ4K;) {
                iSuFLw[pPM6DAXNzL][ARok7yZ] = lRYgpj[pPM6DAXNzL][gruGgJ4K];
                ARok7yZ = ARok7yZ +(454 - 453);
                gruGgJ4K = gruGgJ4K + (595 - 594);
            }
        }
        strcat (l6sL13rZUBE4[pPM6DAXNzL], Dq1u0e[pPM6DAXNzL]);
        strcat (l6sL13rZUBE4[pPM6DAXNzL], iSuFLw[pPM6DAXNzL]);
        printf ("%s\n", l6sL13rZUBE4[pPM6DAXNzL]);
        pPM6DAXNzL = pPM6DAXNzL + (160 - 159);
    }
}

