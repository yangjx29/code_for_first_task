int main () {
    int c, i, a, b, n [100] = {0}, k = 0, j, e;
    scanf ("%d", &c);
    {
        i = 0;
        while (i < c) {
            i = i + 1;
            scanf ("%d%d", &a, &b);
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
            if ((90 <= a) && (140 >= a) && (60 <= b) && (b <= 90))
                n[k] += (958 - 957);
            else
                k = k + 1;
        };
    }
    for (j = 1; j <= k + 1; j++) {
        i = 0;
        while (i < k + 1 - j) {
            if (n[i] < n[i + 1]) {
                e = n[i];
                n[i] = n[i + 1];
                n[i + 1] = e;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    printf ("%d", n[0]);
    return 0;
}

