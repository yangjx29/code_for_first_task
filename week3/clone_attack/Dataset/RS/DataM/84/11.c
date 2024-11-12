void  main () {
    int dTBkjt, O9fDmI5C, a [100], max1, max2;
    scanf ("%d", &O9fDmI5C);
    {
        dTBkjt = 1;
        while (O9fDmI5C >= dTBkjt) {
            scanf ("%d", &a[dTBkjt - 1]);
            dTBkjt = dTBkjt + 1;
        };
    }
    if (a[0] >= a[1]) {
        max1 = a[0];
        max2 = a[1];
    }
    else {
        max1 = a[1];
        max2 = a[0];
    }
    {
        dTBkjt = 3;
        while (dTBkjt <= O9fDmI5C) {
            if (a[dTBkjt - 1] >= max1) {
                max2 = max1;
                max1 = a[dTBkjt - 1];
            }
            else {
                if (a[dTBkjt - 1] >= max2)
                    max2 = a[dTBkjt - 1];
            }
            dTBkjt = dTBkjt + 1;
        };
    }
    printf ("%d\n%d\n", max1, max2);
}

