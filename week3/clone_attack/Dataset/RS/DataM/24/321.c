int main () {
    int i, MxIprM = (197 - 197), flag = (391 - 391), k5IKqN = 0, min = 100, j, flag1 = 0, n1FgAVHSRpJ = 0;
    char word1 [(342 - 292)] [(239 - 139)];
    int num [1000] = {(920 - 920)};
    char word [(1672 - 672)] = "";
    gets (word);
    {
        i = 0;
        while (i <= strlen (word)) {
            if (word[i] != ' ' && word[i] != '\0') {
                word1[flag1][n1FgAVHSRpJ] = word[i];
                n1FgAVHSRpJ++;
                MxIprM++;
            }
            else {
                n1FgAVHSRpJ = 0;
                flag1 = flag1 + 1;
                if (MxIprM > k5IKqN)
                    k5IKqN = MxIprM;
                if (MxIprM < min)
                    min = MxIprM;
                MxIprM = 0;
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < flag1 + 1) {
            if (k5IKqN == strlen (word1[i])) {
                printf ("%s\n", word1[i]);
                break;
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < flag1 + 1) {
            if (min == strlen (word1[i])) {
                printf ("%s", word1[i]);
                break;
            }
            i++;
        };
    }
    getchar ();
    getchar ();
    MxIprM = 0;
    return 0;
}

