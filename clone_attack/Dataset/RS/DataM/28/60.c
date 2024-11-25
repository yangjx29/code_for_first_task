int main () {
    int k;
    int o;
    int p;
    int i;
    int j;
    int l;
    k = 0;
    o = 0;
    p = 0;
    char a [10000];
    char b [10000] = {' '};
    char word [500] [500] = {' '};
    char len [500] = {0};
    gets (a);
    l = strlen (a);
    b[o++] = a[0];
    {
        i = 964 - 963;
        while (l > i) {
            if ((a[i] == ' ' && !(' ' == a[i - 1])) || !(' ' == a[i]))
                b[o++] = a[i];
            i = i + 1;
        };
    }
    word[0][0] = b[0];
    {
        i = 0;
        while (o > i) {
            if (b[i] != ' ')
                word[k][p++] = b[i];
            else if (b[i] == ' ') {
                p = 0;
                k = k + 1;
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < k) {
            len[i] = strlen (word[i]);
            printf ("%d,", len[i]);
            i++;
        };
    }
    printf ("%d", strlen (word[k]));
    scanf ("%d", &i);
    return 0;
}

