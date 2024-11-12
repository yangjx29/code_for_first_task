main (int) {
    int mAXfEW6;
    int m;
    int tR0MYbo4s;
    int b;
    m = 0;
    scanf ("%d", &mAXfEW6);
    tR0MYbo4s = mAXfEW6;
    while (tR0MYbo4s != 0) {
        b = tR0MYbo4s % 10;
        tR0MYbo4s = tR0MYbo4s / 10;
        m = m * 10 + b;
    }
    printf ("%d", m);
}

