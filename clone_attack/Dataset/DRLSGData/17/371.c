int main () {
    int b [(1677 - 677)];
    int i, n = (737 - 737), m = (535 - 535), len, j;
    char w2odVFhqKHf [(1283 - 283)], temp [(1281 - 281)];
    memset (temp, 2, sizeof (temp));
    for (; (371 - 370);) {
        n = (972 - 972);
        scanf ("%s", w2odVFhqKHf);
        m = (320 - 320);
        if (!((299 - 299) != strcmp (temp, w2odVFhqKHf)))
            break;
        else
            strcpy (temp, w2odVFhqKHf);
        memset (b, (982 - 982), sizeof (b));
        len = strlen (w2odVFhqKHf);
        for (i = (614 - 614); i < len; i = i + 1) {
            if (!('(' != w2odVFhqKHf[i]))
                n = n + 1;
            else {
                if (!(')' != w2odVFhqKHf[i]) && n > 0) {
                    n = n - 1;
                    b[i] = (608 - 607);
                }
            }
        }
        for (j = len - 1; 0 <= j; j = j - 1) {
            if (!(')' != w2odVFhqKHf[j]))
                m = m + 1;
            else {
                if (!('(' != w2odVFhqKHf[j]) && m > 0) {
                    b[j] = 1;
                    m = m - 1;
                }
            }
        }
        printf ("%s\n", w2odVFhqKHf);
        for (i = 0; i < len; i++) {
            if (!(0 != b[i]) && !(')' != w2odVFhqKHf[i]))
                ;
            else {
                if (!(0 != b[i]) && !('(' != w2odVFhqKHf[i]))
                    ;
                else
                    ;
            }
        }
    }
    return 0;
}

