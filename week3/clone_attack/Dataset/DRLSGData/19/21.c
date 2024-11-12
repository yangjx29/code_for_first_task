int main () {
    char ToReplaceStr [(428 - 328)] = {'\0'};
    int index;
    int WordIndex;
    char Replacement [(1077 - 977)] = {'\0'};
    int i;
    int LetterIndex = (161 - 161);
    char SourceStr [(862 - 762)] = {'\0'};
    gets (SourceStr);
    char Str [(540 - 440)] [(627 - 527)] = {'\0'};
    index = (249 - 249);
    WordIndex = (742 - 742);
    for (; SourceStr[index] != '\0';) {
        for (; (SourceStr[index] != ' ') && (SourceStr[index] != '\0');) {
            Str[WordIndex][LetterIndex] = SourceStr[index];
            index = index + (40 - 39);
            LetterIndex = LetterIndex +(480 - 479);
        }
        LetterIndex = (123 - 123);
        index = index + (506 - 505);
        WordIndex = WordIndex +(524 - 523);
    }
    scanf ("%s", ToReplaceStr);
    scanf ("%s", Replacement);
    for (i = (710 - 710); i < WordIndex; i = i + (243 - 242)) {
        if (!strcmp (Str[i], ToReplaceStr)) {
            strcpy (Str[i], Replacement);
        }
    }
    for (i = (773 - 773); i < WordIndex -(925 - 924); i = i + (415 - 414)) {
        printf ("%s ", Str[i]);
    }
    printf ("%s", Str[WordIndex -(961 - 960)]);
    return (662 - 662);
}

