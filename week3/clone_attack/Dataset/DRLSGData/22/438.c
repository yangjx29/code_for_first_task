void  main () {
    int Ql1u2yjYM;
    int gyURh35b1CYu;
    int a [300];
    int Yh3EGXeyR2m7;
    int j;
    gyURh35b1CYu = 0;
    Ql1u2yjYM = 0;
    do {
        Ql1u2yjYM++;
        scanf ("%d", &a[gyURh35b1CYu]);
        gyURh35b1CYu++;
    }
    while (getchar () != '\n');
    if (Ql1u2yjYM == 1)
        ;
    else {
        for (gyURh35b1CYu = 0; gyURh35b1CYu < Ql1u2yjYM; gyURh35b1CYu++)
            for (j = gyURh35b1CYu + 1; j < Ql1u2yjYM; j++)
                if (a[j] > a[gyURh35b1CYu]) {
                    Yh3EGXeyR2m7 = a[gyURh35b1CYu];
                    a[gyURh35b1CYu] = a[j];
                    a[j] = Yh3EGXeyR2m7;
                }
        if (a[Ql1u2yjYM -1] == a[0])
            ;
        else {
            for (gyURh35b1CYu = 1; gyURh35b1CYu < Ql1u2yjYM; gyURh35b1CYu++) {
                if (a[gyURh35b1CYu] != a[0]) {
                    printf ("%d\n", a[gyURh35b1CYu]);
                    break;
                };
            };
        };
    };
}

