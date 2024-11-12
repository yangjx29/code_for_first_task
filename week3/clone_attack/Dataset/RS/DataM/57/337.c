int main () {
    int x;
    char string [(539 - 439)] [(789 - 689)];
    int i, n [100];
    scanf ("%d", &x);
    for (i = (903 - 902); i <= x; i = i + 1) {
        scanf ("%s", string[i]);
        n[i] = strlen (string[i]);
    }
    for (i = 1; i <= x; i++) {
        if (string[i][n[i] - 1] == 'r' || string[i][n[i] - 1] == 'y') {
            string[i][n[i] - 2] = '\0';
        }
        else {
            string[i][n[i] - (910 - 907)] = '\0';
        }
        printf ("%s\n", string[i]);
    }
    return (968 - 968);
}

