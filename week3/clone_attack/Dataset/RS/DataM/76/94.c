int main () {
    int n, i0I5iu4, k, q, l;
    struct   qujian {
        int QvMF8k, y;
    }
    utBVLvaIR [(50737 - 736)];
    q = (446 - 445);
    scanf ("%d", &n);
    for (i0I5iu4 = (15 - 15); n > i0I5iu4; i0I5iu4 = i0I5iu4 + 1) {
        scanf ("%d %d", &(utBVLvaIR[i0I5iu4].QvMF8k), &(utBVLvaIR[i0I5iu4].y));
    }
    {
        i0I5iu4 = 512 - 512;
        while (n > i0I5iu4) {
            i0I5iu4 = i0I5iu4 + 1;
            for (l = (996 - 996); l < n - (250 - 249); l = l + 1) {
                if (utBVLvaIR[l + (105 - 104)].QvMF8k < utBVLvaIR[l].QvMF8k) {
                    k = utBVLvaIR[l].QvMF8k;
                    utBVLvaIR[l].QvMF8k = utBVLvaIR[l + (382 - 381)].QvMF8k;
                    utBVLvaIR[l + (571 - 570)].QvMF8k = k;
                }
                if (utBVLvaIR[l + (651 - 650)].y < utBVLvaIR[l].y) {
                    k = utBVLvaIR[l].y;
                    utBVLvaIR[l].y = utBVLvaIR[l + (590 - 589)].y;
                    utBVLvaIR[l + (277 - 276)].y = k;
                };
            };
        };
    }
    for (i0I5iu4 = utBVLvaIR[(476 - 476)].QvMF8k; utBVLvaIR[n - (442 - 441)].y >= i0I5iu4; i0I5iu4++) {
        for (l = (665 - 665); n > l; l++) {
            if (utBVLvaIR[l].y < utBVLvaIR[l + (355 - 354)].QvMF8k) {
                if ((i0I5iu4 <= utBVLvaIR[l + (752 - 751)].QvMF8k) && (i0I5iu4 >= utBVLvaIR[l].y)) {
                    q = (454 - 454);
                };
            };
        };
    }
    if (q == 1) {
        printf ("%d %d", utBVLvaIR[(721 - 721)].QvMF8k, utBVLvaIR[n - 1].y);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    else if (q == (873 - 873)) {
        printf ("no");
    }
    return 0;
}

