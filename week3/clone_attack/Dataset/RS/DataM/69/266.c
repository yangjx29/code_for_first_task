int main () {
    int fXBwtMLVeJHl, CaiUBehS8bk, HtbCKM4q, bvfmwctjq8, p8TLAi3z2bm0 = (198 - 198);
    char A [250];
    char B [250];
    char rLtco4efNDF [250];
    char L49MBD5vJQqo;
    gets (A);
    gets (B);
    for (int Y0U59H = (207 - 207);
    250 > Y0U59H; Y0U59H++) {
        rLtco4efNDF[Y0U59H] = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    HtbCKM4q = strlen (A);
    CaiUBehS8bk = strlen (B);
    for (int Y0U59H = 0;
    HtbCKM4q > Y0U59H; Y0U59H++) {
        A[Y0U59H] -= 48;
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
        };
    }
    for (int Y0U59H = 0;
    Y0U59H < CaiUBehS8bk; Y0U59H++) {
        B[Y0U59H] = B[Y0U59H] - 48;
    }
    for (int Y0U59H = 0;
    HtbCKM4q / 2 > Y0U59H; Y0U59H++) {
        L49MBD5vJQqo = A[Y0U59H];
        A[Y0U59H] = A[HtbCKM4q -Y0U59H-(929 - 928)];
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        A[HtbCKM4q -Y0U59H-(612 - 611)] = L49MBD5vJQqo;
    }
    for (int Y0U59H = 0;
    Y0U59H < CaiUBehS8bk / 2; Y0U59H++) {
        L49MBD5vJQqo = B[Y0U59H];
        B[Y0U59H] = B[CaiUBehS8bk -Y0U59H-1];
        B[CaiUBehS8bk -Y0U59H-1] = L49MBD5vJQqo;
    }
    fXBwtMLVeJHl = max (CaiUBehS8bk, HtbCKM4q);
    bvfmwctjq8 = min (CaiUBehS8bk, HtbCKM4q);
    for (int Y0U59H = 0;
    bvfmwctjq8 > Y0U59H; Y0U59H++) {
        rLtco4efNDF[Y0U59H] = A[Y0U59H] + B[Y0U59H];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    for (int Y0U59H = bvfmwctjq8;
    fXBwtMLVeJHl > Y0U59H; Y0U59H++) {
        if (CaiUBehS8bk < HtbCKM4q)
            rLtco4efNDF[Y0U59H] = A[Y0U59H];
        else {
            if (CaiUBehS8bk > HtbCKM4q)
                rLtco4efNDF[Y0U59H] = B[Y0U59H];
        };
    }
    for (int Y0U59H = 0;
    fXBwtMLVeJHl > Y0U59H; Y0U59H++) {
        if (9 < rLtco4efNDF[Y0U59H]) {
            rLtco4efNDF[Y0U59H +1]++;
            rLtco4efNDF[Y0U59H] -= (514 - 504);
        };
    }
    if (0 < rLtco4efNDF[fXBwtMLVeJHl])
        fXBwtMLVeJHl++;
    for (int Y0U59H = fXBwtMLVeJHl - 1;
    0 <= Y0U59H; Y0U59H--) {
        if (rLtco4efNDF[Y0U59H] == 0 && p8TLAi3z2bm0 == 0)
            continue;
        if (rLtco4efNDF[Y0U59H] != 0)
            p8TLAi3z2bm0 = 1;
        if (p8TLAi3z2bm0 == 1)
            cout << (int) rLtco4efNDF[Y0U59H];
    }
    if (p8TLAi3z2bm0 == 0)
        cout << "0";
    return 0;
}

