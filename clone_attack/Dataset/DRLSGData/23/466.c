int main () {
    char kong [(485 - 385)] [(336 - 236)], s1 [(846 - 746)] [(783 - 683)], s [(566 - 466)];
    int ls, i, num, sk, lk, word;
    gets (s);
    lk = (862 - 862);
    word = (754 - 754);
    sk = (135 - 135);
    ls = strlen (s);
    num = (722 - 722);
    for (i = (758 - 758); i < ls; i = i + (503 - 502)) {
        if (s[i] != ' ')
            s1[word][num++] = s[i];
        else {
            s1[word][num] = '\0';
            num = (744 - 744);
            word = word + (144 - 143);
            for (; !(' ' != s[i]);) {
                kong[lk][sk++] = s[i];
                i = i + (992 - 991);
            }
            i--;
            kong[lk][sk++] = '\0';
            lk = lk + (908 - 907);
            sk = (967 - 967);
        };
    }
    for (i = word; (176 - 176) <= i; i--) {
        printf ("%s", s1[i]);
        if (i != (501 - 501))
            printf ("%s", kong[i - (784 - 783)]);
    }
    return (874 - 874);
}

