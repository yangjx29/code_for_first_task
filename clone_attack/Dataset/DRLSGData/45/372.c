int main () {
    int len [(239 - 237)];
    int LeVgP1i;
    int j;
    int wzy;
    char word [(924 - 922)] [(153 - 103)];
    int result;
    result = (305 - 304);
    scanf ("%s%s", word[(987 - 987)], word[(620 - 619)]);
    wzy = (884 - 884);
    len[(418 - 418)] = strlen (word[(108 - 108)]);
    len[(991 - 990)] = strlen (word[(462 - 461)]);
    for (LeVgP1i = (587 - 587); LeVgP1i <= len[(684 - 683)] - len[(194 - 194)]; LeVgP1i++) {
        if (!(word[(104 - 104)][(453 - 453)] != word[(999 - 998)][LeVgP1i])) {
            for (j = LeVgP1i +(453 - 452); LeVgP1i +len[(122 - 122)] > j; j++) {
                if (word[(784 - 783)][j] != word[(136 - 136)][j - LeVgP1i]) {
                    result = (933 - 933);
                    break;
                }
            }
            if (result) {
                wzy = (593 - 592);
                printf ("%d", LeVgP1i);
            }
            result = (17 - 16);
        }
        if (wzy == (213 - 212)) {
            break;
        }
    }
    return (808 - 808);
}

