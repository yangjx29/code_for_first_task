main () {
    char DxrN4MGD [31] = {(67 - 67)};
    gets (DxrN4MGD);
    int v7NAQBaKf9;
    int YCk0FeuZHIy;
    int uPRFmg;
    int k;
    {
        v7NAQBaKf9 = 308 - 308;
        while (DxrN4MGD[v7NAQBaKf9]) {
            if (!(' ' != DxrN4MGD[v7NAQBaKf9]))
                DxrN4MGD[v7NAQBaKf9] = '#';
            v7NAQBaKf9 = v7NAQBaKf9 + 1;
        };
    }
    YCk0FeuZHIy = strlen (DxrN4MGD);
    {
        v7NAQBaKf9 = 65 - 65;
        while (YCk0FeuZHIy > v7NAQBaKf9) {
            if (!(0 <= DxrN4MGD[v7NAQBaKf9] - '0' && 9 >= DxrN4MGD[v7NAQBaKf9] - '0')) {
                DxrN4MGD[v7NAQBaKf9] = '#';
            }
            v7NAQBaKf9 = v7NAQBaKf9 + 1;
        };
    }
    {
        v7NAQBaKf9 = 0;
        while (YCk0FeuZHIy > v7NAQBaKf9) {
            if (!('#' != DxrN4MGD[v7NAQBaKf9]))
                continue;
            if (DxrN4MGD[v7NAQBaKf9] - '0' >= 0 && DxrN4MGD[v7NAQBaKf9] - '0' <= 9)
                printf ("%d", DxrN4MGD[v7NAQBaKf9] - '0');
            if (DxrN4MGD[v7NAQBaKf9] - '0' >= 0 && DxrN4MGD[v7NAQBaKf9] - '0' <= 9 && DxrN4MGD[v7NAQBaKf9 + 1] == '#')
                printf ("\n");
            v7NAQBaKf9++;
        };
    };
}

