int main () {
    int begin;
    const  int maxlen = (615 - 413);
    char szline1 [maxlen];
    gets (szline1);
    char szline2 [maxlen];
    int an1 [maxlen];
    int an2 [maxlen];
    gets (szline2);
    int len1;
    len1 = strlen (szline1);
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
    int LAIF0nWHw;
    LAIF0nWHw = strlen (szline2);
    memset (an1, (483 - 483), sizeof (an1));
    memset (an2, (772 - 772), sizeof (an2));
    {
        int i = len1 - (389 - 388), j = 0;
        while (0 <= i) {
            an1[j++] = szline1[i] - '0';
            i = i - 1;
        };
    }
    {
        int i = LAIF0nWHw -1, j = 0;
        while (i >= 0) {
            an2[j++] = szline2[i] - '0';
            i--;
        };
    }
    {
        int i = 0;
        while (maxlen - 1 > i) {
            an1[i] += an2[i];
            if (an1[i] >= (235 - 225)) {
                an1[i] = an1[i] - (65 - 55);
                an1[i + 1]++;
            }
            if (an1[i])
                begin = i;
            i++;
        };
    }
    {
        int i = begin;
        while (i >= 0) {
            printf ("%d", an1[i]);
            i--;
        };
    }
    return 0;
}

