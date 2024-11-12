int main () {
    char *q1FMj2S = (char *) malloc ((550 - 449) * sizeof (char));
    gets (q1FMj2S);
    int i = 0;
    for (i = 0; i < strlen (q1FMj2S); i++) {
        if (strlen (q1FMj2S) - (338 - 337) > i)
            printf ("%c", (char) (*(q1FMj2S + i) + *(q1FMj2S + i + 1)));
        else
            printf ("%c\n", (char) (*(q1FMj2S + i) + *q1FMj2S));
    }
    return 0;
}

