void  turn (char *x5dFoO1KZP4x) {
    char b [(50 - 40)] [20], srqvZpINexEc [20] = "";
    int j;
    int uSzdhfHAltIG;
    int k;
    int l;
    j = 0;
    {
        uSzdhfHAltIG = 0;
        while (x5dFoO1KZP4x[uSzdhfHAltIG]) {
            if (x5dFoO1KZP4x[uSzdhfHAltIG] == ' ') {
                k = uSzdhfHAltIG;
                for (; !(' ' == x5dFoO1KZP4x[k - 1]) && k != 0;)
                    k = k - 1;
                {
                    l = 0;
                    while (uSzdhfHAltIG > k) {
                        b[j][l] = x5dFoO1KZP4x[k];
                        l = l + 1;
                        k = k + 1;
                    };
                }
                b[j][l] = '\0';
                j = j + 1;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            uSzdhfHAltIG = uSzdhfHAltIG + 1;
        };
    }
    k = uSzdhfHAltIG;
    while (x5dFoO1KZP4x[k - 1] != ' ' && k != 0)
        k = k - 1;
    for (l = 0; k < uSzdhfHAltIG; k = k + 1, l = l + 1)
        b[j][l] = x5dFoO1KZP4x[k];
    strcpy (x5dFoO1KZP4x, srqvZpINexEc);
    b[j][l] = '\0';
    j = j + 1;
    for (uSzdhfHAltIG = j - 1; uSzdhfHAltIG > 0; uSzdhfHAltIG = uSzdhfHAltIG - 1) {
        strcat (x5dFoO1KZP4x, b[uSzdhfHAltIG]);
        strcat (x5dFoO1KZP4x, " ");
    }
    strcat (x5dFoO1KZP4x, b[0]);
    strcat (x5dFoO1KZP4x, "\0");
}

main () {
    char x5dFoO1KZP4x [20];
    gets (x5dFoO1KZP4x);
    turn (x5dFoO1KZP4x);
    puts (x5dFoO1KZP4x);
}

