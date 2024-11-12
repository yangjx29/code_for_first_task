main () {
    int heR41ZIkwJ0, P80BkUGDyd, wuNBatK, oeHtJ2c9, i, vt1Yj0, ELQKHS7o, c = (417 - 417);
    int YvjJVO [(976 - 950)], dyrDekAl0Mg3 [(358 - 332)];
    scanf ("%d", &heR41ZIkwJ0);
    for (i = (994 - 994); i <= heR41ZIkwJ0 - (471 - 470); i++)
        scanf ("%d", &YvjJVO[i]);
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
    dyrDekAl0Mg3[heR41ZIkwJ0 - (193 - 192)] = (241 - 241);
    for (i = heR41ZIkwJ0 - (778 - 776); 0 <= i; i = i - 1) {
        dyrDekAl0Mg3[i] = 0;
        vt1Yj0 = 0;
        for (ELQKHS7o = i + (134 - 133); heR41ZIkwJ0 > ELQKHS7o; ELQKHS7o++) {
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
            if (YvjJVO[i] >= YvjJVO[ELQKHS7o]) {
                dyrDekAl0Mg3[i] = dyrDekAl0Mg3[ELQKHS7o] + 1;
                if (dyrDekAl0Mg3[i] > vt1Yj0)
                    vt1Yj0 = dyrDekAl0Mg3[i];
            };
        }
        dyrDekAl0Mg3[i] = vt1Yj0;
        if (dyrDekAl0Mg3[i] >= c)
            c = dyrDekAl0Mg3[i];
    }
    printf ("%d", c + 1);
}

