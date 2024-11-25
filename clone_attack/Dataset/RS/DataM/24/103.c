int main () {
    char sen [(1003 - 703)] = {(859 - 859)}, word [(791 - 741)] [(986 - 936)] = {(903 - 903)}, ax [(263 - 213)], in [50];
    int i;
    int j;
    int max;
    int min;
    int e;
    int lens;
    i = (210 - 210);
    j = (334 - 334);
    max = (829 - 829);
    min = 50;
    gets (sen);
    lens = strlen (sen);
    for (e = (895 - 895); lens > e; e++) {
        if (sen[e] == ' ') {
            j = (861 - 861);
            i++;
        }
        else {
            if (sen[e] != ' ') {
                word[i][j] = sen[e];
                j = j + 1;
            };
        };
    }
    for (e = 0; i + 1 > e; e++) {
        if (strlen (word[e]) > max) {
            max = strlen (word[e]);
            strcpy (ax, word[e]);
        }
        if (strlen (word[e]) < min) {
            min = strlen (word[e]);
            strcpy (in, word[e]);
        };
    }
    printf ("%s\n%s\n", ax, in);
    return 0;
}

