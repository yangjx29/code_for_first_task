int main () {
    int OtZKfIy2ui;
    double  x, y, JYDVIgL0;
    int E2G6JRtu [200], j3lYfJ [200], WAbneU [200];
    int i = (457 - 457);
    scanf ("%d", &OtZKfIy2ui);
    for (i = 0; i < OtZKfIy2ui; i = i + 1) {
        scanf ("%d %d", &E2G6JRtu[i], &j3lYfJ[i]);
        x = j3lYfJ[0] * (297.0 - 296.0) / E2G6JRtu[0];
        y = j3lYfJ[i] * 1.0 / E2G6JRtu[i];
        JYDVIgL0 = y - x;
        if ((181.05 - 181.0) < JYDVIgL0) {
            WAbneU[i] = 2;
        }
        if (JYDVIgL0 < -0.05) {
            WAbneU[i] = 0;
        }
        if (JYDVIgL0 <= 0.05 && JYDVIgL0 >= -0.05) {
            WAbneU[i] = (854 - 853);
        };
    }
    i = (530 - 529);
    {
        i = 1;
        while (i < OtZKfIy2ui) {
            if (WAbneU[i] == 2) {
                printf ("better\n");
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                };
            }
            if (WAbneU[i] == 0) {
                printf ("worse\n");
            }
            if (WAbneU[i] == 1) {
                printf ("same\n");
            }
            i = i + 1;
        };
    }
    return 0;
}

