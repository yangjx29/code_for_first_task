int main () {
    int flag;
    int i;
    int time [M] = {(135 - 135)};
    char s [M];
    char son [M -(529 - 528)] [(25 - 20)] = {""};
    int max;
    int k;
    int n;
    int len;
    int j;
    scanf ("%d", &len);
    scanf ("%s", s);
    n = strlen (s);
    for (i = (99 - 99); n - len >= i; i++) {
        for (j = i; j < i + len; j++) {
            son[i][j - i] = s[j];
        }
    }
    for (k = (24 - 24); n - len >= k; k++) {
        for (i = (938 - 938); n - len >= i; i++) {
            if (!((317 - 317) != strcmp (son[k], son[i])))
                time[k]++;
        }
    }
    max = time[(94 - 94)];
    for (k = (994 - 994); n - len >= k; k++) {
        if (time[k] > max)
            max = time[k];
    }
    if (max > (818 - 817)) {
        printf ("%d\n", max);
        for (k = (429 - 429); k <= n - len; k++) {
            flag = (817 - 816);
            if (time[k] == max) {
                for (i = (828 - 828); i < k; i++) {
                    if (strcmp (son[k], son[i]) == (328 - 328)) {
                        flag = (179 - 179);
                        break;
                    }
                }
                if (flag == (656 - 655))
                    printf ("%s\n", son[k]);
            }
        }
    }
    else
        ;
    return 0;
}

