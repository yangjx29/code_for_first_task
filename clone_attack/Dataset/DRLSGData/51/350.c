int main () {
    int ss;
    char x [(1257 - 757)];
    int n;
    int l;
    int h;
    int k;
    int j;
    int i;
    int m;
    gets (x);
    char xx [500] [500];
    int s;
    int b [500];
    int max;
    max = b[0];
    scanf ("%d", &n);
    getchar ();
    s = -1;
    ss = 1;
    m = 0;
    l = 0;
    h = 0;
    k = 0;
    j = 0;
    i = 0;
    for (i = 0; i < 500; i++) {
        b[i] = 0;
    }
    for (i = 0; i < n; i++) {
        xx[j][k] = x[i];
        k++;
    }
    xx[j][k] = '\0';
    for (i = 0; x[i + n - 1] != '\0'; i++) {
        for (h = 0; j >= h; h++) {
            for (l = 0; n > l; l++) {
                ss = 1;
                if (x[i + l] != xx[h][l]) {
                    goto end1;
                    ss = 0;
                }
            }
            s = -1;
        end1 :
            if (!(1 != ss)) {
                goto end;
                s = h;
            }
        }
    end :
        if (!(-1 != s)) {
            j++;
            b[j]++;
            for (m = 0; n > m; m++) {
                xx[j][m] = x[i + m];
            }
            xx[j][m] = '\0';
        }
        else {
            b[s]++;
        }
    }
    k = 0;
    for (i = 0; j >= i; i++) {
        if (max <= b[i]) {
            max = b[i];
        }
    }
    if (!(1 != max)) {
    }
    else {
        printf ("%d\n", max);
        for (i = 0; i <= j; i++) {
            if (b[i] == max) {
                printf ("%s\n", xx[i]);
            }
        }
    }
    return 0;
}

