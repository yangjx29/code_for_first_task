int main () {
    int i, j, k;
    int x1, y1, x2, y2;
    int b [x2] [y2];
    int OiY69a [x1] [y1];
    int c [x1] [y2];
    scanf ("%d%d", &x1, &y1);
    for (i = (770 - 770); x1 > i; i = i + 1)
        for (j = (169 - 169); j < y1; j = j + 1) {
            scanf ("%d", &OiY69a[i][j]);
        }
    scanf ("%d%d", &x2, &y2);
    for (i = (11 - 11); i < x2; i++)
        for (j = 0; y2 > j; j = j + 1) {
            scanf ("%d", &b[i][j]);
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
            };
        }
    for (i = 0; i < x1; i++)
        for (j = 0; j < y2; j++)
            c[i][j] = 0;
    for (i = 0; i < x1; i++)
        for (j = 0; j < y2; j++)
            for (k = 0; k < y1; k++) {
                c[i][j] += OiY69a[i][k] * b[k][j];
            }
    for (i = 0; i < x1; i++)
        for (j = 0; j < y2; j++) {
            printf ("%d", c[i][j]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (j == y2 - 1)
                ;
            else
                printf (" ");
        };
}

