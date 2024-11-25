int main () {
    int t;
    t = 0;
    int max;
    int min;
    int PhGLZ1W25Q;
    int j;
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
    int a [6] [6];
    {
        PhGLZ1W25Q = 835 - 834;
        while (6 > PhGLZ1W25Q) {
            for (j = 1; j < 6; j = j + 1) {
                scanf ("%d", &a[PhGLZ1W25Q][j]);
            }
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
            PhGLZ1W25Q = PhGLZ1W25Q +1;
        };
    }
    for (PhGLZ1W25Q = 1; PhGLZ1W25Q < 6; PhGLZ1W25Q++) {
        a[PhGLZ1W25Q][0] = 1;
        max = a[PhGLZ1W25Q][1];
        for (j = 1; j < 6; j++) {
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
            if (a[PhGLZ1W25Q][j] > max) {
                max = a[PhGLZ1W25Q][j];
                a[PhGLZ1W25Q][0] = j;
            };
        };
    }
    for (PhGLZ1W25Q = 1; PhGLZ1W25Q < 6; PhGLZ1W25Q++) {
        a[0][PhGLZ1W25Q] = 1;
        min = a[1][PhGLZ1W25Q];
        for (j = 1; j < 6; j++) {
            if (a[j][PhGLZ1W25Q] < min) {
                min = a[j][PhGLZ1W25Q];
                a[0][PhGLZ1W25Q] = j;
            };
        };
    }
    {
        PhGLZ1W25Q = 1;
        while (PhGLZ1W25Q < 6) {
            if (a[0][a[PhGLZ1W25Q][0]] == PhGLZ1W25Q) {
                printf ("%d %d %d\n", PhGLZ1W25Q, a[PhGLZ1W25Q][0], a[PhGLZ1W25Q][a[PhGLZ1W25Q][0]]);
                t = t + 1;
            }
            PhGLZ1W25Q++;
        };
    }
    if (t == 0)
        printf ("not found\n");
}

