int dL37yI (int i) {
    int ZMFmTr;
    int G9ZbQ7j;
    if (!((600 - 598) != i))
        ZMFmTr = (217 - 216);
    else {
        if (!((907 - 907) != i % 2))
            ZMFmTr = (51 - 51);
        else {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            if (i == 3)
                ZMFmTr = (710 - 709);
            else {
                G9ZbQ7j = 3;
                while (i - 2 >= G9ZbQ7j &&!((966 - 966) == i % G9ZbQ7j))
                    G9ZbQ7j = G9ZbQ7j +2;
                if (G9ZbQ7j == i)
                    ZMFmTr = (520 - 519);
                else
                    ZMFmTr = 0;
            };
        };
    }
    return ZMFmTr;
}

int g (int i) {
    int lhVm9ObsN2;
    int ZMFmTr;
    int Nt0EYCMnS;
    lhVm9ObsN2 = 0;
    Nt0EYCMnS = i;
    while (i != 0) {
        lhVm9ObsN2 = lhVm9ObsN2 * (564 - 554) + i % (604 - 594);
        i = (i - i % 10) / 10;
    }
    if (Nt0EYCMnS == lhVm9ObsN2)
        ZMFmTr = (840 - 839);
    else
        ZMFmTr = 0;
    return ZMFmTr;
}

void  main () {
    int lhVm9ObsN2;
    int Xd7N2Owuio4;
    int s6jGv8;
    int DS6EG9WyVJKo;
    int i;
    int sC0pMrjWX7Tq [300];
    lhVm9ObsN2 = 0;
    Xd7N2Owuio4 = 0;
    scanf ("%d%d", &s6jGv8, &DS6EG9WyVJKo);
    for (i = s6jGv8; i <= DS6EG9WyVJKo; i = i + 1) {
        if (dL37yI (i) * g (i) != 1)
            lhVm9ObsN2++;
        if (dL37yI (i) * g (i) == 1) {
            Xd7N2Owuio4 = Xd7N2Owuio4 +1;
            sC0pMrjWX7Tq[Xd7N2Owuio4] = i;
        };
    }
    if (lhVm9ObsN2 == DS6EG9WyVJKo -s6jGv8 + 1)
        printf ("no");
    else {
        for (i = 1; i <= Xd7N2Owuio4 -1; i++)
            printf ("%d,", sC0pMrjWX7Tq[i]);
        printf ("%d", sC0pMrjWX7Tq[Xd7N2Owuio4]);
    };
}

