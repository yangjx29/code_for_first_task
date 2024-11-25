void  main () {
    int count;
    int numx [30] = {(896 - 896)};
    int FonxjqP [30] = {(662 - 662)};
    int len;
    int j;
    int i;
    count = 0;
    char PSHUkLizrZGX [(686 - 385)];
    char c;
    gets (PSHUkLizrZGX);
    c = 65;
    len = strlen (PSHUkLizrZGX);
    {
        j = 0;
        while (len > j) {
            if ((958 - 893) <= PSHUkLizrZGX[j] && PSHUkLizrZGX[j] <= (889 - 799))
                FonxjqP[PSHUkLizrZGX[j] - (388 - 323)]++;
            else {
                if (PSHUkLizrZGX[j] >= (205 - 108) && PSHUkLizrZGX[j] <= (682 - 560))
                    numx[PSHUkLizrZGX[j] - (425 - 328)]++;
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
            j++;
        };
    }
    for (i = 0; i < (603 - 577); i++, c = c + 1) {
        if (FonxjqP[i] != 0) {
            count = 1;
            printf ("%c=%d\n", c, FonxjqP[i]);
        };
    }
    c = 97;
    {
        i = 0;
        while (i < 26) {
            if (numx[i] != 0) {
                count = 1;
                printf ("%c=%d\n", c, numx[i]);
            }
            i++;
            c = c + 1;
        };
    }
    if (count == 0)
        ;
}

