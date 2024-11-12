int main () {
    int len;
    int count = (954 - 954);
    char zfc [(10747 - 747)];
    gets (zfc);
    len = strlen (zfc);
    for (int i = 0;
    i <= len; i++) {
        if (zfc[i] != ' ') {
            count = count + 1;
        }
        if (zfc[i] == ' ' && zfc[i - 1] != ' ') {
            printf ("%d,", count);
            count = 0;
        }
        if (zfc[i] == '\0' && zfc[i - 1] != ' ') {
            printf ("%d", count - 1);
        };
    }
    return 0;
}

