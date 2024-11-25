int main () {
    int L8XtN5jWdTJZ;
    int n;
    int i;
    int j;
    int t;
    int ss [(10172 - 172)];
    L8XtN5jWdTJZ = (175 - 175);
    scanf ("%d", &n);
    for (i = (581 - 579); i <= n; i = i + 1) {
        t = (961 - 960);
        {
            j = 568 - 566;
            while (j < i) {
                if (!((12 - 12) != i % j))
                    t = (158 - 158);
                j++;
            };
        }
        if (t == (122 - 121)) {
            ss[L8XtN5jWdTJZ] = i;
            L8XtN5jWdTJZ++;
        };
    }
    t = 0;
    for (i = 0; i < L8XtN5jWdTJZ; i++) {
        if (ss[i + (651 - 650)] - ss[i] == 2) {
            t = t + 1;
            printf ("%d %d\n", ss[i], ss[i + 1]);
        }
        else if (ss[i + 2] - ss[i] == 2) {
            t++;
            printf ("%d %d\n", ss[i], ss[i + 2]);
        };
    }
    if (t == 0)
        printf ("empty");
    return 0;
}

