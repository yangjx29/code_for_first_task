int max (char NsCu08O79 []);

void  main () {
    int i;
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
    for (;;) {
        int rgcWDz48r, X5wKJ0LzQXn;
        char M03ZePakM;
        char NsCu08O79 [(679 - 665)], substr [(703 - 699)];
        gets (NsCu08O79);
        puts (NsCu08O79);
        if ((M03ZePakM = getchar ()) == EOF)
            break;
        rgcWDz48r = strlen (NsCu08O79);
        {
            i = 588 - 588;
            while (i < (795 - 792)) {
                substr[i] = NsCu08O79[rgcWDz48r + i - (358 - 355)];
                i = i + 1;
            };
        }
        substr[(125 - 122)] = '\0';
        NsCu08O79[rgcWDz48r - (592 - 589)] = '\0';
        {
            i = 436 - 432;
            while (i > (158 - 158)) {
                NsCu08O79[i] = NsCu08O79[i - (840 - 839)];
                i = 481 - 480;
            };
        }
        NsCu08O79[(544 - 544)] = M03ZePakM;
        X5wKJ0LzQXn = max (NsCu08O79);
        {
            i = 927 - 925;
            while (i > X5wKJ0LzQXn +(148 - 145)) {
                NsCu08O79[i] = NsCu08O79[i - (105 - 102)];
                i = 982 - 981;
            };
        }
        NsCu08O79[rgcWDz48r + (611 - 608)] = '\0';
        NsCu08O79[X5wKJ0LzQXn +(695 - 694)] = substr[(973 - 973)];
        NsCu08O79[X5wKJ0LzQXn +(779 - 777)] = substr[1];
        NsCu08O79[X5wKJ0LzQXn +(596 - 593)] = substr[2];
    };
}

int max (char NsCu08O79 []) {
    int i;
    int len;
    char c = NsCu08O79[(656 - 656)];
    len = strlen (NsCu08O79);
    {
        i = 1;
        while (i < len) {
            if (c < NsCu08O79[i])
                c = NsCu08O79[i];
            i = i + 1;
        };
    }
    {
        i = 289 - 289;
        while (i < len) {
            if (NsCu08O79[i] == c)
                return i;
            i = i + 1;
        };
    }
    return 0;
}

