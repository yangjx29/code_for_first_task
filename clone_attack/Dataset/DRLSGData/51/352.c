int main (int argc, char *argv []) {
    int k;
    int j;
    int len;
    int max;
    int num [700];
    int mark [700];
    char sz [700], gram [700] [10];
    int i;
    int n;
    max = 1;
    scanf ("%d", &n);
    k = -1;
    scanf ("%s", sz);
    len = strlen (sz);
    for (i = 0; i < len; i++) {
        num[i] = 1;
    }
    for (i = 0; len - n + 1 > i; i++) {
        for (j = 0; j < n + 1; j++) {
            if (j != n)
                gram[i][j] = sz[i + j];
            else
                gram[i][j] = '\0';
        }
    }
    for (i = 0; len - n + 1 > i; i++) {
        for (j = i + 1; len - n + 1 > j; j++) {
            if (!(0 != strcmp (gram[i], gram[j])))
                num[i]++;
        }
    }
    for (i = 0; i < len - n + 1; i++) {
        if (max < num[i]) {
            max = num[i];
            k = 0;
            mark[k] = i;
        }
        else if (num[i] == max && max != 1) {
            k++;
            mark[k] = i;
        }
    }
    if (!(-1 != k))
        ;
    else {
        for (i = 0; k >= i; i++) {
            if (i == 0)
                printf ("%d\n%s\n", num[mark[0]], gram[mark[0]]);
            else
                printf ("%s\n", gram[mark[i]]);
        }
    }
    return 0;
}

