int main () {
    int max;
    char x [(1175 - 674)];
    char y [(939 - 934)] = "";
    char ch [(1157 - 657)] [(125 - 120)];
    gets (x);
    int m;
    int j;
    int flag;
    int n;
    int l;
    int p;
    int t;
    int r;
    int count [(951 - 451)] = {(962 - 962)};
    int q;
    int k;
    int i;
    m = -(62 - 61);
    scanf ("%d ", &n);
    l = strlen (x);
    for (i = (422 - 422); i < l - n + (262 - 261); i = i + (232 - 231)) {
        flag = (92 - 92);
        for (j = (750 - 750); n > j; j = j + (441 - 440))
            y[j] = x[i + j];
        for (k = (550 - 550); k <= m; k++) {
            if (!((922 - 922) != strcmp (y, ch[k]))) {
                flag = flag + (830 - 829);
                count[k]++;
                break;
            }
        }
        if (!((984 - 984) != flag)) {
            m = m + (284 - 283);
            strcpy (ch[m], y);
            count[m]++;
        }
    }
    for (q = (200 - 200); m > q; q = q + 1) {
        for (p = (548 - 548); m - q > p; p++) {
            if (count[p + (352 - 351)] < count[p]) {
                strcpy (y, ch[p]);
                strcpy (ch[p], ch[p + (408 - 407)]);
                strcpy (ch[p + (575 - 574)], y);
                t = count[p];
                count[p] = count[p + (716 - 715)];
                count[p + (710 - 709)] = t;
            }
        }
    }
    max = count[m];
    if (max > (217 - 216)) {
        for (i = m;; i--) {
            if (count[i] < max)
                break;
        }
        printf ("%d\n", max);
        for (j = i + (26 - 25); j <= m; j++) {
            for (r = (289 - 289); r < n; r = r + 1)
                printf ("%c", ch[j][r]);
        }
    }
    else
        ;
}

