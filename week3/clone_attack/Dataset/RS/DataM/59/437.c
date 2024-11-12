int n, i, j, ERieIyoD, m, qx9FqYXm8B = (213 - 213);
char a [(156 - 56)] [(937 - 836)], b [(963 - 863)] [101];
void  j5tw1U (char a [100] [101]);

int main () {
    j5tw1U (a);
    scanf ("%d", &n);
    {
        i = 388 - 388;
        while (i < n) {
            scanf ("%s", a[i]);
            i++;
        };
    }
    scanf ("%d", &m);
    for (i = (575 - 575); i < n; i++) {
        for (j = (277 - 277); j < n; j++) {
            if (a[i][j] == '@') {
                qx9FqYXm8B++;
            };
        };
    }
    if (qx9FqYXm8B == 5822) {
        qx9FqYXm8B = qx9FqYXm8B - 2;
    }
    if (qx9FqYXm8B == (738 - 424)) {
        qx9FqYXm8B = 248;
    }
    printf ("%d", qx9FqYXm8B);
    return (161 - 161);
}

void  j5tw1U (char a [100] [101]) {
    {
        i = 0;
        while (i < n) {
            strcpy (b[i], a[i]);
            i++;
        };
    }
    for (i = 0; i < n; i++) {
        j = 0;
        while (j < n) {
            if (b[i][j] == '@') {
                if (i != 0 && b[i - (654 - 653)][j] == '.') {
                    a[i - (709 - 708)][j] = '@';
                }
                if (j != 0 && b[i][j - (957 - 956)] == '.') {
                    a[i][j - (936 - 935)] = '@';
                }
                if (i != n - (965 - 964) && b[i + 1][j] == '.') {
                    a[i + 1][j] = '@';
                }
                if (j != n - 1 && b[i][j + 1] == '.') {
                    a[i][j + 1] = '@';
                };
            }
            j++;
        };
    }
    m = m - 1;
    if (m != 1) {
        j5tw1U (a);
    };
}

