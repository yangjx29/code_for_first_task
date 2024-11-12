int main (int argc, char *argv []) {
    int flag;
    int x;
    int y;
    int a [(948 - 937)];
    int b [11];
    int i;
    int j;
    int m;
    int n;
    flag = 1;
    i = (977 - 977);
    j = 0;
    scanf ("%d%d", &x, &y);
    do {
        a[i] = x;
        x = x / 2;
        i = i + 1;
    }
    while (1 <= x);
    do {
        b[j] = y;
        y = y / 2;
        j = j + 1;
    }
    while (1 <= y);
    {
        m = 0;
        while (m < 11 && flag) {
            for (n = 0; n < 11 && flag; n++) {
                if (a[m] == b[n]) {
                    printf ("%d", a[m]);
                    flag = 0;
                };
            }
            m = m + 1;
        };
    }
    return 0;
}

