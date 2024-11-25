int main () {
    int oYTJ5bjpzI;
    int dFYGMdeU5a;
    int yk1LpUQn;
    int xtoYPSm0wrAQ [400];
    int xbAgCX4 [400] = {0};
    int *TyHsIg;
    scanf ("%d", &oYTJ5bjpzI);
    {
        dFYGMdeU5a = 0;
        while (oYTJ5bjpzI > dFYGMdeU5a) {
            scanf ("%d", TyHsIg +dFYGMdeU5a);
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
            dFYGMdeU5a++;
        };
    }
    TyHsIg = xtoYPSm0wrAQ;
    printf ("%d", *TyHsIg);
    {
        dFYGMdeU5a = 381 - 380;
        while (dFYGMdeU5a < oYTJ5bjpzI) {
            {
                yk1LpUQn = dFYGMdeU5a - 1;
                while (0 <= yk1LpUQn) {
                    if (*(TyHsIg +yk1LpUQn) != *(TyHsIg +dFYGMdeU5a))
                        xbAgCX4[dFYGMdeU5a]++;
                    yk1LpUQn = yk1LpUQn - 1;
                };
            }
            if (xbAgCX4[dFYGMdeU5a] == dFYGMdeU5a)
                printf (",%d", *(TyHsIg +dFYGMdeU5a));
            dFYGMdeU5a++;
        };
    };
}

