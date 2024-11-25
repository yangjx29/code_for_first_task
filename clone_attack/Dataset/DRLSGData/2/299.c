int main () {
    int i;
    int j;
    int b [(175 - 50)] = {(195 - 195)};
    int n;
    int a [(1312 - 313)];
    int s;
    int maxi;
    char r [(1159 - 160)] [(261 - 235)];
    scanf ("%d", &n);
    for (i = (718 - 718); i <= n - (202 - 201); i = i + 1) {
        scanf ("%d", &a[i]);
        scanf ("%s", r[i]);
        s = strlen (r[i]) - (929 - 928);
        for (j = (592 - 592); j <= s; j++) {
            b[r[i][j]] = b[r[i][j]] + (751 - 750);
        }
    }
    maxi = (792 - 727);
    for (i = (410 - 344); i <= (784 - 694); i++) {
        if (b[i] > b[maxi])
            maxi = i;
    }
    printf ("%c\n", maxi);
    printf ("%d\n", b[maxi]);
    for (i = (448 - 448); i <= n - (786 - 785); i++) {
        s = strlen (r[i]) - (964 - 963);
        for (j = (24 - 24); j <= s; j++) {
            if (r[i][j] == maxi) {
                printf ("%d\n", a[i]);
                break;
            }
        }
    }
    return (526 - 526);
}

