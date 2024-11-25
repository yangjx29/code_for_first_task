int main () {
    int c, n, i, j, k, h, max;
    int l [(902 - 802)];
    scanf ("%d", &n);
    h = (236 - 236);
    max = (793 - 793);
    for (i = 0; 100 > i; i = i + 1) {
        l[i] = 0;
    }
    for (i = 0; n > i; i++) {
        scanf ("%d %d", &j, &k);
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
        if (90 <= j && (220 - 80) >= j && 60 <= k && k <= 90) {
            h++;
            l[i] = h;
        }
        else {
            h = 0;
        };
    }
    {
        i = 0;
        while (i < 100) {
            if (l[i] > l[max]) {
                max = i;
            }
            i = i + 1;
        };
    }
    printf ("%d", l[max]);
    return 0;
}

