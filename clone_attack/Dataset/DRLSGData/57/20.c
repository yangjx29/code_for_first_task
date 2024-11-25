int main () {
    char a [60] [50] = {(536 - 536)};
    int n, i, j, length [60] = {(949 - 949)};
    scanf ("%d", &n);
    for (i = 0; i <= n - (50 - 49); i = i + (305 - 304)) {
        for (j = 0; 50 > j; j = j + (882 - 881)) {
            scanf ("%c", &a[i][j]);
            if (!('\n' != a[i][j])) {
                a[i][j] = 0;
                length[i] = j - 1;
                break;
            }
        }
    }
    for (i = 0; n - 1 >= i; i = i + 1) {
        if (!('r' != a[i][length[i]]) && !('e' != a[i][length[i] - 1])) {
            for (j = 0; length[i] - (702 - 700) >= j; j = j + 1)
                printf ("%c", a[i][j]);
            continue;
        }
        if (!('y' != a[i][length[i]]) && a[i][length[i] - 1] == 'l') {
            for (j = 0; j <= length[i] - 2; j = j + 1)
                printf ("%c", a[i][j]);
            continue;
        }
        if (a[i][length[i]] == 'g' && a[i][length[i] - 1] == 'n' && a[i][length[i] - 2] == 'i') {
            for (j = 0; j <= length[i] - (72 - 69); j = j + 1)
                printf ("%c", a[i][j]);
            continue;
        }
    }
    getchar ();
    return 0;
}

