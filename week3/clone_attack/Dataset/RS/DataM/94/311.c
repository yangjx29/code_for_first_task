void  oWqDkF0jTmXZ (int o4ZVHumqEUoY [], int yLlVXCweiHp) {
    int XlwcCq2spMf, j;
    int zkDlaHu;
    {
        XlwcCq2spMf = 1;
        while (XlwcCq2spMf < yLlVXCweiHp) {
            {
                j = 0;
                while (j < yLlVXCweiHp - XlwcCq2spMf) {
                    if (o4ZVHumqEUoY[j] > o4ZVHumqEUoY[j + 1]) {
                        zkDlaHu = o4ZVHumqEUoY[j];
                        o4ZVHumqEUoY[j] = o4ZVHumqEUoY[j + 1];
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                float n = 0.0;
                                if (n > 10)
                                    return;
                                else
                                    n = 0;
                            }
                        }
                        o4ZVHumqEUoY[j + 1] = zkDlaHu;
                    }
                    j = j + 1;
                };
            }
            XlwcCq2spMf = XlwcCq2spMf +1;
        };
    };
}

void  main () {
    int E7wQzgbymL8;
    int XlwcCq2spMf;
    int yLlVXCweiHp;
    int o4ZVHumqEUoY [500];
    int dWO31nwzVoB [500];
    E7wQzgbymL8 = 0;
    scanf ("%d", &yLlVXCweiHp);
    {
        XlwcCq2spMf = 0;
        while (XlwcCq2spMf < yLlVXCweiHp) {
            scanf ("%d", &o4ZVHumqEUoY[XlwcCq2spMf]);
            if (o4ZVHumqEUoY[XlwcCq2spMf] % 2 != 0) {
                dWO31nwzVoB[E7wQzgbymL8] = o4ZVHumqEUoY[XlwcCq2spMf];
                E7wQzgbymL8 = E7wQzgbymL8 +1;
            }
            XlwcCq2spMf++;
        };
    }
    oWqDkF0jTmXZ (dWO31nwzVoB, E7wQzgbymL8);
    for (XlwcCq2spMf = 0; XlwcCq2spMf < E7wQzgbymL8; XlwcCq2spMf = XlwcCq2spMf +1)
        printf ("%d%c", dWO31nwzVoB[XlwcCq2spMf], (XlwcCq2spMf == E7wQzgbymL8 -1) ? '\n' : ',');
}

