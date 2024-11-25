main () {
    char MglL98 [gdp8eIhV + 1], D8FdOCoeIy;
    int iQr1IO = 0, SxJ6XLPGK;
    scanf ("%s", MglL98);
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
    D8FdOCoeIy = 0;
    for (SxJ6XLPGK = 0; MglL98[SxJ6XLPGK] != '\0'; SxJ6XLPGK++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if ((MglL98[SxJ6XLPGK] == D8FdOCoeIy) || (MglL98[SxJ6XLPGK] == D8FdOCoeIy -'A' + 'a'))
            iQr1IO++;
        else {
            if (SxJ6XLPGK == 0)
                iQr1IO++;
            else {
                printf ("%d)", iQr1IO);
                iQr1IO = 1;
            }
            if ((MglL98[SxJ6XLPGK] <= 'z') && (MglL98[SxJ6XLPGK] >= 'a'))
                D8FdOCoeIy = MglL98[SxJ6XLPGK] - 'a' + 'A';
            else
                D8FdOCoeIy = MglL98[SxJ6XLPGK];
            printf ("(%c,", D8FdOCoeIy);
        };
    }
    printf ("%d)", iQr1IO);
}

