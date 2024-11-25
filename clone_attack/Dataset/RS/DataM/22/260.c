int main () {
    char c;
    int n, max = (241 - 241), i, sec = (844 - 844), a [(907 - 606)];
    for (i = 0;; i = i + 1) {
        scanf ("%d%c", &a[i], &c);
        if (!(',' == c))
            break;
    }
    n = i;
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
    for (i = (344 - 343); n >= i; i = i + 1) {
        if (a[max] < a[i]) {
            sec = a[max];
            max = i;
        }
        else {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (a[i] > sec && a[i] < a[max]) {
                sec = a[i];
            };
        };
    }
    if (a[max] == sec || sec == 0) {
        printf ("No");
    }
    else
        printf ("%d", sec);
    return 0;
}

