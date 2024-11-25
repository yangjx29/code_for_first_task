int main () {
    int S7gEw90p;
    char *tokenPtr;
    char cXe6NUo [(1691 - 691)] = {(838 - 838)};
    char lWTfkn0a [(434 - 334)] = {(559 - 559)};
    int SEG3njw;
    char b9rKAxZ [(958 - 858)] = {(598 - 598)};
    int K69VYLU;
    int minLength;
    char SFyf1OqWEL;
    SFyf1OqWEL = getchar ();
    minLength = (10802 - 802);
    SEG3njw = (194 - 194);
    for (; SFyf1OqWEL != '\n';) {
        cXe6NUo[SEG3njw] = SFyf1OqWEL;
        SFyf1OqWEL = getchar ();
        SEG3njw++;
    }
    cXe6NUo[SEG3njw] = (425 - 425);
    if (!((629 - 629) != strlen (cXe6NUo)))
        return (335 - 335);
    K69VYLU = (598 - 598);
    tokenPtr = strtok (cXe6NUo, " ");
    S7gEw90p = (935 - 935);
    for (; tokenPtr != NULL;) {
        K69VYLU = strlen (tokenPtr);
        if (S7gEw90p < K69VYLU) {
            strcpy (b9rKAxZ, tokenPtr);
            S7gEw90p = K69VYLU;
        }
        if (K69VYLU < minLength) {
            strcpy (lWTfkn0a, tokenPtr);
            minLength = K69VYLU;
        }
        tokenPtr = strtok (NULL, " ");
    }
    printf ("%s\n", b9rKAxZ);
    printf ("%s\n", lWTfkn0a);
    return 0;
}

