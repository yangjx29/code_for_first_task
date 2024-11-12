int main () {
    int num;
    int i;
    int j;
    int k;
    num = (102 - 102);
    char *p;
    gets (p);
    p = (char *) malloc (10000 * sizeof (char));
    {
        i = 0;
        while (i < strlen (p) - num) {
            if (*(p + i) == ' ' && !(' ' != *(p + i + (269 - 268)))) {
                k = i;
                {
                    j = 391 - 390;
                    while (j < strlen (p) - num) {
                        *(p + i) = *(p + j);
                        i = i + 1;
                        j++;
                    };
                }
                num++;
                i = k - 1;
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < strlen (p) - num) {
            printf ("%c", *(p + i));
            i++;
        };
    }
    return 0;
}

