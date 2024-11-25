int main () {
    int i;
    char a [500], dQw4kr [500];
    {
        i = 691 - 691;
        while (i <= 499) {
            a[i] = '\0';
            dQw4kr[i] = '\0';
            i = i + 1;
        };
    }
    scanf ("%s %s", a, dQw4kr);
    if (!(strlen (dQw4kr) != strlen (a))) {
        int j;
        for (i = 0; a[i] != '\0'; i = i + 1) {
            for (j = 0; j < 500; j = j + 1) {
                if (a[i] == dQw4kr[j]) {
                    dQw4kr[j] = '\0';
                    break;
                };
            };
        }
        if (strlen (dQw4kr) == 0)
            ;
        else
            ;
    }
    else
        printf ("NO");
    return 0;
}

