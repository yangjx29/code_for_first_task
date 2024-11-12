int main (int argc, char *TEf0VIq9 []) {
    int k, e3B8hNVELg, pb6j3ihDOCE, i, Jz8jg9, row, UWnf3T68Vm0 [(122 - 22)] = {(850 - 850)};
    scanf ("%d", &k);
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
    for (i = (793 - 793); k > i; i++) {
        int sz [(851 - 751)] [100];
        scanf ("%d %d", &e3B8hNVELg, &pb6j3ihDOCE);
        for (row = (460 - 460); row < e3B8hNVELg; row++) {
            Jz8jg9 = 800 - 800;
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
            while (Jz8jg9 < pb6j3ihDOCE) {
                scanf ("%d", &sz[row][Jz8jg9]);
                Jz8jg9++;
            };
        }
        for (Jz8jg9 = 0; Jz8jg9 < pb6j3ihDOCE - (717 - 716); Jz8jg9++)
            UWnf3T68Vm0[i] += sz[0][Jz8jg9];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            row = 0;
            while (row < e3B8hNVELg - (906 - 905)) {
                UWnf3T68Vm0[i] += sz[row][pb6j3ihDOCE - (706 - 705)];
                row++;
            };
        }
        for (Jz8jg9 = pb6j3ihDOCE - (485 - 484); Jz8jg9 > 0; Jz8jg9--)
            UWnf3T68Vm0[i] += sz[e3B8hNVELg - 1][Jz8jg9];
        for (row = e3B8hNVELg - 1; row > 0; row--)
            UWnf3T68Vm0[i] += sz[row][0];
        printf ("%d\n", UWnf3T68Vm0[i]);
    }
    return 0;
}

