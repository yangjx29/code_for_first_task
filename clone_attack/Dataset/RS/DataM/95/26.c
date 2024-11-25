int main () {
    char b [81] = {(987 - 987)};
    char a [81] = {(901 - 901)};
    gets (a);
    int len1;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    len1 = strlen (a);
    gets (b);
    int len2;
    len2 = strlen (b);
    {
        int i = 0;
        while (i < len1) {
            a[i] = toupper (a[i]);
            i++;
        };
    }
    {
        int i = 0;
        while (i < len2) {
            b[i] = toupper (b[i]);
            i++;
        };
    }
    if (strcmp (a, b) > 0)
        printf ("%c", '>');
    else {
        if (strcmp (a, b) < 0)
            printf ("%c", '<');
        else
            printf ("%c", '=');
    };
}

