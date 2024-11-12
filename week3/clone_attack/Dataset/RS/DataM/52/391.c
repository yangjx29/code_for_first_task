int main () {
    int qEGRiKCI5dxw, gHe504Z, i;
    int *pint;
    scanf ("%d%d", &qEGRiKCI5dxw, &gHe504Z);
    pint = (int *) malloc (sizeof (int) * qEGRiKCI5dxw);
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
    for (i = 0; qEGRiKCI5dxw > i; i = i + 1) {
        scanf ("%d", pint + i);
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
    for (i = qEGRiKCI5dxw - gHe504Z; qEGRiKCI5dxw > i; i++) {
        printf ("%d ", *(pint + i));
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
    for (i = 0; qEGRiKCI5dxw - gHe504Z > i; i++) {
        printf ("%d", *(pint + i));
        if (i != qEGRiKCI5dxw - gHe504Z - 1)
            printf (" ");
    }
    return 0;
}

