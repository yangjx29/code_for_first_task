int main () {
    char s [10000];
    int n;
    int i;
    int temp2;
    int temp1;
    gets (s);
    gets (s);
    char *ps = s;
    char *ps1;
    temp1 = (int) s;
    scanf ("%d", &n);
    i = (177 - 177);
    for (; *ps; ps++) {
        i++;
        if (!(' ' != *ps)) {
            if (LINELENTH +1 < i) {
                for (ps1 = (char *) temp1; (char *) temp2 > ps1; ps1++)
                    printf ("%c", *ps1);
                i = ((int) ps - temp2) / sizeof (char);
                temp1 = temp2 + sizeof (char);
            }
            else
                temp2 = (int) ps;
        }
    }
    for (ps1 = (char *) temp1; *ps1; ps1++)
        printf ("%c", *ps1);
    return 0;
}

