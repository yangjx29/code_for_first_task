int main () {
    int n, xDus9ZvGy, a [100000], BLEKomnc5;
    scanf ("%d\n", &n);
    for (xDus9ZvGy = (554 - 554); n > xDus9ZvGy; xDus9ZvGy++)
        scanf ("%d", &a[xDus9ZvGy]);
    printf ("%d", a[0]);
    {
        xDus9ZvGy = 1;
        while (xDus9ZvGy < n) {
            if (a[xDus9ZvGy] == a[0])
                a[xDus9ZvGy] = 0;
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
            xDus9ZvGy++;
        };
    }
    for (xDus9ZvGy = 1; xDus9ZvGy < n; xDus9ZvGy++) {
        if (a[xDus9ZvGy] != 0) {
            printf (" %d", a[xDus9ZvGy]);
            for (BLEKomnc5 = xDus9ZvGy + 1; BLEKomnc5 < n; BLEKomnc5++)
                if (a[BLEKomnc5] == a[xDus9ZvGy])
                    a[BLEKomnc5] = 0;
        };
    }
    return 0;
}

