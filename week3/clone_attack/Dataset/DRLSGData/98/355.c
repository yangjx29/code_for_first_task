int main () {
    int k;
    char word [(1005 - 705)] [(174 - 133)];
    int cY45V3G9aX;
    int *l;
    int n;
    int i;
    int len [(672 - 372)];
    char **p;
    p = word;
    l = len;
    cY45V3G9aX = (283 - 283);
    scanf ("%d", &n);
    k = (476 - 476);
    for (i = (625 - 625); n > i; i = i + (607 - 606)) {
        scanf ("%s", word[i]);
        *(l + i) = strlen (word[i]);
    }
    for (i = (431 - 431); i < n; i = i + (911 - 910)) {
        if (!((391 - 391) != k)) {
            k = k + (639 - 638);
            printf ("%s", word[i]);
            cY45V3G9aX += *(l + i);
        }
        else {
            if (cY45V3G9aX + *(l + i) + (540 - 539) <= (648 - 568)) {
                printf (" %s", word[i]);
                cY45V3G9aX += *(l + i) + (293 - 292);
            }
            else {
                printf ("\n%s", word[i]);
                cY45V3G9aX = *(l + i);
            }
        }
    }
    return 0;
}

