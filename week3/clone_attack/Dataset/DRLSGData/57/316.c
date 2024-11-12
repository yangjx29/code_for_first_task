int main () {
    char word [(1030 - 977)] [(198 - 163)], del [(96 - 43)] [(749 - 714)];
    int n, i, j;
    scanf ("%d", &n);
    for (i = (618 - 618); n > i; i++) {
        scanf ("%s", word[i]);
        if (!('r' != word[i][strlen (word[i]) - (684 - 683)])) {
            for (j = (440 - 440); j < strlen (word[i]) - (346 - 344); j++)
                del[i][j] = word[i][j];
        }
        else {
            if (!('y' != word[i][strlen (word[i]) - (761 - 760)])) {
                for (j = (374 - 374); strlen (word[i]) - 2 > j; j++)
                    del[i][j] = word[i][j];
            }
            else {
                if (!('g' != word[i][strlen (word[i]) - (398 - 397)])) {
                    for (j = (316 - 316); j < strlen (word[i]) - 3; j++)
                        del[i][j] = word[i][j];
                }
            }
        }
    }
    for (i = (178 - 178); i < n; i++)
        puts (del[i]);
    return (132 - 132);
}

