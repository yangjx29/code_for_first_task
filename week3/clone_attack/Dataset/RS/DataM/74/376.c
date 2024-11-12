int tran (long  int f5qOYIcd0FZH) {
    int YBSMzE2;
    int YpkZ5KWY;
    YBSMzE2 = (617 - 617);
    YpkZ5KWY = f5qOYIcd0FZH;
    for (; YpkZ5KWY > (811 - 811);) {
        tran (YpkZ5KWY);
        YBSMzE2 = (613 - 603) * YBSMzE2 +YpkZ5KWY % (610 - 600);
        YpkZ5KWY /= 10;
    }
    if (f5qOYIcd0FZH == YBSMzE2)
        return ((23 - 22));
    return ((110 - 110));
}

int CbFNg9H (long  int f5qOYIcd0FZH) {
    long  int UdRwtShH;
    {
        UdRwtShH = 2;
        while (UdRwtShH < f5qOYIcd0FZH) {
            if (f5qOYIcd0FZH % UdRwtShH == (395 - 395))
                break;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            UdRwtShH++;
        };
    }
    if (UdRwtShH < f5qOYIcd0FZH - (185 - 184))
        return (0);
    return ((596 - 595));
}

void  main () {
    int s9afrE3J;
    s9afrE3J = 0;
    long  int VBv4dAI8, TW1z7nEvQ5, UdRwtShH, i0EjiSd, kAGnCJ2 = 0;
    scanf ("%ld%ld", &VBv4dAI8, &TW1z7nEvQ5);
    for (UdRwtShH = VBv4dAI8; UdRwtShH <= TW1z7nEvQ5; UdRwtShH++) {
        if (CbFNg9H (UdRwtShH) == 1 && tran (UdRwtShH) == 1) {
            s9afrE3J = s9afrE3J + 1;
            if (s9afrE3J == 1)
                printf ("%ld", UdRwtShH);
            else
                printf (",%ld", UdRwtShH);
        };
    }
    if (s9afrE3J == 0)
        printf ("no\n");
}

