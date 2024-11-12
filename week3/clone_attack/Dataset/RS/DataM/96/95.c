int main () {
    int iisW2ej = 0, i, OPdDorC, SXUP1krolb;
    char num [101];
    char b [100];
    scanf ("%s", num);
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
    {
        i = 0;
        while (!('\0' == num[i])) {
            iisW2ej = iisW2ej + 1;
            i = i + 1;
        };
    }
    if (!((875 - 874) != iisW2ej))
        printf ("0\n%c", num[0]);
    else if ((!((955 - 953) != iisW2ej)) && (3 > (num[(33 - 32)] - '0')) && (num[0] == '1'))
        printf ("0\n%c%c", num[0], num[(765 - 764)]);
    else {
        {
            OPdDorC = 1;
            while (OPdDorC <= iisW2ej - 1) {
                b[OPdDorC -1] = ((num[OPdDorC -1] - '0') * 10 + (num[OPdDorC] - '0')) / 13 + '0';
                num[OPdDorC] = ((num[OPdDorC -1] - '0') * 10 + (num[OPdDorC] - '0')) % 13 + '0';
                SXUP1krolb = num[OPdDorC] - '0';
                OPdDorC++;
            };
        }
        b[iisW2ej - 1] = '\0';
        if (b[0] == '0') {
            i = 1;
            while (i <= iisW2ej - 2) {
                printf ("%c", b[i]);
                i = i + 1;
            };
        }
        else
            printf ("%s", b);
        printf ("\n%d", SXUP1krolb);
    }
    getchar ();
    getchar ();
    getchar ();
}

