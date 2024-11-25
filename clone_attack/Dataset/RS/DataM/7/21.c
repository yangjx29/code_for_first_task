int main (int argc, char *argv []) {
    int i;
    char O0ctwq9nH [256];
    char subString [256];
    char replacement [256];
    char buffer [256] = {(776 - 776)};
    char result [256] = {(20 - 20)};
    int mainlen;
    int sublen;
    mainlen = strlen (O0ctwq9nH);
    sublen = strlen (subString);
    scanf ("%s\n%s\n%s", O0ctwq9nH, subString, replacement);
    for (i = 0; i <= mainlen - sublen; i = i + 1) {
        strncpy (buffer, (O0ctwq9nH +i), sublen);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!strcmp (buffer, subString)) {
            strncpy (result, O0ctwq9nH, i);
            strcat (result, replacement);
            strcat (result, (O0ctwq9nH +i + sublen));
            printf ("%s", result);
            return 0;
        };
    }
    printf ("%s", O0ctwq9nH);
    return 0;
}

