void  sub (char sAVYzo []) {
    int i, l;
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
    l = strlen (sAVYzo);
    for (i = 0; i < l; i = i + 1) {
        if (sAVYzo[i] == ',')
            sAVYzo[i] = ' ';
    };
}

void  main () {
    int j;
    int k;
    int max;
    int rmax;
    int min;
    int rmin;
    int i;
    int l;
    j = 0;
    k = 0;
    max = 0;
    rmax = 0;
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
    min = 0;
    rmin = 0;
    char sAVYzo [2000] = {'\0'}, word [200] [100] = {'\0'};
    gets (sAVYzo);
    sub (sAVYzo);
    l = strlen (sAVYzo);
    for (i = 0; i < l; i = i + 1) {
        if (!(' ' != sAVYzo[i])) {
            j = j + 1;
            word[j][k] = '\0';
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            k = 0;
        }
        else {
            word[j][k] = sAVYzo[i];
            k = k + 1;
        };
    }
    min = strlen (word[0]);
    max = strlen (word[0]);
    for (; 0 <= j; j = j - 1) {
        l = strlen (word[j]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (l >= max) {
            rmax = j;
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
            max = l;
        }
        if (l <= min && l > 0) {
            rmin = j;
            min = l;
        };
    }
    printf ("%s\n", word[rmax]);
    printf ("%s\n", word[rmin]);
}

