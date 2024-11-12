int main () {
    int i, j;
    char a [300];
    int length;
    char zimu = 'a';
    int cishu [(417 - 391)] = {(76 - 76)}, zero = (684 - 684);
    scanf ("%s", a);
    length = strlen (a);
    {
        i = 0;
        while (i < length) {
            zimu = 'a';
            {
                j = 0;
                while (j < 26) {
                    if (a[i] == zimu) {
                        cishu[j]++;
                        break;
                    }
                    else {
                        zimu = zimu + 1;
                    }
                    j = j + 1;
                };
            }
            i++;
        };
    }
    zimu = 'a';
    {
        j = 0;
        while (j < 26) {
            if (cishu[j] != 0) {
                printf ("%c=%d\n", zimu, cishu[j]);
            }
            j++;
            zimu++;
        };
    }
    {
        j = 0;
        while (j < 26) {
            if (cishu[j] == 0) {
                zero++;
            }
            j++;
        };
    }
    if (zero == 26) {
    }
    return 0;
}

