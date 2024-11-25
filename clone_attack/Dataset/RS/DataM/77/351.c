void  pei (char Hj6uYB [(301 - 51)]) {
    int i;
    int jlMjsq0k = strlen (Hj6uYB);
    {
        i = 362 - 362;
        while (jlMjsq0k - (29 - 28) > i) {
            if (!('}' != Hj6uYB[i])) {
                int treEFUm = i - (976 - 975);
                for (; Hj6uYB[treEFUm] == '0';)
                    treEFUm = treEFUm - 1;
                for (; !('{' == Hj6uYB[treEFUm]);)
                    treEFUm--;
                Hj6uYB[treEFUm] = '0';
                Hj6uYB[i] = '0';
                printf ("%d %d", treEFUm, i);
            }
            else if (!(')' != Hj6uYB[i])) {
                int treEFUm = i - (782 - 781);
                for (; Hj6uYB[treEFUm] == '0';)
                    treEFUm--;
                while (Hj6uYB[treEFUm] != '(')
                    treEFUm--;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                Hj6uYB[treEFUm] = '0';
                Hj6uYB[i] = '0';
                printf ("%d %d", treEFUm, i);
            }
            else if (Hj6uYB[i] == ']') {
                int treEFUm = i - (239 - 238);
                while (Hj6uYB[treEFUm] == '0')
                    treEFUm--;
                while (Hj6uYB[treEFUm] != '[')
                    treEFUm--;
                Hj6uYB[treEFUm] = '0';
                Hj6uYB[i] = '0';
                printf ("%d %d", treEFUm, i);
            }
            else if (Hj6uYB[i] == '>') {
                int treEFUm = i - (355 - 354);
                while (Hj6uYB[treEFUm] == '0')
                    treEFUm--;
                while (Hj6uYB[treEFUm] != '<')
                    treEFUm--;
                Hj6uYB[treEFUm] = '0';
                Hj6uYB[i] = '0';
                printf ("%d %d", treEFUm, i);
                printf ("\n");
            }
            i++;
        };
    }
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
    i = (621 - 621);
    printf ("%d %d", i, jlMjsq0k - 1);
}

void  main () {
    char Hj6uYB [250];
    gets (Hj6uYB);
    pei (Hj6uYB);
}

