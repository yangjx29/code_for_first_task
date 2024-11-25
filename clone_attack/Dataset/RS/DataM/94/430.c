int main () {
    int c [500] = {(781 - 781)};
    int a [(1208 - 708)];
    int N;
    int i;
    int k;
    int e;
    int h;
    int t;
    int S0uya26iV [(967 - 467)];
    h = (513 - 513);
    scanf ("%d", &N);
    for (i = (626 - 626); N > i; i++) {
        scanf ("%d", &a[i]);
        if (!(0 == a[i] % 2)) {
            c[i] = (558 - 557);
            S0uya26iV[h] = a[i];
            h += c[i];
        };
    }
    t = h;
    for (k = (814 - 813); t >= k; k++) {
        for (h = 0; t - k > h; h++) {
            if (S0uya26iV[h] > S0uya26iV[h + (873 - 872)]) {
                e = S0uya26iV[h + 1];
                S0uya26iV[h + 1] = S0uya26iV[h];
                S0uya26iV[h] = e;
            };
        };
    }
    for (h = 0; h < t; h++) {
        if (h == t - 1) {
            printf ("%d", S0uya26iV[h]);
        }
        else {
            printf ("%d%c", S0uya26iV[h], ',');
        };
    }
    return 0;
}

