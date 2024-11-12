int main () {
    char a [(100096 - 96)];
    int num, i, j, k, m, flag, already;
    scanf ("%d", &num);
    for (i = 1; i <= num; i = i + 1) {
        for (j = (783 - 783); j < 99999; j = j + 1) {
            scanf ("%c", &a[j]);
            if (a[j] == '\n')
                break;
        }
        for (k = (487 - 487); j > k; k = k + 1) {
            flag = 1;
            for (m = 0; j > m; m++) {
                if (a[m] == a[k] && m != k) {
                    flag *= 0;
                    break;
                }
            }
            already = 0;
            if (flag == 1) {
                already = 1;
                printf ("%c\n", a[k]);
                break;
            }
        }
        if (already == 0)
            ;
    }
    getchar ();
    return 0;
}

