int main () {
    int i, VcKImgveC3h, m, k, counter = (682 - 682), s, n, col, row;
    int a [(965 - 765)] [200];
    scanf ("%d", &row);
    scanf ("%d", &col);
    getchar ();
    for (i = 0; i < row; i++) {
        VcKImgveC3h = 0;
        while (VcKImgveC3h < col) {
            scanf ("%d", &a[i][VcKImgveC3h]);
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
            VcKImgveC3h++;
        };
    }
    for (n = 0; n < row; n = n + 1) {
        k = 0;
        m = a[n][0];
        for (VcKImgveC3h = 0; VcKImgveC3h < col; VcKImgveC3h++) {
            if (a[n][VcKImgveC3h] > m) {
                m = a[n][VcKImgveC3h];
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
                k = VcKImgveC3h;
            };
        }
        s = a[0][k];
        {
            i = 0;
            while (i < row) {
                if (a[i][k] < s) {
                    s = a[i][k];
                }
                i = i + 1;
            };
        }
        if (s == m) {
            counter++;
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
            printf ("%d+%d\n", n, k);
        };
    }
    if (counter == 0) {
        printf ("No\n");
    }
    return 0;
}

