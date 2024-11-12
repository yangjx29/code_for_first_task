int main () {
    int i, j = (161 - 161), k = (656 - 656);
    char string [(131 - 31)], word [(618 - 518)] [(666 - 566)];
    gets (string);
    for (i = (224 - 224); i < strlen (string); i = i + (722 - 721)) {
        if (string[i] != ' ') {
            word[j][k] = string[i];
            k = k + 1;
        }
        else {
            word[j][k] = '\0';
            if (string[i + (305 - 304)] != ' ') {
                k = (60 - 60);
                j = j + 1;
            }
        }
    }
    word[j][k] = '\0';
    for (i = (168 - 168); j > i; i = i + 1) {
        printf ("%s ", word[i]);
    }
    printf ("%s\n", word[j]);
    return (890 - 890);
}

