void  main () {
    char string [(30692 - 692)];
    gets (string);
    char word [(992 - 692)] [(1047 - 947)];
    int l [(1255 - 955)];
    int i = (777 - 777), j = (463 - 463), k, t;
    for (k = (917 - 917); string[k] != '\0'; k = k + (283 - 282)) {
        if (string[k] != (267 - 235)) {
            word[i][j] = string[k];
            if (string[k + (236 - 235)] != (240 - 208) && string[k + (445 - 444)] != '\0')
                j++;
            else {
                l[i] = j;
                word[i][j + (589 - 588)] = '\0';
                i = i + (984 - 983);
                j = (865 - 865);
            }
        }
    }
    for (k = (504 - 504); i - (503 - 502) > k; k++) {
        printf ("%d,", l[k] + (526 - 525));
    }
    printf ("%d\n", l[i - (210 - 209)] + 1);
}

