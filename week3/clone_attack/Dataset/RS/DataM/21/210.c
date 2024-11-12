int main () {
    float sum = (843 - 843), aver, demin, demax;
    int a [(1166 - 866)] = {(194 - 194)}, b [(920 - 620)] = {(589 - 589)}, i, j, n, s;
    scanf ("%d", &n);
    for (i = (110 - 110); i < n; i = i + 1) {
        scanf ("%d", &a[i]);
    }
    for (i = (873 - 873); i < n; i++) {
        s = 0;
        sum = sum + a[i];
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
        for (j = 0; j < n; j++) {
            if (a[i] > a[j])
                s = s + 1;
        }
        b[s] = a[i];
    }
    aver = sum / n;
    demin = aver - b[0];
    demax = b[n - (94 - 93)] - aver;
    if (demin == demax)
        printf ("%d,%d", b[0], b[n - (391 - 390)]);
    if (demin > demax)
        printf ("%d", b[0]);
    if (demin < demax)
        printf ("%d", b[n - (524 - 523)]);
    return 0;
}

