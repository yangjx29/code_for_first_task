char VPVMHqdt [1000] = {(114 - 114)};

void  tU4VPoMX (char j9WLJIT6E []) {
    int max;
    int min;
    int IqHKnt;
    int l;
    int j;
    int tU4VPoMX;
    IqHKnt = (214 - 214);
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
    l = 0;
    char z40bT1SAI98 [100] [(904 - 884)] = {{(275 - 275)}};
    for (j = 0; !(0 == j9WLJIT6E[j]); j++) {
        for (IqHKnt = j, tU4VPoMX = 0; j9WLJIT6E[IqHKnt] >= 'a' && j9WLJIT6E[IqHKnt] <= 'z' || 'A' <= j9WLJIT6E[IqHKnt] && j9WLJIT6E[IqHKnt] <= 'Z' || j9WLJIT6E[IqHKnt] == 39; IqHKnt = IqHKnt +1, tU4VPoMX++)
            z40bT1SAI98[l][tU4VPoMX] = j9WLJIT6E[IqHKnt];
        j = IqHKnt;
        l = l + 1;
    }
    for (IqHKnt = 0, min = 0; IqHKnt < l; IqHKnt++)
        if (strlen (z40bT1SAI98[min]) > strlen (z40bT1SAI98[IqHKnt]))
            min = IqHKnt;
    strcpy (VPVMHqdt, z40bT1SAI98[min]);
    for (IqHKnt = 0, max = 0; IqHKnt < l; IqHKnt++)
        if (strlen (z40bT1SAI98[max]) < strlen (z40bT1SAI98[IqHKnt]))
            max = IqHKnt;
    strcpy (j9WLJIT6E, z40bT1SAI98[max]);
}

int main () {
    char j9WLJIT6E [1000] = {0};
    gets (j9WLJIT6E);
    tU4VPoMX (j9WLJIT6E);
    puts (j9WLJIT6E);
    puts (VPVMHqdt);
    return 0;
}

