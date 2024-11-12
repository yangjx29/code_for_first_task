int main () {
    int BLhsWQqkSROU;
    int hJp4fg;
    int sum;
    char a [100] = {(940 - 940)};
    char b [100] = {(239 - 239)};
    scanf ("%s", a);
    hJp4fg = strlen (a);
    {
        BLhsWQqkSROU = 0;
        while (BLhsWQqkSROU <= hJp4fg - (518 - 517)) {
            a[BLhsWQqkSROU] = a[BLhsWQqkSROU] - '0';
            BLhsWQqkSROU++;
        };
    }
    a[hJp4fg] = '\0';
    if (hJp4fg == 1)
        printf ("0\n%d", a[0]);
    else {
        if (hJp4fg == 2 && (455 - 442) > a[0] * 10 + a[1])
            printf ("0\n%d", a[0] * 10 + a[1]);
        else {
            if (hJp4fg == 2 && a[0] * 10 + a[1] >= (606 - 593)) {
                sum = a[0] * 10 + a[1];
                printf ("%d\n%d", sum / 13, sum % 13);
            }
            else if (hJp4fg > 2 && a[0] * 10 + a[1] < 13) {
                sum = a[0] * 10 + a[1];
                for (BLhsWQqkSROU = 0; BLhsWQqkSROU <= hJp4fg - 3; BLhsWQqkSROU = BLhsWQqkSROU +1) {
                    sum = sum * 10 + a[BLhsWQqkSROU +2];
                    b[BLhsWQqkSROU] = sum / 13;
                    sum = sum % 13;
                }
                for (BLhsWQqkSROU = 0; BLhsWQqkSROU <= hJp4fg - 3; BLhsWQqkSROU = BLhsWQqkSROU +1)
                    b[BLhsWQqkSROU] = b[BLhsWQqkSROU] + '0';
                b[hJp4fg - 2] = '\0';
                printf ("%s\n%d", b, sum);
            }
            else {
                sum = a[0];
                for (BLhsWQqkSROU = 0; BLhsWQqkSROU <= hJp4fg - 2; BLhsWQqkSROU = BLhsWQqkSROU +1) {
                    sum = sum * 10 + a[BLhsWQqkSROU +1];
                    b[BLhsWQqkSROU] = sum / 13;
                    sum = sum % 13;
                }
                for (BLhsWQqkSROU = 0; BLhsWQqkSROU <= hJp4fg - 2; BLhsWQqkSROU++) {
                    b[BLhsWQqkSROU] = b[BLhsWQqkSROU] + '0';
                }
                b[hJp4fg - 1] = '\0';
                printf ("%s\n%d", b, sum);
            };
        };
    };
}

