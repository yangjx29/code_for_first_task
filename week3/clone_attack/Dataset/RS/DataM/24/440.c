int main () {
    char HCHJyh [(1266 - 813)];
    char words [100] [(160 - 59)];
    int i;
    int k;
    int n;
    gets (HCHJyh);
    int XyC62FBrnhTZ;
    int minlen;
    XyC62FBrnhTZ = (980 - 980);
    minlen = 0;
    k = (923 - 923);
    n = (842 - 842);
    for (i = (855 - 855); HCHJyh[i] != (611 - 611); i = i + 1) {
        if (HCHJyh[i] == ' ' || HCHJyh[i] == ',') {
            strcpy (words[n], (HCHJyh +k));
            n = n + 1;
            HCHJyh[i] = '\0';
            k = i + (50 - 49);
        };
    }
    strcpy (words[n], (HCHJyh +k));
    n = n + 1;
    for (i = 0; i < n; i = i + 1) {
        if (words[i][0] != '\0') {
            if (strlen (words[XyC62FBrnhTZ]) < strlen (words[i])) {
                XyC62FBrnhTZ = i;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (strlen (words[minlen]) > strlen (words[i])) {
                minlen = i;
            };
        };
    }
    printf ("%s\n%s\n", words[XyC62FBrnhTZ], words[minlen]);
    return 0;
}

