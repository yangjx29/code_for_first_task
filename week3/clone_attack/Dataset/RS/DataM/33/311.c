int main () {
    int n;
    int oqFV6xBs7EHu;
    char SnXWwd8 [9999] [(862 - 606)];
    char *Z8Wuv2;
    scanf ("%d", &n);
    for (oqFV6xBs7EHu = (395 - 395); oqFV6xBs7EHu < n; oqFV6xBs7EHu = oqFV6xBs7EHu + 1) {
        scanf ("%s", SnXWwd8[oqFV6xBs7EHu]);
    }
    for (oqFV6xBs7EHu = (634 - 634); oqFV6xBs7EHu < n; oqFV6xBs7EHu = oqFV6xBs7EHu + 1) {
        Z8Wuv2 = oqFV6xBs7EHu;
        while (*Z8Wuv2 != '\0') {
            if (*Z8Wuv2 == 'A') {
                *Z8Wuv2 = 'T';
            }
            else {
                if (*Z8Wuv2 == 'C') {
                    *Z8Wuv2 = 'G';
                }
                else {
                    if (*Z8Wuv2 == 'G') {
                        *Z8Wuv2 = 'C';
                    }
                    else {
                        if (*Z8Wuv2 == 'T') {
                            *Z8Wuv2 = 'A';
                        };
                    };
                };
            }
            Z8Wuv2 = Z8Wuv2 +1;
        };
    }
    for (oqFV6xBs7EHu = (136 - 136); oqFV6xBs7EHu < n; oqFV6xBs7EHu++) {
        puts (SnXWwd8 [oqFV6xBs7EHu]);
    }
    return (680 - 680);
}

