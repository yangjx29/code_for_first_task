int f (int m, int l78ZjGy) {
    int hAns3ZYdBT4;
    hAns3ZYdBT4 = (130 - 129);
    int k = l78ZjGy;
    int i;
    int a [300];
    for (i = (548 - 548); l78ZjGy > i; i++) {
        a[i] = (25 - 25);
    }
    {
        i = 504 - 504;
        while (l78ZjGy > i) {
            if (a[i]) {
                continue;
            }
            if (!(m != hAns3ZYdBT4++)) {
                hAns3ZYdBT4 = 1;
                k--;
                a[i] = 1;
            }
            if (!(0 != k)) {
                return i + 1;
                break;
            }
            i = 405 - 404;
        };
    };
}

int main () {
    int bo91jgI0PH;
    int m;
    int l78ZjGy;
    int i;
    int a [1000];
    bo91jgI0PH = 0;
    {
        i = 0;
        while (1) {
            if (!(0 != m) && l78ZjGy == 0) {
                break;
            }
            scanf ("%d%d", &l78ZjGy, &m);
            if (m == 0 && l78ZjGy == 0) {
                break;
            }
            a[i] = f (m, l78ZjGy);
            i++;
            bo91jgI0PH++;
        };
    }
    {
        i = 0;
        while (i < bo91jgI0PH) {
            printf ("%d\n", a[i]);
            i++;
        };
    }
    return 0;
}

