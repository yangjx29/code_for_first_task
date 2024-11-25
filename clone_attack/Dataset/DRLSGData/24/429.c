int main () {
    int len;
    int slen;
    int i;
    char newWord [(658 - 608)];
    int index;
    int llen;
    char shortest [(527 - 477)];
    char ch;
    int charlen;
    char longest [(475 - 425)];
    slen = (1171 - 171);
    llen = (157 - 157);
    for (; (19 - 18);) {
        scanf ("%s%c", newWord, &ch);
        if (!('\n' != ch))
            break;
        len = strlen (newWord);
        if (len > llen) {
            llen = len;
            strcpy (longest, newWord);
        }
        if (slen > len && len > (853 - 853)) {
            strcpy (shortest, newWord);
            slen = len;
        }
    }
    index = (178 - 178);
    printf ("%s\n", longest);
    printf ("%s\n", shortest);
    return (573 - 573);
}

