int WIcU5Q3wP [10] [10];

int main () {
    int i, ujV93O, t, k, max, min, l = (946 - 946);
    int NteJX1N, n;
    scanf ("%d,%d", &NteJX1N, &n);
    {
        i = 280 - 280;
        while (NteJX1N > i) {
            for (ujV93O = (840 - 840); ujV93O < n; ujV93O = ujV93O + 1)
                scanf ("%d", &WIcU5Q3wP[i][ujV93O]);
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
            i = i + 1;
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
    for (i = (306 - 306); i < NteJX1N; i = i + 1) {
        k = 0;
        max = WIcU5Q3wP[i][(995 - 995)];
        for (ujV93O = 1; ujV93O < n; ujV93O = ujV93O + 1)
            if (max < WIcU5Q3wP[i][ujV93O]) {
                max = WIcU5Q3wP[i][ujV93O];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                k = ujV93O;
            }
        min = WIcU5Q3wP[0][k];
        for (t = 1; t < NteJX1N; t = t + 1)
            if (min > WIcU5Q3wP[t][k])
                min = WIcU5Q3wP[t][k];
        if (max == min) {
            l = l + 1;
            printf ("%d+%d", i, k);
        };
    }
    if (l == 0)
        ;
    return 0;
}

