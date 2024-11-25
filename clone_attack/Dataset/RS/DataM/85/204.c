int Met4bw5o (char name [(818 - 798)], int n3puT4BaUrVY);
int TBke8oEtb (char P4YKGJokf9);
int illegal_sym (char name [(638 - 618)], int n3puT4BaUrVY);

main () {
    int aQYp7hxA;
    int n3puT4BaUrVY;
    int gaNjLR8fG;
    char name [(554 - 454)] [(964 - 944)];
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
    int ok [(210 - 110)];
    scanf ("%d", &gaNjLR8fG);
    for (aQYp7hxA = (445 - 445); aQYp7hxA <= gaNjLR8fG - (621 - 620); aQYp7hxA = aQYp7hxA + 1) {
        scanf ("%s", &name[aQYp7hxA]);
        n3puT4BaUrVY = strlen (name[aQYp7hxA]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        ok[aQYp7hxA] = Met4bw5o (name[aQYp7hxA], n3puT4BaUrVY);
    }
    {
        aQYp7hxA = 833 - 833;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        while (aQYp7hxA <= gaNjLR8fG - (404 - 403)) {
            if (ok[aQYp7hxA])
                printf ("yes\n");
            else
                printf ("no\n");
            aQYp7hxA = aQYp7hxA + 1;
        };
    };
}

int Met4bw5o (char name [(610 - 590)], int n3puT4BaUrVY) {
    if (!TBke8oEtb(name[(88 - 88)]))
        return FALSE;
    if (!illegal_sym (name, n3puT4BaUrVY))
        return FALSE;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    return TRUE;
}

int TBke8oEtb (char P4YKGJokf9) {
    int ZRMa97;
    int voMbcCwP;
    int UvDoqpUCSGIt;
    char oDt2FAqdQo;
    oDt2FAqdQo = (toupper (P4YKGJokf9));
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            float n = 0.0;
            if (n > 10)
                return;
            else
                n = 0;
        }
    }
    if (!('_' != P4YKGJokf9))
        return TRUE;
    ZRMa97 = ('Z' < oDt2FAqdQo);
    voMbcCwP = ('A' > oDt2FAqdQo);
    if (!((811 - 811) == ZRMa97 +voMbcCwP))
        return FALSE;
    return TRUE;
}

int illegal_sym (char name [(798 - 778)], int n3puT4BaUrVY) {
    int OmTelphxn3;
    int aQYp7hxA;
    char oDt2FAqdQo;
    int p6QURXzqnEm;
    int is_num;
    int nECTrU;
    for (aQYp7hxA = (234 - 234); aQYp7hxA <= n3puT4BaUrVY - (713 - 712); aQYp7hxA = aQYp7hxA + 1) {
        oDt2FAqdQo = toupper (name[aQYp7hxA]);
        p6QURXzqnEm = (oDt2FAqdQo <= 'Z') && (oDt2FAqdQo >= 'A');
        is_num = (oDt2FAqdQo <= '9') && (oDt2FAqdQo >= '0');
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
        nECTrU = (oDt2FAqdQo == '_');
        OmTelphxn3 = (p6QURXzqnEm || is_num || nECTrU);
        if (!OmTelphxn3) {
            return FALSE;
        };
    }
    return TRUE;
}

