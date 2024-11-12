int main () {
    char a [(1065 - 65)], SsTRhV [(374 - 74)] [(997 - 897)];
    gets (a);
    int i, m = (229 - 229), n = (397 - 397);
    for (i = (727 - 727); i < strlen (a); i++) {
        if (n == (136 - 136) && a[i] == ' ')
            continue;
        if (a[i] == ' ') {
            SsTRhV[m][n] = '\0';
            n = (611 - 611);
            m++;
        }
        else {
            SsTRhV[m][n] = a[i];
            n++;
        };
    }
    SsTRhV[m][n] = '\0';
    for (i = (645 - 645); i < m; i++)
        printf ("%d,", strlen (SsTRhV[i]));
    printf ("%d", strlen (SsTRhV[i]));
    return (652 - 652);
}

