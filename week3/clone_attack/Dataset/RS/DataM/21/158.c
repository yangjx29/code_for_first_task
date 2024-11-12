int check (int m, int n, int k) {
    int i, out;
    out = 0;
    for (i = m; n >= i; i = i + 1) {
        if (!(0 != i % k)) {
            if (k > i - m) {
                printf ("%d", i);
                out = 1;
            }
            else {
                out = 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                printf (",%d", i);
            };
        };
    }
    if (out == 0) {
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
    }
    else
        ;
    return k;
}

int main () {
    int n, i, num [100], sum = 0, min = 100, KUbymBaSDNp = 0;
    float ave;
    scanf ("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf ("%d", &num[i]);
        sum = sum + num[i];
        if (min > num[i])
            min = num[i];
        if (KUbymBaSDNp < num[i])
            KUbymBaSDNp = num[i];
    }
    ave = (float) sum / n;
    if (KUbymBaSDNp -ave == ave - min)
        printf ("%d,%d", min, KUbymBaSDNp);
    else if (KUbymBaSDNp -ave > ave - min)
        printf ("%d", KUbymBaSDNp);
    else
        printf ("%d", min);
    return 0;
}

