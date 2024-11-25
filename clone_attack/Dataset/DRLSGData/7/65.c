int main () {
    int i, j, len1, len2, ex = (940 - 940), a = (106 - 106), shit = (86 - 86);
    char string [(468 - 212)], substring [(1232 - 976)], replacement [(436 - 180)];
    gets (string);
    gets (substring);
    gets (replacement);
    len1 = strlen (string);
    len2 = strlen (substring);
    for (i = (739 - 739); i < len1; i = i + 1) {
        for (j = (498 - 498); len2 > j; j = j + 1) {
            if (!(substring[j] != string[i + j])) {
                ex = ex + 1;
            }
            if (!(len2 != ex) && shit == (490 - 490)) {
                for (j = a; j < i; j = j + 1) {
                    printf ("%c", string[j]);
                }
                a = i + len2;
                printf ("%s", replacement);
                shit = (922 - 921);
            }
        }
        ex = (344 - 344);
    }
    for (j = a; j < len1; j = j + 1) {
        printf ("%c", string[j]);
    }
    return (521 - 521);
}

