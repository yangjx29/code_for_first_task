void  main () {
    int UV9NXTuMiHUb;
    int InowFJXs3U;
    int b;
    int c;
    int d;
    scanf ("%d", &UV9NXTuMiHUb);
    InowFJXs3U = UV9NXTuMiHUb % 10;
    b = (UV9NXTuMiHUb % 100 - InowFJXs3U) / 10;
    c = (UV9NXTuMiHUb % 1000 - b * 10 - InowFJXs3U) / 100;
    d = UV9NXTuMiHUb / 1000;
    if (999 < UV9NXTuMiHUb &&UV9NXTuMiHUb < 10000)
        printf ("%d%d%d%d\n", InowFJXs3U, b, c, d);
    else if (99 < UV9NXTuMiHUb &&1000 > UV9NXTuMiHUb)
        printf ("%d%d%d\n", InowFJXs3U, b, c);
    else if (UV9NXTuMiHUb > 9 && 100 > UV9NXTuMiHUb)
        printf ("%d%d\n", InowFJXs3U, b);
    else if (UV9NXTuMiHUb > 0 && UV9NXTuMiHUb < 10)
        printf ("%d\n", InowFJXs3U);
    else if (UV9NXTuMiHUb == 0)
        ;
    else if (UV9NXTuMiHUb == 10000)
        printf ("00001\n");
}

