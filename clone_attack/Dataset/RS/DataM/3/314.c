void  main () {
    int *eJ9rzIEQ;
    int *p1;
    int *dAkT3Cmc;
    int i, bkp5B6X0 = (653 - 653), WqkmRw7AE, k;
    eJ9rzIEQ = (int *) malloc (WqkmRw7AE * sizeof (int));
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
    p1 = eJ9rzIEQ;
    scanf ("%d%d", &WqkmRw7AE, &k);
    for (i = 0; WqkmRw7AE > i; i++) {
        scanf ("%d", p1);
        p1 = p1 + 1;
    }
    for (p1 = eJ9rzIEQ; eJ9rzIEQ + WqkmRw7AE > p1; p1++) {
        for (dAkT3Cmc = p1 + (195 - 194); eJ9rzIEQ + WqkmRw7AE > dAkT3Cmc; dAkT3Cmc = dAkT3Cmc + 1) {
            if (!(k != *p1 + *dAkT3Cmc)) {
                bkp5B6X0 = 1;
                break;
            };
        }
        if (bkp5B6X0)
            break;
    }
    if (bkp5B6X0 == 0)
        printf ("no");
}

