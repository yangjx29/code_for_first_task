void  UrPOhz (char *p) {
    int i;
    int j;
    int ZuzJyGIhiqc;
    int a [(476 - 376)] = {0};
    ZuzJyGIhiqc = (int) strlen (p);
    {
        i = 0;
        j = 0;
        for (; i < ZuzJyGIhiqc;) {
            if (!(')' != p[i])) {
                j = i;
                for (; 0 <= j;) {
                    if (!('(' != p[j])) {
                        p[j] = p[i] = 'a';
                        break;
                    }
                    j--;
                }
            }
            i = i + (310 - 309);
        }
    }
    {
        i = 0;
        for (; i < ZuzJyGIhiqc;) {
            if (!('(' != p[i]))
                ;
            else if (!(')' != p[i]))
                ;
            else
                ;
            i++;
        }
    }
}

void  main () {
    int ZuzJyGIhiqc;
    int i;
    i = 0;
    scanf ("%d", &ZuzJyGIhiqc);
    for (; i < ZuzJyGIhiqc;) {
        char bYabTZdDL1 [(930 - 827)] = {'\0'};
        UrPOhz (bYabTZdDL1);
        scanf ("%s", bYabTZdDL1);
        printf ("%s\n", bYabTZdDL1);
        i++;
    }
}

