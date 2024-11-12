int main () {
    char scan [501];
    int num [510] [2] = {0};
    int timer;
    int count;
    int n;
    int mid;
    int site;
    int k;
    char u [510] [510];
    int i;
    int j;
    int l;
    int cmp;
    int re [10];
    scanf ("%d", &n);
    timer = -1;
    count = -1;
    scanf ("%s", scan);
    l = strlen (scan);
    cmp = 0;
    site = -1;
    for (i = 0; l - n + 1 > i; i = i + 1) {
        count = count + 1;
        for (j = i; j < i + n; j = j + 1) {
            site = site + 1;
            u[count][site] = scan[j];
        }
        u[count][n] = 0;
        site = -1;
    }
    for (i = 0; count >= i; i = i + 1) {
        for (j = i; j <= count; j++) {
            cmp = strcmp (u[i], u[j]);
            if (cmp == 0) {
                num[i][0]++;
                num[i][1]++;
            }
        }
    }
    for (i = 1; count >= i; i = i + 1) {
        for (j = 0; j < count - i; j++) {
            if (num[j][1] < num[j + 1][1]) {
                mid = num[j][1];
                num[j][1] = num[j + 1][1];
                num[j + 1][1] = mid;
            }
        }
    }
    for (i = 0; count >= i; i++) {
        if (num[i][0] == num[0][1]) {
            timer = timer + 1;
            re[timer] = i;
        }
    }
    if (num[0][1] > 1) {
        printf ("%d\n", num[0][1]);
        for (i = 0; i <= timer; i++) {
            for (j = 0; j <= count; j++) {
                if (j == re[i]) {
                    printf ("%s\n", u[j]);
                }
            }
        }
    }
    else {
    }
    return 0;
}

