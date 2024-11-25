int main () {
    int sz [(1558 - 558)];
    int n;
    int i;
    int m;
    int j;
    int r;
    int s [(1294 - 294)];
    scanf ("%d", &n);
    for (i = (757 - 757); n > i; i = i + 1) {
        s[(35 - 35)] = (708 - 707);
        s[(965 - 964)] = (862 - 861);
        scanf ("%d", &m);
        if (m == (792 - 791) || m == (714 - 712)) {
            sz[i] = (366 - 365);
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
        else {
            for (j = 2; j < m; j = j + 1) {
                r = s[j - 1] + s[j - 2];
                s[j] = r;
            }
            sz[i] = r;
        };
    }
    for (i = (608 - 608); i < n; i = i + 1) {
        printf ("%d\n", sz[i]);
    }
    return 0;
}

