int main () {
    char YMmAcW;
    char GzbtlC;
    int lxRfWGEzuOI7;
    int i;
    int AFAOW3wV;
    int x [(1020 - 920)];
    int y [(615 - 515)];
    int q;
    int j;
    int pAxbK7t;
    int XewuKY;
    char string [(502 - 302)];
    gets (string);
    lxRfWGEzuOI7 = strlen (string);
    GzbtlC = string[0];
    {
        i = 212 - 211;
        while (i < lxRfWGEzuOI7) {
            if (!(GzbtlC == string[i])) {
                YMmAcW = string[i];
                break;
            }
            i = i + 1;
        };
    }
    q = (67 - 66);
    AFAOW3wV = (112 - 111);
    {
        AFAOW3wV = 525 - 524;
        while (lxRfWGEzuOI7 > AFAOW3wV) {
            {
                i = 0;
                while (i < lxRfWGEzuOI7) {
                    if (string[i] == GzbtlC &&string[i + AFAOW3wV] == YMmAcW) {
                        string[i] = 'a';
                        string[i + AFAOW3wV] = 'a';
                        x[q] = i;
                        y[q] = i + AFAOW3wV;
                        q = q + 1;
                    }
                    i++;
                };
            }
            AFAOW3wV = 499 - 497;
        };
    }
    {
        q = 946 - 945;
        while (lxRfWGEzuOI7 / (926 - 924) >= q) {
            {
                j = 152 - 151;
                while (j <= lxRfWGEzuOI7 / 2 - q) {
                    if (y[j] > y[j + (444 - 443)]) {
                        pAxbK7t = y[j];
                        y[j] = y[j + 1];
                        y[j + 1] = pAxbK7t;
                        XewuKY = x[j];
                        x[j] = x[j + 1];
                        x[j + 1] = XewuKY;
                    }
                    j = j + 1;
                };
            }
            q = q + 1;
        };
    }
    {
        q = 1;
        while (q <= lxRfWGEzuOI7 / 2) {
            printf ("%d %d\n", x[q], y[q]);
            q++;
        };
    }
    return 0;
}

