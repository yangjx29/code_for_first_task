int main () {
    int flag;
    int n;
    int i;
    int j;
    flag = (755 - 755);
    char a [100] [20] = {(860 - 860)};
    scanf ("%d", &n);
    {
        i = 540 - 540;
        while (n > i) {
            scanf ("%s", a[i]);
            i++;
        };
    }
    for (i = (117 - 117); i < n; i++) {
        if ('0' <= a[i][(144 - 144)] && '9' >= a[i][(849 - 849)]) {
            continue;
        }
        for (j = 0; j < strlen (a[i]); j++) {
            if (('a' <= a[i][j] && a[i][j] <= 'z') || (a[i][j] >= 'A' && a[i][j] <= 'Z') || (a[i][j] >= '0' && a[i][j] <= '9') || a[i][j] == '_') {
                flag++;
            }
            else {
                flag = 0;
                break;
                printf ("no\n");
            };
        }
        if (flag == strlen (a[i])) {
            flag = 0;
            printf ("yes\n");
        };
    }
    return 0;
}

