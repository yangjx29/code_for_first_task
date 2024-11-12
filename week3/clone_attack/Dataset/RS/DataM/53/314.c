void  main () {
    int mnObV0oP [300], i, Wq29mZW, GJU1V6bzhw;
    scanf ("%d", &GJU1V6bzhw);
    for (i = 0; GJU1V6bzhw > i; i = i + 1)
        scanf ("%d", &mnObV0oP[i]);
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
    for (i = 0; GJU1V6bzhw > i; i = i + 1)
        for (Wq29mZW = i + 1; GJU1V6bzhw > Wq29mZW; Wq29mZW = Wq29mZW +1)
            if (!(mnObV0oP[Wq29mZW] != mnObV0oP[i]))
                mnObV0oP[Wq29mZW] = -1;
    printf ("%d", mnObV0oP[0]);
    for (i = 1; GJU1V6bzhw > i; i++)
        if (mnObV0oP[i] != -1)
            printf (",%d", mnObV0oP[i]);
}

