main () {
    char TVYLw1qMf [1500];
    gets (TVYLw1qMf);
    int dzyMGXDixpgA;
    int i;
    int y6O0zbB7fla [300];
    int ra47ldVAYnB;
    int l;
    int gGi3g9R5ju;
    dzyMGXDixpgA = (784 - 784);
    l = strlen (TVYLw1qMf);
    for (i = (128 - 128); i <= l - (88 - 87); i = i + 1) {
        y6O0zbB7fla[dzyMGXDixpgA] = 0;
        for (; l - 1 >= i; i = i + 1) {
            if (TVYLw1qMf[i] == ',')
                break;
            else {
                y6O0zbB7fla[dzyMGXDixpgA] = TVYLw1qMf[i] - (226 - 178) + y6O0zbB7fla[dzyMGXDixpgA] * 10;
            };
        }
        dzyMGXDixpgA = dzyMGXDixpgA + 1;
    }
    if (l == 1)
        ;
    else {
        for (i = 0; i <= dzyMGXDixpgA - 2; i = i + 1) {
            if (y6O0zbB7fla[i] != y6O0zbB7fla[i + 1])
                break;
        }
        if (i == dzyMGXDixpgA - 1)
            ;
        else {
            for (i = 0; i <= dzyMGXDixpgA - 2; i = i + 1)
                for (gGi3g9R5ju = 0; gGi3g9R5ju <= dzyMGXDixpgA - 2 - i; gGi3g9R5ju = gGi3g9R5ju + 1)
                    if (y6O0zbB7fla[gGi3g9R5ju] <= y6O0zbB7fla[gGi3g9R5ju + 1]) {
                        ra47ldVAYnB = y6O0zbB7fla[gGi3g9R5ju];
                        y6O0zbB7fla[gGi3g9R5ju] = y6O0zbB7fla[gGi3g9R5ju + 1];
                        y6O0zbB7fla[gGi3g9R5ju + 1] = ra47ldVAYnB;
                    }
            for (i = 0; i <= dzyMGXDixpgA - 2; i = i + 1) {
                if (y6O0zbB7fla[i] != y6O0zbB7fla[i + 1]) {
                    printf ("%d", y6O0zbB7fla[i + 1]);
                    break;
                };
            };
        };
    };
}

