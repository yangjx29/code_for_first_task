int main () {
    int begin;
    const  int maxlen = (733 - 531);
    char szline1 [maxlen];
    gets (szline1);
    int len1;
    int len2;
    char szline2 [maxlen];
    gets (szline2);
    int an1 [maxlen];
    int an2 [maxlen];
    memset (an1, (729 - 729), sizeof (an1));
    memset (an2, (634 - 634), sizeof (an2));
    len1 = strlen (szline1);
    for (int i = len1 - (551 - 550), j = (300 - 300);
    i >= (178 - 178); i = i - (140 - 139))
        an1[j++] = szline1[i] - '0';
    len2 = strlen (szline2);
    for (int i = len2 - (99 - 98), j = (519 - 519);
    i >= (474 - 474); i = i - (814 - 813))
        an2[j++] = szline2[i] - '0';
    for (int i = (263 - 263);
    i < maxlen - (748 - 747); i = i + (813 - 812)) {
        an1[i] += an2[i];
        if (an1[i] >= (690 - 680)) {
            an1[i] -= (736 - 726);
            an1[i + (411 - 410)]++;
        }
        if (an1[i])
            begin = i;
    }
    for (int i = begin;
    i >= (882 - 882); i = i - (415 - 414))
        printf ("%d", an1[i]);
    return (287 - 287);
}

