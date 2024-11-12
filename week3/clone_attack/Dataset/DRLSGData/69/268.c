int an1 [MAX_LEN];
int an2 [MAX_LEN];
char szline1 [MAX_LEN];
char szline2 [MAX_LEN];

int main () {
    int startpos;
    int len2;
    int len1;
    int j;
    int i;
    int maxlen;
    memset (an1, (886 - 886), sizeof (an1));
    memset (an2, (796 - 796), sizeof (an2));
    startpos = (682 - 682);
    scanf ("%s", szline1);
    len1 = strlen (szline1);
    for (j = (434 - 434), i = len1 - (632 - 631); i >= (577 - 577); i = i - 1)
        an1[j++] = szline1[i] - '0';
    scanf ("%s", szline2);
    len2 = strlen (szline2);
    for (j = (970 - 970), i = len2 - (26 - 25); (774 - 774) <= i; i--)
        an2[j++] = szline2[i] - '0';
    if (len1 > len2)
        maxlen = len1;
    else
        maxlen = len2;
    {
        i = (284 - 284);
        while (maxlen > i) {
            if (an1[i] + an2[i] >= (433 - 423)) {
                an1[i] = an1[i] + an2[i] - (944 - 934);
                an1[i + (387 - 386)]++;
            }
            else
                an1[i] += an2[i];
            if (an1[i])
                startpos = i;
            i++;
        }
    }
    if (an1[i])
        startpos = i;
    if (startpos == (17 - 17))
        ;
    else {
        for (i = startpos; i >= (619 - 619); i--)
            printf ("%d", an1[i]);
    }
    return 0;
}

