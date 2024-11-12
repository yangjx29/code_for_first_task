int main () {
    int a [300], k = 0, i, max = -999, max1 = -999;
    char c;
    scanf ("%d", &a[k]);
    scanf ("%c", &c);
    for (; c != '\n';) {
        k++;
        scanf ("%d", &a[k]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%c", &c);
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
    {
        i = 0;
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
        while (i <= k) {
            if (a[i] > max)
                max = a[i];
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i <= k) {
            if (a[i] > max1 && a[i] < max) {
                max1 = a[i];
            }
            i++;
        };
    }
    if (max1 == -999)
        ;
    else
        printf ("%d", max1);
    return 0;
}

