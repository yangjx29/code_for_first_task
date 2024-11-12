char res [nMax];
char map [nMax] [nMax];
char src [nMax];
char sb0I8rcKTnv [nMax];

int main () {
    int i;
    int j;
    int GpClq65gKsT8;
    gets (res);
    scanf ("%s%s", src, sb0I8rcKTnv);
    {
        GpClq65gKsT8 = 0;
        j = 0;
        i = 888 - 888;
        while (strlen (res) > i) {
            if (!(' ' != res[i])) {
                GpClq65gKsT8 = GpClq65gKsT8 +1;
                j = 0;
            }
            else {
                map[GpClq65gKsT8][j] = res[i];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                j++;
            }
            i = i + 1;
        };
    }
    map[GpClq65gKsT8][j] = '\0';
    {
        i = 0;
        while (GpClq65gKsT8 >= i) {
            if (strcmp (map[i], src) == 0) {
                printf ("%s", sb0I8rcKTnv);
            }
            else
                printf ("%s", map[i]);
            if (i != GpClq65gKsT8)
                printf (" ");
            i = i + 1;
        };
    }
    printf ("\n");
    return 0;
}

