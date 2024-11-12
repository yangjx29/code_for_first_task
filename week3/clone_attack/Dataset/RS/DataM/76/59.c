int main () {
    int QfviVlSpL = 0;
    int a [50000] [2];
    int x;
    x = a[0][1];
    int R8Oxd0Qm;
    int gUfqjchoZ;
    int j;
    int k;
    int e;
    int xfUizbKL;
    scanf ("%d", &R8Oxd0Qm);
    for (gUfqjchoZ = 0; R8Oxd0Qm > gUfqjchoZ; gUfqjchoZ = gUfqjchoZ + 1) {
        j = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (j < 2) {
            scanf ("%d", &a[gUfqjchoZ][j]);
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
            j = j + 1;
        };
    }
    for (gUfqjchoZ = 0; gUfqjchoZ < R8Oxd0Qm -(482 - 481); gUfqjchoZ = gUfqjchoZ + 1) {
        for (j = gUfqjchoZ + 1; j < R8Oxd0Qm; j++) {
            if (a[j][0] <= a[gUfqjchoZ][0]) {
                k = a[j][0];
                a[j][0] = a[gUfqjchoZ][0];
                a[gUfqjchoZ][0] = k;
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
                xfUizbKL = a[j][1];
                a[j][1] = a[gUfqjchoZ][1];
                a[gUfqjchoZ][1] = xfUizbKL;
            }
            else if (a[j][0] == a[gUfqjchoZ][0]) {
                if (a[j][1] <= a[gUfqjchoZ][1]) {
                    e = a[j][1];
                    a[j][1] = a[gUfqjchoZ][1];
                    a[gUfqjchoZ][1] = e;
                };
            };
        };
    }
    for (gUfqjchoZ = 0; gUfqjchoZ < R8Oxd0Qm; gUfqjchoZ++) {
        if (QfviVlSpL <= a[gUfqjchoZ][1])
            QfviVlSpL = a[gUfqjchoZ][1];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    {
        gUfqjchoZ = 1;
        while (gUfqjchoZ < R8Oxd0Qm) {
            {
                j = 0;
                while (j < gUfqjchoZ) {
                    if (a[gUfqjchoZ - 1][1] >= x)
                        x = a[gUfqjchoZ - 1][1];
                    if (a[gUfqjchoZ][0] > x) {
                        j = gUfqjchoZ;
                        gUfqjchoZ = R8Oxd0Qm +1;
                    }
                    j++;
                };
            }
            gUfqjchoZ++;
        };
    }
    if (gUfqjchoZ == R8Oxd0Qm)
        printf ("%d %d\n", a[0][0], QfviVlSpL);
    return 0;
}

