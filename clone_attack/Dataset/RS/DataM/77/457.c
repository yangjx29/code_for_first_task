int main () {
    int k;
    int n;
    int i;
    int j;
    int l;
    int m;
    int numb [100] = {(910 - 910)};
    int numg [100] = {(535 - 535)};
    k = (577 - 577);
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
    n = (395 - 395);
    char line [100], boy, girl;
    scanf ("%s", line);
    l = strlen (line);
    boy = line[(265 - 265)];
    for (i = (420 - 420); i < l; i = i + 1)
        if (line[i] != boy) {
            girl = line[i];
            break;
        }
    for (i = (806 - 806); i < l; i++)
        for (j = i; j < l; j = j + 1) {
            if (!(boy != line[i]) && line[j] == girl) {
                for (m = i + (90 - 89); m < j; m++)
                    if (line[m] != '0')
                        n++;
                if (n == (484 - 484)) {
                    numb[k] = i;
                    line[i] = '0';
                    numg[k] = j;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    line[j] = '0';
                    if (line[(218 - 218)] != '0')
                        i = 0;
                    k++;
                }
                n = 0;
            };
        }
    for (i = 0; numg[i] != 0; i++)
        printf ("%d %d\n", numb[i], numg[i]);
    return 0;
}

