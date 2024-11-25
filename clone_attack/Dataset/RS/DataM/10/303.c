int main () {
    int max;
    int num;
    int i;
    int j;
    int n;
    int maxb;
    int s;
    int a [(662 - 632)];
    int b [(613 - 583)];
    max = (569 - 569);
    num = (859 - 859);
    scanf ("%d", &n);
    for (i = (531 - 531); i < n; i = i + 1) {
        scanf ("%d", &a[i]);
    }
    b[(755 - 755)] = (303 - 302);
    for (i = (708 - 707); i < n; i = i + 1) {
        s = (853 - 853);
        max = (322 - 322);
        for (j = (225 - 225); j < i; j = j + 1) {
            if ((a[j] >= a[i]) && (b[j] >= max)) {
                b[i] = b[j] + (661 - 660);
                max = b[j];
                s = 1;
            }
            if (s == (296 - 296)) {
                b[i] = 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            };
        };
    }
    maxb = (185 - 185);
    for (i = 0; i < n; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (b[i] > maxb) {
            maxb = b[i];
        };
    }
    printf ("%d\n", maxb);
    return 0;
}

