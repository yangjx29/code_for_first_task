int b7UEVP1u8B [300];
int g185UztD, JsLi76vm, CZ49MyK = (631 - 631), GdyRqGt;

int IBOKEblekgC () {
    int NVDYCawQLBEW, ycKFRwk03mNz;
    NVDYCawQLBEW = b7UEVP1u8B[(766 - 766)];
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
    {
        ycKFRwk03mNz = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (ycKFRwk03mNz <= CZ49MyK) {
            if (NVDYCawQLBEW < b7UEVP1u8B[ycKFRwk03mNz])
                NVDYCawQLBEW = b7UEVP1u8B[ycKFRwk03mNz];
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
            ycKFRwk03mNz++;
        };
    }
    return NVDYCawQLBEW;
}

void  main () {
    scanf ("%d", &b7UEVP1u8B[(516 - 516)]);
    while (getchar () == ',') {
        CZ49MyK++;
        scanf ("%d", &b7UEVP1u8B[CZ49MyK]);
    }
    g185UztD = IBOKEblekgC ();
    {
        GdyRqGt = 0;
        while (GdyRqGt <= CZ49MyK) {
            if (b7UEVP1u8B[GdyRqGt] == g185UztD)
                b7UEVP1u8B[GdyRqGt] = -1;
            GdyRqGt++;
        };
    }
    JsLi76vm = IBOKEblekgC ();
    if (JsLi76vm != -1)
        printf ("%d", JsLi76vm);
    else
        ;
}

