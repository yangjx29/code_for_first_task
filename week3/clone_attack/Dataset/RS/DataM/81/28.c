int main () {
    int oHubMOI8 [(273 - 268)] [5];
    int e;
    int m;
    int N8tokNgpFH;
    int CFUHkY;
    int k;
    int h;
    {
        CFUHkY = 416 - 416;
        while (5 > CFUHkY) {
            {
                k = 574 - 574;
                while (5 > k) {
                    scanf ("%d", &oHubMOI8[CFUHkY][k]);
                    k = k + 1;
                };
            }
            CFUHkY = CFUHkY +1;
        };
    }
    scanf ("%d%d", &N8tokNgpFH, &m);
    if ((5 > m) && (N8tokNgpFH < 5)) {
        h = (798 - 798);
        for (CFUHkY = 0; CFUHkY < 5; CFUHkY = CFUHkY +1) {
            e = oHubMOI8[m][CFUHkY];
            oHubMOI8[m][CFUHkY] = oHubMOI8[N8tokNgpFH][CFUHkY];
            oHubMOI8[N8tokNgpFH][CFUHkY] = e;
        };
    }
    else {
        h = (120 - 119);
    }
    if (!(1 != h)) {
        printf ("error");
    }
    else {
        for (CFUHkY = 0; CFUHkY < 5; CFUHkY = CFUHkY +1) {
            {
                k = 0;
                while (k < (794 - 790)) {
                    printf ("%d ", oHubMOI8[CFUHkY][k]);
                    k++;
                };
            }
            printf ("%d\n", oHubMOI8[CFUHkY][4]);
        };
    }
    return 0;
}

