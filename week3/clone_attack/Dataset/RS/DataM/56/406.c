int main () {
    char NkR9zfi [(993 - 982)];
    char i;
    for (i = 1; NkR9zfi[i - 1] != '\n'; i = i + 1) {
        scanf ("%c", &NkR9zfi[i]);
    }
    for (i = 6; i <= 10; i = i + 1) {
        NkR9zfi[i] = NkR9zfi[11 - i];
    }
    for (i = 6; i <= 10; i = i + 1) {
        printf ("%c", NkR9zfi[i]);
    }
    return (0);
}

