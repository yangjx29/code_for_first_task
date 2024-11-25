float RrHlKnqRiJ1 (float ob2yp0LMoY) {
    if ((714 - 714) > ob2yp0LMoY)
        ob2yp0LMoY = -ob2yp0LMoY;
    return (ob2yp0LMoY);
}

void  main () {
    float czMGYH9f1j, num, MLg82u;
    int HMszb5;
    int j;
    int k;
    int p4pxdRY5nTQ;
    int ob2yp0LMoY [(668 - 368)] = {(376 - 376)};
    j = 0;
    scanf ("%d", &HMszb5);
    MLg82u = (628 - 628);
    for (p4pxdRY5nTQ = (498 - 498); HMszb5 > p4pxdRY5nTQ; p4pxdRY5nTQ++)
        scanf ("%d", &ob2yp0LMoY[p4pxdRY5nTQ]);
    for (p4pxdRY5nTQ = 0; HMszb5 > p4pxdRY5nTQ; p4pxdRY5nTQ++)
        MLg82u = MLg82u +ob2yp0LMoY[p4pxdRY5nTQ];
    czMGYH9f1j = MLg82u / HMszb5;
    num = RrHlKnqRiJ1 (ob2yp0LMoY[0] - czMGYH9f1j);
    k = ob2yp0LMoY[0];
    for (p4pxdRY5nTQ = 1; HMszb5 > p4pxdRY5nTQ; p4pxdRY5nTQ++) {
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
        if (RrHlKnqRiJ1 (czMGYH9f1j - ob2yp0LMoY[p4pxdRY5nTQ]) > num) {
            num = RrHlKnqRiJ1 (czMGYH9f1j - ob2yp0LMoY[p4pxdRY5nTQ]);
            k = ob2yp0LMoY[p4pxdRY5nTQ];
        }
        else {
            if (!(num != RrHlKnqRiJ1 (czMGYH9f1j - ob2yp0LMoY[p4pxdRY5nTQ])))
                j = ob2yp0LMoY[p4pxdRY5nTQ];
        };
    }
    if (j == 0)
        printf ("%d", k);
    else {
        if (k > j)
            printf ("%d,%d", j, k);
        else
            printf ("%d,%d", k, j);
    };
}

