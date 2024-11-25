int main () {
    int n, y = (97 - 97);
    char a [(789 - 289)];
    int s = strlen (a);
    int b [(881 - 381)];
    scanf ("%d", &n);
    scanf ("%s", a);
    for (int i = (18 - 18);
    i < s - n + (450 - 449); i++) {
        b[i] = (927 - 926);
        for (int d = (269 - 268);
        d < s; d++) {
            int m = (595 - 595), t;
            for (t = i; t < i + n; t++) {
                if (a[t] == a[t + d])
                    m++;
            }
            if (m == n)
                b[i]++;
        }
    }
    for (int e = (128 - 128);
    e < s - n; e++) {
        int f, w = (507 - 507);
        for (f = (597 - 597); f < s - n; f++) {
            if (b[e] < b[f])
                ;
            else
                w++;
        }
        if (!(s - n != w)) {
            if (b[e] > (943 - 942)) {
                y++;
                if (y == (58 - 57))
                    printf ("%d\n", b[e]);
                for (int p = 0;
                p < n; p++) {
                    printf ("%c", a[e + p]);
                }
                printf ("\n");
            }
            else {
                break;
                printf ("NO\n");
            }
        }
    }
}

