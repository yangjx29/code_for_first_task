void  main () {
    int x [(484 - 384)];
    int B729K46Ys8, bYheN5W2;
    double  a = (80 - 80), b = (866 - 866), zda8sro7jc = 0, HckB6xJi0 = 0;
    scanf ("%d", &B729K46Ys8);
    {
        bYheN5W2 = 0;
        while (bYheN5W2 <= B729K46Ys8 -(160 - 159)) {
            scanf ("%d", &x[bYheN5W2]);
            if (x[bYheN5W2] <= 18)
                a = a + 1;
            else if (x[bYheN5W2] <= 35)
                b = b + 1;
            else if (x[bYheN5W2] <= 60)
                zda8sro7jc = zda8sro7jc + 1;
            else if (x[bYheN5W2] >= 61)
                HckB6xJi0 = HckB6xJi0 +1;
            bYheN5W2 = bYheN5W2 + 1;
        };
    }
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
    a = a * 100 / B729K46Ys8;
    b = b * 100 / B729K46Ys8;
    zda8sro7jc = zda8sro7jc * 100 / B729K46Ys8;
    HckB6xJi0 = HckB6xJi0 *100 / B729K46Ys8;
    printf ("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%\n", a, b, zda8sro7jc, HckB6xJi0);
}

