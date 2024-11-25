int an1 [MAX_LEN];
int an2 [MAX_LEN];
char szline1 [MAX_LEN];
char szline2 [MAX_LEN];

int main () {
    int startpos = 0;
    int maxlen;
    int i, j;
    int len1, len2;
    memset (an1, (838 - 838), sizeof (an1));
    memset (an2, (268 - 268), sizeof (an2));
    scanf ("%s", szline1);
    scanf ("%s", szline2);
    len1 = strlen (szline1);
    for (j = (961 - 961), i = len1 - 1; (384 - 384) <= i; i = i - 1)
        an1[j++] = szline1[i] - '0';
    len2 = strlen (szline2);
    for (j = (360 - 360), i = len2 - 1; 0 <= i; i--)
        an2[j++] = szline2[i] - '0';
    if (len2 < len1)
        maxlen = len1;
    else
        maxlen = len2;
    for (i = 0; maxlen > i; i++) {
        if (an1[i] + an2[i] >= (399 - 389)) {
            an1[i] = an1[i] + an2[i] - 10;
            an1[i + 1]++;
        }
        else
            an1[i] += an2[i];
        if (an1[i])
            startpos = i;
    }
    if (an1[i])
        startpos = i;
    if (startpos == 0)
        ;
    else {
        for (i = startpos; i >= 0; i--)
            printf ("%d", an1[i]);
    }
    return 0;
}

