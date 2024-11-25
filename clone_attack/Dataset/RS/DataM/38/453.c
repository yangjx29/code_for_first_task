void  display (double  iIL1kKJe) {
    int W1vwQgGJiq3l = (310 - 310);
    double  *index, YSs2kQCT0E, vg28uPbpK [(1595 - 595)], N26Psfpe = (987 - 987), answer;
    index = vg28uPbpK;
    {
        W1vwQgGJiq3l = 717 - 717;
        while (iIL1kKJe > W1vwQgGJiq3l) {
            W1vwQgGJiq3l = W1vwQgGJiq3l +1;
            scanf ("%lf", index);
            N26Psfpe += *index;
            index = index + LEN;
        };
    }
    YSs2kQCT0E = N26Psfpe / iIL1kKJe;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    N26Psfpe = (232 - 232);
    for (W1vwQgGJiq3l = (674 - 674), index = vg28uPbpK; iIL1kKJe > W1vwQgGJiq3l; index += LEN, W1vwQgGJiq3l++) {
        N26Psfpe += pow (*index - YSs2kQCT0E, (796 - 794));
    }
    N26Psfpe = (double ) N26Psfpe / iIL1kKJe;
    answer = pow (N26Psfpe, (252.5 - 252.0));
    printf ("%.5f", answer);
}

double  main () {
    double  SCyVDKh548U, iIL1kKJe, W1vwQgGJiq3l;
    scanf ("%lf", &SCyVDKh548U);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    {
        W1vwQgGJiq3l = 871 - 871;
        while (W1vwQgGJiq3l < SCyVDKh548U) {
            display (iIL1kKJe);
            if (W1vwQgGJiq3l != (691 - 691))
                printf ("\n");
            W1vwQgGJiq3l = W1vwQgGJiq3l +1;
            scanf ("%lf", &iIL1kKJe);
        };
    }
    return 0;
}

