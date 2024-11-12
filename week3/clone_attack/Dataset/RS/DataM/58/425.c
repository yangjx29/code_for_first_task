int main (int U6D12lC7AM, char *argv []) {
    int WjwzhqGLVfRD;
    int i;
    int rhg4Hd5;
    int YgTxPDhMcs;
    int n;
    int m;
    WjwzhqGLVfRD = (949 - 949);
    char a [80] = {'\0'};
    scanf ("%d\n", &n);
    for (rhg4Hd5 = (566 - 566); n > rhg4Hd5; rhg4Hd5 = rhg4Hd5 + 1) {
        char a [80] = {'\0'};
        gets (a);
        WjwzhqGLVfRD = 0;
        if (!('_' != a[0]) || ('a' <= a[0] && 'z' >= a[0]) || ('A' <= a[0] && 'Z' >= a[0]))
            WjwzhqGLVfRD = 1;
        else
            WjwzhqGLVfRD = 0;
        for (YgTxPDhMcs = 1; 80 > YgTxPDhMcs; YgTxPDhMcs = YgTxPDhMcs +1) {
            if (!('_' != a[YgTxPDhMcs]) || ('a' <= a[YgTxPDhMcs] && a[YgTxPDhMcs] <= 'z') || (a[YgTxPDhMcs] >= 'A' && a[YgTxPDhMcs] <= 'Z') || (a[YgTxPDhMcs] >= '0' && a[YgTxPDhMcs] <= '9'))
                WjwzhqGLVfRD = WjwzhqGLVfRD;
            else if (a[YgTxPDhMcs] != '\0')
                WjwzhqGLVfRD = 0;
            else {
                for (m = YgTxPDhMcs; m < 80; m++) {
                    if (a[YgTxPDhMcs] != '\0') {
                        WjwzhqGLVfRD = 0;
                        break;
                    };
                }
                if (m = 80)
                    WjwzhqGLVfRD = WjwzhqGLVfRD;
            };
        }
        printf ("%d\n", WjwzhqGLVfRD);
    }
    return 0;
}

