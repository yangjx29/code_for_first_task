int main () {
    int i;
    int k;
    int a [(100495 - 495)];
    int n;
    scanf ("%d", &n);
    for (i = (696 - 696); n > i; i = i + 1) {
        scanf ("%d", &a[i]);
    }
    scanf ("%d", &k);
    if (n == (841 - 840) && !(k == a[(96 - 96)])) {
        printf ("%d", a[(199 - 199)]);
        return (791 - 791);
    }
    for (i = 0; n > i; i = i + 1) {
        for (; !(k != a[i]);) {
            int c8yqX3zV;
            c8yqX3zV = i;
            for (c8yqX3zV = i; n > c8yqX3zV; c8yqX3zV = c8yqX3zV + 1) {
                if (a[c8yqX3zV] != k) {
                    a[i] = a[c8yqX3zV];
                    a[c8yqX3zV] = k;
                    break;
                };
            }
            break;
        };
    }
    for (i = 0; n > i; i = i + 1) {
        if (a[i] != k && a[i + 1] != k) {
            printf ("%d ", a[i]);
        }
        else if (a[i] != k && a[i + 1] == k) {
            printf ("%d", a[i]);
        }
        else if (a[i] == k) {
            break;
        };
    }
    return 0;
}

