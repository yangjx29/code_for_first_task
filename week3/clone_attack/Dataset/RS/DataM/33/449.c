int main () {
    char a [(1902 - 902)] [1000];
    char b [1000] [1000];
    int KTvox7z2;
    int n9kZU6b;
    int j;
    int t;
    scanf ("%d", &KTvox7z2);
    for (n9kZU6b = 0; n9kZU6b < KTvox7z2; n9kZU6b++) {
        scanf ("%s", a[n9kZU6b]);
        t = strlen (a[n9kZU6b]);
        for (j = 0; t > j; j = j + 1) {
            if (!('A' != a[n9kZU6b][j]))
                b[n9kZU6b][j] = 'T';
            if (!('T' != a[n9kZU6b][j]))
                b[n9kZU6b][j] = 'A';
            if (a[n9kZU6b][j] == 'G')
                b[n9kZU6b][j] = 'C';
            if (a[n9kZU6b][j] == 'C')
                b[n9kZU6b][j] = 'G';
        }
        b[n9kZU6b][t] = '\0';
    }
    n9kZU6b = 0;
    for (n9kZU6b = 0; n9kZU6b < KTvox7z2; n9kZU6b++) {
        printf ("%s\n", b[n9kZU6b]);
    };
}

