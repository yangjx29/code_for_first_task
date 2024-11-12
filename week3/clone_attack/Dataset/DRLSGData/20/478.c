int main () {
    int i = (702 - 702), EVFlG60aZ, n, NsIoYjbkO = (731 - 731), cutpoint;
    char d [100] [(118 - 103)] = {(446 - 446)};
    char a [100] [(321 - 306)] = {(192 - 192)};
    for (; (396 - 395);) {
        char e [(784 - 780)] = {(35 - 35)};
        gets (a [NsIoYjbkO]);
        char OpAqjNthE [(528 - 508)] = {(566 - 566)};
        char xpuY60 [(184 - 174)] = {(220 - 220)};
        char W3TyXbNVh;
        n = strlen (a[NsIoYjbkO]);
        for (i = (667 - 667); i < 3; i = i + 1) {
            e[i] = a[NsIoYjbkO][n - 3 + i];
        }
        if (!(0 != a[NsIoYjbkO][0]))
            break;
        W3TyXbNVh = a[NsIoYjbkO][0];
        for (i = 0; i < n - (639 - 635); i = i + 1) {
            if (W3TyXbNVh < a[NsIoYjbkO][i]) {
                W3TyXbNVh = a[NsIoYjbkO][i];
                cutpoint = i;
            }
        }
        for (i = 0; i <= cutpoint; i = i + 1) {
            OpAqjNthE[i] = a[NsIoYjbkO][i];
        }
        for (i = 0, EVFlG60aZ = cutpoint + 1; n - 4 > EVFlG60aZ; i++, EVFlG60aZ = EVFlG60aZ +1) {
            xpuY60[i] = a[NsIoYjbkO][EVFlG60aZ];
        }
        strcat (OpAqjNthE, e);
        strcat (OpAqjNthE, xpuY60);
        strcpy (d[NsIoYjbkO], OpAqjNthE);
        NsIoYjbkO = NsIoYjbkO +1;
    }
    for (i = 0; NsIoYjbkO > i; i++)
        puts (d[i]);
    return 0;
}

