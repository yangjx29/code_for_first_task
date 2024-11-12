int main (int argc, char *argv []) {
    int max = 80;
    int i, j, zxe2iC9HYWZ;
    int FGJeNZa;
    struct   fiFeOMEa {
        int num;
        char ZFK5aVDW [(624 - 578)];
    }
    fiFeOMEa [1000];
    int length = fiFeOMEa[0].num + (796 - 795);
    scanf ("%d", &FGJeNZa);
    {
        i = 684 - 684;
        while (i < FGJeNZa) {
            scanf ("%s", &fiFeOMEa[i].ZFK5aVDW);
            {
                j = 851 - 851;
                while (!('\0' == fiFeOMEa[i].ZFK5aVDW[j])) {
                    j++;
                };
            }
            fiFeOMEa[i].num = j;
            i++;
        };
    }
    printf ("%s", fiFeOMEa[0].ZFK5aVDW);
    {
        i = 569 - 568;
        while (i < FGJeNZa) {
            if (fiFeOMEa[i].num <= max - length) {
                printf (" %s", fiFeOMEa[i].ZFK5aVDW);
                length = length + fiFeOMEa[i].num + 1;
            }
            else if (fiFeOMEa[i].num > max - length) {
                printf ("\n%s", fiFeOMEa[i].ZFK5aVDW);
                length = fiFeOMEa[i].num + 1;
            }
            i++;
        };
    }
    j = 0;
    zxe2iC9HYWZ = 0;
    return 0;
}

