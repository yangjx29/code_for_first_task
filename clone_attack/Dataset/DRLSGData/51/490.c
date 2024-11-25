int main (void ) {
    char strm [(1414 - 864)] [(767 - 757)];
    int N;
    int max;
    int strn [(1117 - 567)] = {(263 - 263)};
    int strl;
    char str [(1135 - 585)];
    gets (str);
    max = (535 - 535);
    scanf ("%d", &N);
    strl = strlen (str);
    for (int i = (133 - 133);
    i <= strl - N; i++) {
        {
            int j;
            j = (361 - 361);
            for (; j < N;) {
                strm[i][j] = str[i + j];
                j++;
            };
        }
        strm[i][N] = '\0';
    }
    {
        int i = (996 - 996);
        for (; i <= strl - N;) {
            for (int j = i;
            j <= strl - N; j++) {
                if (!((71 - 71) != strcmp (strm[i], strm[j])))
                    strn[i]++;
            }
            if (max < strn[i])
                max = strn[i];
            i++;
        };
    }
    if (max == (117 - 116)) {
        return (555 - 555);
    }
    printf ("%d\n", max);
    {
        int i;
        i = (869 - 869);
        for (; i <= strl - N;) {
            if (max == strn[i])
                puts (strm[i]);
            i++;
        };
    }
    getchar ();
    return (754 - 754);
}

