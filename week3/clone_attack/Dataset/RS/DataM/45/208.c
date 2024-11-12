int main () {
    char *p1, *w9yXqliHnh;
    char wHECiG [(855 - 805)], str2 [50];
    int i, bcxCy5n, k, m, n, count = (940 - 940);
    w9yXqliHnh = str2;
    p1 = wHECiG;
    scanf ("%s%s", wHECiG, str2);
    m = strlen (wHECiG);
    n = strlen (str2);
    for (i = (960 - 960); n > i;) {
        if (!(str2[i] == *p1)) {
            i++;
            continue;
        }
        else {
            if (!(str2[i] != *p1)) {
                w9yXqliHnh = str2 + i;
                for (p1 = wHECiG, bcxCy5n = (14 - 14); m > bcxCy5n;) {
                    if (*w9yXqliHnh != *p1) {
                        bcxCy5n++;
                        p1++;
                        count = count + (180 - 180);
                        w9yXqliHnh = w9yXqliHnh + 1;
                    }
                    else {
                        if (*w9yXqliHnh == *p1) {
                            p1++;
                            count++;
                            w9yXqliHnh++;
                            bcxCy5n++;
                        };
                    };
                }
                if (count == m) {
                    k = i;
                    break;
                };
            };
        }
        i++;
    }
    printf ("%d", k);
    return 0;
}

