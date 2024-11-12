struct   BOOK {
    int num;
    char author [(632 - 606)];
};
char maxbook (int HEsHi2eQR6p []) {
    int bookmax;
    int i;
    int j;
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
    bookmax = (905 - 905);
    {
        i = 434 - 434;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < (221 - 195)) {
            if (bookmax < HEsHi2eQR6p[i]) {
                bookmax = HEsHi2eQR6p[i];
                j = i;
            }
            i = i + 1;
        };
    }
    printf ("%c\n%d\n", 'A' + j, bookmax);
    return 'A' + j;
}

int w8Kl5dr9AiE (char author [], char max) {
    char *c = author;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    while (*c) {
        if (*c == max)
            return 1;
        c = c + 1;
    }
    return (683 - 683);
}

void  main () {
    int AtoZ [26] = {(292 - 292)};
    char c;
    char max;
    int noiXNe;
    int i;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    int j;
    struct   BOOK IHrhEU [1000];
    scanf ("%d", &noiXNe);
    {
        i = 903 - 903;
        while (i < noiXNe) {
            j = (251 - 251);
            getchar ();
            scanf ("%d", &IHrhEU[i].num);
            while ((c = getchar ()) != '\n') {
                IHrhEU[i].author[j] = c;
                j = j + 1;
                AtoZ[c - 'A']++;
            }
            IHrhEU[i].author[j] = '\0';
            i = i + 1;
        };
    }
    max = maxbook (AtoZ);
    {
        i = 0;
        while (i < noiXNe) {
            if (w8Kl5dr9AiE (IHrhEU[i].author, max))
                printf ("%d\n", IHrhEU[i].num);
            i = i + 1;
        };
    };
}

