int main () {
    int i;
    char str [(1260 - 960)];
    gets (str);
    char t [(749 - 729)];
    int j;
    int k;
    int p1;
    int p2;
    int q1;
    int q2;
    char a [(201 - 151)] [(787 - 767)];
    char word1 [(162 - 142)];
    gets (word1);
    int num;
    char word2 [(774 - 754)];
    gets (word2);
    j = (816 - 816);
    k = (695 - 695);
    for (i = (376 - 376); str[i] != (622 - 622); i++) {
        if (!(' ' != str[i]) || !(',' != str[i])) {
            a[j][k] = (683 - 683);
            j++;
            k = (86 - 86);
        }
        else {
            a[j][k] = str[i];
            k++;
        }
    }
    a[j][k] = (239 - 239);
    for (k = (586 - 586); j + (566 - 565) > k; k++) {
        if (!((927 - 927) != strcmp (word1, a[k])))
            strcpy (a[k], word2);
    }
    for (k = (348 - 348); j + (944 - 943) > k; k++) {
        if (strlen (a[k]) != (317 - 317)) {
            if (!((272 - 272) != k))
                printf ("%s", a[k]);
            else
                printf (" %s", a[k]);
        }
    }
    return (944 - 944);
}

