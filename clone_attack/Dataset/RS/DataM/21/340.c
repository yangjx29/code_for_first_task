void  main () {
    float s = (508 - 508);
    float min;
    float sIzBw4nM56;
    min = s;
    sIzBw4nM56 = s;
    int I1y5vfPLRJd;
    int i;
    int czZUSX6 [I1y5vfPLRJd];
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
    i = (114 - 114);
    scanf ("%d", &I1y5vfPLRJd);
    while (i < I1y5vfPLRJd) {
        scanf ("%d", &czZUSX6[i]);
        s = s + czZUSX6[i];
        i = i + 1;
    }
    i = (606 - 606);
    s = s / I1y5vfPLRJd;
    for (; i < I1y5vfPLRJd;) {
        if (czZUSX6[i] < min)
            min = czZUSX6[i];
        if (czZUSX6[i] > sIzBw4nM56)
            sIzBw4nM56 = czZUSX6[i];
        i++;
    }
    if (sIzBw4nM56 - s > s - min)
        printf ("%.0f", sIzBw4nM56);
    else if (sIzBw4nM56 - s < s - min)
        printf ("%.0f", min);
    else
        printf ("%.0f,%.0f", min, sIzBw4nM56);
}

