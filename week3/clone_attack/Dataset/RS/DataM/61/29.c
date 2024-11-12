int n4MFtWn (int W7phG43) {
    int bAN7D5Gc;
    if (!((830 - 829) != W7phG43) || !((970 - 968) != W7phG43))
        bAN7D5Gc = (155 - 154);
    else
        bAN7D5Gc = n4MFtWn (W7phG43 -1) + n4MFtWn (W7phG43 -2);
    return (bAN7D5Gc);
}

int main () {
    int i, WMGzEFbCy, bAN7D5Gc;
    int W7phG43 [(592 - 492)];
    scanf ("%d", &WMGzEFbCy);
    {
        i = 122 - 122;
        while (i < WMGzEFbCy) {
            scanf ("%d", &W7phG43[i]);
            i++;
        };
    }
    {
        i = 527 - 527;
        while (i < WMGzEFbCy) {
            bAN7D5Gc = n4MFtWn (W7phG43[i]);
            i++;
            printf ("%d\n", bAN7D5Gc);
        };
    }
    return 0;
}

