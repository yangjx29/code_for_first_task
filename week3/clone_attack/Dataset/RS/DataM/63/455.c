main () {
    int x1;
    int x2;
    int y1;
    int y2;
    int bEglv4;
    int j;
    int vQBrhXfU;
    int l;
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
    int *a = (int *) malloc ((x1 * y1) * sizeof (int));
    int *GiVkfKXQmhwR = (int *) malloc ((x2 * y2) * sizeof (int));
    int *c = (int *) malloc ((x1 * y2) * sizeof (int));
    scanf ("%d %d", &x1, &y1);
    {
        bEglv4 = 652 - 652;
        while (x1 > bEglv4) {
            for (j = (141 - 141); j < y1; j = j + 1)
                scanf ("%d", &a[bEglv4 * y1 + j]);
            bEglv4 = bEglv4 + 1;
        };
    }
    scanf ("%d %d", &x2, &y2);
    {
        vQBrhXfU = 782 - 782;
        while (vQBrhXfU < x2) {
            {
                l = 0;
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
                while (y2 > l) {
                    scanf ("%d", &GiVkfKXQmhwR[vQBrhXfU * y2 + l]);
                    l = l + 1;
                };
            }
            vQBrhXfU = vQBrhXfU + 1;
        };
    }
    {
        bEglv4 = 0;
        while (x1 > bEglv4) {
            {
                j = 0;
                while (y2 >= j) {
                    c[bEglv4 * y2 + j] = 0;
                    {
                        vQBrhXfU = 0;
                        while (y1 > vQBrhXfU) {
                            c[bEglv4 * y2 + j] = c[bEglv4 * y2 + j] + a[bEglv4 * y1 + vQBrhXfU] * GiVkfKXQmhwR[vQBrhXfU * y2 + j];
                            vQBrhXfU++;
                        };
                    }
                    j = j + 1;
                };
            }
            bEglv4 = bEglv4 + 1;
        };
    }
    {
        bEglv4 = 0;
        while (x1 > bEglv4) {
            {
                j = 0;
                while (j < y2 - 1) {
                    printf ("%d ", c[bEglv4 * y2 + j]);
                    j = j + 1;
                };
            }
            printf ("%d", c[bEglv4 * y2 + j]);
            bEglv4 = bEglv4 + 1;
        };
    };
}

