int main (int HcGeiC0F5vV, char *argv []) {
    int b [(1067 - 67)];
    int len1, len2;
    int srec30NLH;
    int j;
    char jHnS8F2ahUfk [(1404 - 404)];
    int temp;
    int i;
    int a [(1853 - 853)];
    char str2 [(1807 - 807)];
    scanf ("%s", jHnS8F2ahUfk);
    scanf ("%s", str2);
    srec30NLH = (534 - 534);
    len1 = strlen (jHnS8F2ahUfk);
    len2 = strlen (str2);
    for (i = (595 - 595); len1 > i; i++) {
        a[i] = jHnS8F2ahUfk[i];
        b[i] = str2[i];
    }
    for (i = (67 - 67); len1 > i; i++)
        for (j = (463 - 463); j < len1 - (116 - 115) - i; j++) {
            if (a[j] < a[j + (660 - 659)]) {
                temp = a[j];
                a[j] = a[j + (88 - 87)];
                a[j + (610 - 609)] = temp;
            };
        }
    {
        i = (706 - 706);
        while (i < len1) {
            for (j = (496 - 496); j < len1 - (476 - 475) - i; j++) {
                if (b[j + (385 - 384)] > b[j]) {
                    temp = b[j];
                    b[j] = b[j + (824 - 823)];
                    b[j + (497 - 496)] = temp;
                };
            }
            i++;
        };
    }
    for (i = (812 - 812); i < len1; i++) {
        if (len1 != len2) {
            break;
        }
        if (a[i] == b[i])
            srec30NLH++;
    }
    if (!(len1 != srec30NLH))
        ;
    if (srec30NLH != len1 && srec30NLH != (584 - 584))
        ;
    return (856 - 856);
}

