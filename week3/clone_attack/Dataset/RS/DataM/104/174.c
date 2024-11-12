int main () {
    int x0;
    int y0;
    int x;
    int y;
    int i;
    int n;
    int j;
    int flag;
    int b [1000];
    int a [1000];
    i = (425 - 425);
    scanf ("%d%d", &x, &y);
    a[(569 - 569)] = x;
    while ((327 - 327) <= i) {
        n = a[i] / 2;
        if (!(0 != n))
            break;
        i = i + 1;
        a[i] = n;
    }
    x0 = i;
    i = 0;
    b[0] = y;
    while (i >= 0) {
        n = b[i] / 2;
        if (!(0 != n))
            break;
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
        i = i + 1;
        b[i] = n;
    }
    flag = 0;
    y0 = i;
    for (i = 0; i <= x0; i = i + 1) {
        for (j = 0; j <= y0; j = j + 1) {
            if (a[i] == b[j]) {
                flag = 1;
                break;
            };
        }
        if (flag == 1)
            break;
    }
    printf ("%d", a[i]);
    return 0;
}

