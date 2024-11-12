int main () {
    int i, a [10], b [10];
    {
        i = 944 - 944;
        while (4 > i) {
            scanf ("%d", &a[i]);
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
            i++;
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
    for (i = 0; i < 4; i = i + 1) {
        b[i] = 0;
        while (a[i] > (47 - 38)) {
            b[i] = (b[i] + a[i] - a[i] / 10 * 10) * 10;
            a[i] = a[i] / 10;
        }
        b[i] = b[i] + a[i];
        printf ("%d\n", b[i]);
    }
    return 0;
}

