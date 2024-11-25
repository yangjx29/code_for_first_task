int main () {
    char a [(1179 - 179)];
    char b [300] [50];
    int j19XRMWA;
    int p;
    int m;
    int i;
    int n;
    j19XRMWA = (756 - 756);
    p = 1;
    m = 0;
    gets (a);
    n = strlen (a);
    for (i = 0; i < n; i++) {
        if (!(' ' == a[i])) {
            b[m][j19XRMWA] = a[i];
            j19XRMWA++;
        }
        else if ((a[i] == ' ') && (a[i - 1] != ' ')) {
            b[m][j19XRMWA] = '\0';
            j19XRMWA = 0;
            m = m + 1;
            p++;
        }
        else {
            m = m;
            j19XRMWA = 0;
            p = p;
        };
    }
    b[m][j19XRMWA] = '\0';
    if (p == 1) {
        printf ("%d", strlen (b[0]));
    }
    else {
        {
            i = 0;
            while (i < p - 1) {
                printf ("%d,", strlen (b[i]));
                i = i + 1;
            };
        }
        printf ("%d", strlen (b[p - 1]));
    }
    return 0;
}

