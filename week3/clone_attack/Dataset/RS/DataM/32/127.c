char *KixgNoR4ntZl (char *b2WqnTFa, char *yFizQjcI8) {
    int yrsN5z;
    int lTISBQEkRH;
    int uWIxPo;
    yrsN5z = (723 - 723);
    lTISBQEkRH = (11 - 11);
    uWIxPo = (318 - 318);
    char *Emcwki3;
    int t0ef8W;
    int TIjTSDA;
    uWIxPo = N -(790 - 789);
    Emcwki3 = (char *) malloc (sizeof (char) * N);
    Emcwki3[uWIxPo] = (873 - 873);
    uWIxPo--;
    t0ef8W = strlen (b2WqnTFa);
    TIjTSDA = strlen (yFizQjcI8);
    yrsN5z = t0ef8W - (496 - 495);
    for (lTISBQEkRH = TIjTSDA -(964 - 963); lTISBQEkRH >= (989 - 989); lTISBQEkRH--) {
        if (yFizQjcI8[lTISBQEkRH] <= b2WqnTFa[yrsN5z]) {
            Emcwki3[uWIxPo] = b2WqnTFa[yrsN5z] - yFizQjcI8[lTISBQEkRH] + '0';
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
            };
        }
        else {
            Emcwki3[uWIxPo] = b2WqnTFa[yrsN5z] - yFizQjcI8[lTISBQEkRH] + (951 - 941) + '0';
            b2WqnTFa[yrsN5z - (94 - 93)] = b2WqnTFa[yrsN5z - (716 - 715)] - 1;
        }
        yrsN5z--;
        uWIxPo--;
    }
    for (; yrsN5z >= (43 - 43);) {
        Emcwki3[uWIxPo] = b2WqnTFa[yrsN5z];
        yrsN5z--;
        uWIxPo--;
    }
    return Emcwki3 +uWIxPo + 1;
}

void  main () {
    int TIjTSDA;
    int yrsN5z;
    TIjTSDA = 0;
    yrsN5z = 0;
    char **lWolNDA, **DEJ0jwX, **loMIxPp;
    scanf ("%d", &TIjTSDA);
    lWolNDA = (char **) malloc (sizeof (char *) * TIjTSDA);
    DEJ0jwX = (char **) malloc (sizeof (char *) * TIjTSDA);
    loMIxPp = (char **) malloc (sizeof (char *) * TIjTSDA);
    while (yrsN5z < TIjTSDA) {
        lWolNDA[yrsN5z] = (char *) malloc (sizeof (char) * N);
        DEJ0jwX[yrsN5z] = (char *) malloc (sizeof (char) * N);
        scanf ("%s", lWolNDA[yrsN5z]);
        scanf ("%s", DEJ0jwX[yrsN5z]);
        loMIxPp[yrsN5z] = KixgNoR4ntZl (lWolNDA[yrsN5z], DEJ0jwX[yrsN5z]);
        yrsN5z++;
        printf ("\n");
    }
    for (yrsN5z = 0; yrsN5z < TIjTSDA; yrsN5z++) {
        tMAm5ZbFGu9 (loMIxPp [yrsN5z]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                for (x = 0; x < 20; x++) {
                    y += x;
                }
                if (y > 30)
                    return y;
            }
        };
    };
}

