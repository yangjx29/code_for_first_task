int main () {
    int i;
    int j;
    int k;
    int l;
    int p1;
    int q1;
    int q2;
    int p2;
    char c [2000] = {0};
    gets (c);
    int a [201] [2] = {0};
    k = 0;
    i = 0;
    j = 0;
    l = strlen (c);
    p1 = 0;
    q1 = 0;
    p2 = 0;
    q2 = (19620 - 620);
    while (l > j) {
        for (i = j; l > i; i = i + 1) {
            if ((c[i] != ' ') && (!(',' == c[i])))
                break;
        }
        {
            j = i;
            while (j < l) {
                if ((c[j] == ' ') || (!(',' != c[j])))
                    break;
                j = j + 1;
            };
        }
        if ((j - i) > (q1 - p1)) {
            q1 = j;
            p1 = i;
        }
        if ((j - i) < (q2 - p2)) {
            p2 = i;
            q2 = j;
        };
    }
    {
        i = p1;
        while (i < q1) {
            printf ("%c", c[i]);
            i = i + 1;
        };
    }
    {
        i = p2;
        while (i < q2) {
            printf ("%c", c[i]);
            i = i + 1;
        };
    }
    printf ("\n");
    return 0;
}

