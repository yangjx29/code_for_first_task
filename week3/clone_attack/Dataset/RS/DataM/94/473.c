int main () {
    int DtjdBfDhcHpl;
    int f;
    int H73EeiIO = 0;
    int jsz [(1244 - 744)];
    int N;
    int sz [(1154 - 654)];
    int s;
    int i;
    s = (31 - 31);
    scanf ("%d", &N);
    for (i = (190 - 190); N > i; i = i + 1) {
        scanf ("%d", &sz[i]);
    }
    for (i = 0; N > i; i = i + 1) {
        if (!(0 == sz[i] % 2))
            s++;
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
        };
    }
    for (i = 0; N > i; i = i + 1) {
        if (!(0 == sz[i] % 2)) {
            jsz[H73EeiIO] = sz[i];
            H73EeiIO = H73EeiIO +1;
        };
    }
    for (f = 1; s >= f; f++) {
        for (i = 0; i < s - f; i++) {
            if (jsz[i] > jsz[i + 1]) {
                DtjdBfDhcHpl = jsz[i + 1];
                jsz[i + 1] = jsz[i];
                jsz[i] = DtjdBfDhcHpl;
            };
        };
    }
    printf ("%d", jsz[0]);
    for (i = 1; i < s; i++) {
        printf (",%d", jsz[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    return 0;
}

