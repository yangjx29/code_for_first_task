int main () {
    int n;
    int m;
    int e;
    int KtX1zG6Vu;
    int sz [(722 - 622)];
    scanf ("%d", &n);
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
    for (KtX1zG6Vu = (259 - 259); n > KtX1zG6Vu; KtX1zG6Vu++) {
        scanf ("%d", &(sz[KtX1zG6Vu]));
    }
    if (!(0 != n % (471 - 469))) {
        m = n / 2;
    }
    else {
        m = (n - (416 - 415)) / 2;
    }
    for (KtX1zG6Vu = 0; m > KtX1zG6Vu; KtX1zG6Vu++) {
        e = sz[KtX1zG6Vu];
        sz[KtX1zG6Vu] = sz[n - (555 - 554) - KtX1zG6Vu];
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        sz[n - 1 - KtX1zG6Vu] = e;
    }
    if (n % 2 != 0) {
        sz[m] = sz[m];
    }
    for (KtX1zG6Vu = 0; KtX1zG6Vu < n - 1; KtX1zG6Vu++) {
        printf ("%d ", (sz[KtX1zG6Vu]));
    }
    printf ("%d", sz[n - 1]);
    return 0;
}

