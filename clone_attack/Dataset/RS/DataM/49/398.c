int main () {
    int k;
    int HAe4BHMdUW;
    int flag;
    int i;
    int j;
    int N5ZCbY;
    int len;
    k = (436 - 436);
    HAe4BHMdUW = (735 - 735);
    flag = 0;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    char s [(1646 - 646)];
    gets (s);
    char k9IuZoBd [1000];
    char s2 [1000];
    len = strlen (s);
    j = (132 - 131);
    for (; j <= len - 1;) {
        for (i = k; i <= len - j - 1; i = i + 1) {
            for (N5ZCbY = 0; N5ZCbY <= j; N5ZCbY++) {
                k9IuZoBd[N5ZCbY] = s[i + N5ZCbY];
                s2[N5ZCbY] = s[i + j - N5ZCbY];
            }
            k9IuZoBd[N5ZCbY] = '\0';
            s2[N5ZCbY] = '\0';
            if (strcmp (k9IuZoBd, s2) == 0)
                printf ("%s\n", k9IuZoBd);
        }
        k++;
        if (k = len - j) {
            j = j + 1;
            k = 0;
        };
    }
    return 0;
}

