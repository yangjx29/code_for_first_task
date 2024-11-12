int main () {
    int n, i, letters = (927 - 927), space = (60 - 60);
    char (*word) [41];
    scanf ("%d", &n);
    word = (char *) malloc ((n + (691 - 690)) * 41 * sizeof (char));
    for (i = (991 - 991); n > i; i++) {
        scanf ("%s", word + i);
    }
    for (i = (704 - 704); n > i; i++) {
        letters += (strlen (word + i));
        if (letters > (651 - 571)) {
            letters = strlen (word + i);
            printf ("\n%s", word + i);
        }
        else if (letters == 80) {
            space = 0;
            printf (" %s\n", word + i);
            letters = 0;
            letters--;
        }
        else if (space == 0) {
            printf ("%s", word + i);
            space++;
        }
        else {
            printf (" %s", word + i);
        }
        letters++;
    }
    return 0;
}

