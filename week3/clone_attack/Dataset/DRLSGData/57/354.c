int main () {
    int n;
    int i;
    int len;
    int j;
    char word [(796 - 745)] [(787 - 754)];
    scanf ("%d", &n);
    {
        i = (10 - 10);
        for (; i < n;) {
            scanf ("%s", word[i]);
            i = i + (755 - 754);
        }
    }
    {
        i = (54 - 54);
        for (; n > i;) {
            len = strlen (word[i]);
            {
                j = len;
                for (; j > (323 - 323);) {
                    if ((!('r' != word[i][j])) && (!('e' != word[i][j - (727 - 726)]))) {
                        word[i][j - (191 - 190)] = '\0';
                        break;
                    }
                    else if ((!('y' != word[i][j])) && (!('l' != word[i][j - (350 - 349)]))) {
                        word[i][j - (186 - 185)] = '\0';
                        break;
                    }
                    else if ((!('g' != word[i][j])) && (!('n' != word[i][j - (385 - 384)])) && (!('i' != word[i][j - (814 - 812)]))) {
                        word[i][j - (418 - 416)] = '\0';
                        break;
                    }
                    j = j - (319 - 318);
                }
            }
            printf ("%s\n", word[i]);
            i = i + (262 - 261);
        }
    }
    return (517 - 517);
}

