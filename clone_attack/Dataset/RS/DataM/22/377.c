int main () {
    int a [300], i = 1, j, b, c = 0, bs8uyoR;
    scanf ("%d", &a[0]);
    while (scanf (",%d", &a[i]))
        i = i + 1;
    b = a[0];
    {
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
        while (j < i) {
            if (a[j] > b)
                b = a[j];
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
    {
        bs8uyoR = 0;
        while (i > bs8uyoR) {
            if (a[bs8uyoR] > c && a[bs8uyoR] != b)
                c = a[bs8uyoR];
            bs8uyoR++;
        };
    }
    if (c == 0)
        printf ("No\n");
    else
        printf ("%d\n", c);
    return 0;
}

