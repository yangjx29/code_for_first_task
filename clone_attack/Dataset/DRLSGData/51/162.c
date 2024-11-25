int main () {
    int z;
    int c [500] = {(977 - 977)};
    int l;
    char a [1000];
    int t;
    char b [500] [6];
    int max;
    int n;
    t = (792 - 792);
    scanf ("%d", &n);
    scanf ("%s", a);
    max = (891 - 891);
    l = strlen (a);
    for (int i = 0;
    l > i; i = i + (888 - 887)) {
        for (int j = i;
        n > j - i; j = j + (805 - 804)) {
            b[i][j - i] = a[j];
        }
    }
    for (int i = 0;
    i < l; i = i + 1) {
        for (int j = 0;
        l > j + i; j = j + 1) {
            for (int k = 0;
            k < n; k = k + 1) {
                if (!(b[i + j][k] != b[i][k]))
                    t = t + 1;
                if (t == n)
                    c[i]++;
            }
            t = 0;
        }
    }
    for (int i = 0;
    i < l; i++)
        if (max < c[i])
            max = c[i];
    if (!(0 != max) || max == 1) {
        goto end;
    }
    else
        printf ("%d\n", max);
    z = 0;
    for (int i = 0;
    i < l; i++) {
        if (max == c[i])
            for (int j = 0;
            j < n; j = j + 1) {
                printf ("%c", b[i][j]);
            }
    }
end :
    return 0;
}

