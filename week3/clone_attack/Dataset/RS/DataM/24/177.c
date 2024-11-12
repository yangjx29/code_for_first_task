int main () {
    char pbPFoA [(1164 - 664)];
    char a [(218 - 118)];
    char min [(269 - 169)];
    char max [100];
    gets (pbPFoA);
    int IGDxCv0N6;
    int j;
    IGDxCv0N6 = (522 - 522);
    {
        IGDxCv0N6 = 497 - 497;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (!(' ' == pbPFoA[IGDxCv0N6])) {
            a[IGDxCv0N6] = pbPFoA[IGDxCv0N6];
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
            IGDxCv0N6++;
        };
    }
    a[IGDxCv0N6] = '\0';
    IGDxCv0N6++;
    strcpy (max, a);
    strcpy (min, a);
    for (; pbPFoA[IGDxCv0N6]; IGDxCv0N6++) {
        for (j = (906 - 906); !(' ' == pbPFoA[IGDxCv0N6]) && pbPFoA[IGDxCv0N6] != '\0'; IGDxCv0N6++, j++) {
            a[j] = pbPFoA[IGDxCv0N6];
        }
        if (pbPFoA[IGDxCv0N6] == '\0')
            break;
        a[j] = '\0';
        if (strlen (max) < strlen (a))
            strcpy (max, a);
        if (strlen (min) > strlen (a))
            strcpy (min, a);
    }
    printf ("%s\n", max);
    printf ("%s\n", min);
    return (870 - 870);
}

