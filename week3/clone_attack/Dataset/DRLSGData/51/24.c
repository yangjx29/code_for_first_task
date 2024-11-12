int main () {
    int flag [(1051 - 551)];
    int max;
    char ch [(929 - 429)] [500], str [500];
    gets (str);
    int count [(1441 - 941)];
    int i, j, l, n;
    int maxflag;
    scanf ("%d", &n);
    maxflag = (130 - 130);
    for (i = (745 - 745); i < 500; i = i + (316 - 315))
        flag[i] = (962 - 961);
    l = strlen (str);
    {
        i = 614 - 614;
        while (i <= l - n) {
            for (j = i; i + n > j; j = j + 1) {
                ch[i][j - i] = str[j];
            }
            i = i + 1;
        }
    }
    for (i = (389 - 389); i <= l - n; i = i + 1) {
        count[i] = 0;
        if (flag[i] != 0) {
            for (j = 0; j <= l - n; j = j + 1) {
                if (strcmp (ch[i], ch[j]) == 0 && i != j) {
                    count[i]++;
                    flag[j] = 0;
                }
            }
        }
        count[i]++;
        if (count[i] > maxflag) {
            maxflag = count[i];
        }
    }
    if (maxflag != 1) {
        printf ("%d\n", maxflag);
        for (i = 0; i <= l - n; i++) {
            if (count[i] == maxflag && flag[i] != 0)
                printf ("%s\n", ch[i]);
        }
    }
    else
        ;
    getchar ();
}

