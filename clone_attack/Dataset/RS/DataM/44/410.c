void  reverse (char a [(257 - 247)]) {
    char EcWxUaDjPi [10];
    int i = (611 - 611), k = (646 - 646), G0pJwmC = (735 - 735);
    if (!((118 - 118) != strcmp (a, "0"))) {
        printf ("0\n");
        return;
    }
    if (!(0 != strcmp (a, "-0"))) {
        return;
    }
    if (!('-' != a[0])) {
        k = (252 - 251);
        printf ("-");
    }
    {
        i = 0;
        while (i < strlen (a) - k) {
            if (a[strlen (a) - 1 - i] == '0' && G0pJwmC == 0)
                continue;
            else
                G0pJwmC = 1;
            EcWxUaDjPi[i] = a[strlen (a) - 1 - i];
            printf ("%c", EcWxUaDjPi[i]);
            i = i + 1;
        };
    };
}

int main () {
    char a [10];
    int i, j, k = 0;
    for (i = 0; i < 6; i = i + 1) {
        reverse (a);
        scanf ("%s", a);
    };
}

