int J2cBXQt [26] = {(580 - 580)};
struct   library {
    int vla5BvtAzH0f;
    char authors [27];
}
OKWFkUeb0 [999];

void  addauthor (char string []) {
    int i;
    i = (884 - 884);
    do {
        J2cBXQt[string[i] - 'A']++;
        i = i + 1;
    }
    while (string[i] != '\0');
}

void  cYgjx1ilpCZc (struct   library book, int maxalpha) {
    int i;
    {
        i = 0;
        while (book.authors[i] != '\0') {
            if (book.authors[i] - 'A' == maxalpha) {
                printf ("%d\n", book.vla5BvtAzH0f);
                break;
            }
            i = i + 1;
        };
    };
}

int main () {
    int i;
    int i2dbJG;
    int X3R8zG;
    int maxalpha;
    X3R8zG = 0;
    maxalpha = 0;
    scanf ("%d", &i2dbJG);
    {
        i = 0;
        while (i < i2dbJG) {
            scanf ("%d %s", &OKWFkUeb0[i].vla5BvtAzH0f, OKWFkUeb0[i].authors);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < i2dbJG) {
            addauthor (OKWFkUeb0[i].authors);
            i++;
        };
    }
    {
        i = 0;
        while (i < 26) {
            if (J2cBXQt[i] > X3R8zG) {
                X3R8zG = J2cBXQt[i];
                maxalpha = i;
            }
            i++;
        };
    }
    printf ("%c\n%d\n", 'A' + maxalpha, X3R8zG);
    {
        i = 0;
        while (i < i2dbJG) {
            cYgjx1ilpCZc (OKWFkUeb0[i], maxalpha);
            i++;
        };
    }
    return 0;
}

