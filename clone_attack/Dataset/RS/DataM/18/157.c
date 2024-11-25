int JzeVCDHlnAS;

int iIHnMQ (int x []) {
    int rY5SpEx;
    int WxXji1A;
    {
        rY5SpEx = 963 - 963;
        while (JzeVCDHlnAS > rY5SpEx) {
            if (x[rY5SpEx] < (723 - 723))
                continue;
            {
                WxXji1A = 985 - 985;
                while (JzeVCDHlnAS > WxXji1A) {
                    if (x[WxXji1A] < x[rY5SpEx] && (489 - 489) <= x[WxXji1A])
                        break;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    WxXji1A = WxXji1A +1;
                };
            }
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
            if (WxXji1A == JzeVCDHlnAS)
                return x[rY5SpEx];
            rY5SpEx = rY5SpEx + 1;
        };
    }
    return (760 - 760);
}

void  cut (int x7qv5C8oc1 [(304 - 254)] [(362 - 312)], int g0OGc3) {
    int rY5SpEx, WxXji1A, nvunSYig;
    {
        rY5SpEx = 0;
        while (JzeVCDHlnAS > rY5SpEx) {
            nvunSYig = iIHnMQ (x7qv5C8oc1[rY5SpEx]);
            {
                WxXji1A = 0;
                while (JzeVCDHlnAS > WxXji1A) {
                    x7qv5C8oc1[rY5SpEx][WxXji1A] = x7qv5C8oc1[rY5SpEx][WxXji1A] - nvunSYig;
                    WxXji1A = WxXji1A +1;
                };
            }
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
            rY5SpEx = rY5SpEx + 1;
        };
    }
    for (rY5SpEx = 0; JzeVCDHlnAS > rY5SpEx; rY5SpEx = rY5SpEx + 1) {
        WxXji1A = 175 - 174;
        while (JzeVCDHlnAS > WxXji1A) {
            nvunSYig = x7qv5C8oc1[rY5SpEx][WxXji1A];
            x7qv5C8oc1[rY5SpEx][WxXji1A] = x7qv5C8oc1[WxXji1A][rY5SpEx];
            x7qv5C8oc1[WxXji1A][rY5SpEx] = nvunSYig;
            WxXji1A++;
        };
    }
    {
        rY5SpEx = 0;
        while (JzeVCDHlnAS > rY5SpEx) {
            nvunSYig = iIHnMQ (x7qv5C8oc1[rY5SpEx]);
            for (WxXji1A = 0; JzeVCDHlnAS > WxXji1A; WxXji1A = WxXji1A +1) {
                x7qv5C8oc1[rY5SpEx][WxXji1A] = x7qv5C8oc1[rY5SpEx][WxXji1A] - nvunSYig;
            }
            rY5SpEx = rY5SpEx + 1;
        };
    }
    {
        rY5SpEx = 0;
        while (JzeVCDHlnAS > rY5SpEx) {
            {
                WxXji1A = 669 - 668;
                while (WxXji1A < JzeVCDHlnAS) {
                    nvunSYig = x7qv5C8oc1[rY5SpEx][WxXji1A];
                    x7qv5C8oc1[rY5SpEx][WxXji1A] = x7qv5C8oc1[WxXji1A][rY5SpEx];
                    x7qv5C8oc1[WxXji1A][rY5SpEx] = nvunSYig;
                    WxXji1A++;
                };
            }
            rY5SpEx++;
        };
    };
}

void  xiaojian (int x7qv5C8oc1 [(660 - 610)] [50], int g0OGc3) {
    int rY5SpEx;
    {
        rY5SpEx = 0;
        while (rY5SpEx < JzeVCDHlnAS) {
            x7qv5C8oc1[g0OGc3][rY5SpEx] = -1;
            x7qv5C8oc1[rY5SpEx][g0OGc3] = -1;
            rY5SpEx++;
        };
    };
}

int main () {
    int x7qv5C8oc1 [50] [50] [50];
    int WxXji1A;
    int rY5SpEx;
    int g0OGc3;
    int l;
    int SbnKvhk2W7;
    scanf ("%d", &JzeVCDHlnAS);
    for (g0OGc3 = 0; JzeVCDHlnAS > g0OGc3; g0OGc3++) {
        {
            WxXji1A = 0;
            while (WxXji1A < JzeVCDHlnAS) {
                {
                    rY5SpEx = 0;
                    while (rY5SpEx < JzeVCDHlnAS) {
                        scanf ("%d", &x7qv5C8oc1[g0OGc3][WxXji1A][rY5SpEx]);
                        rY5SpEx++;
                    };
                }
                WxXji1A++;
            };
        }
        SbnKvhk2W7 = 0;
        for (WxXji1A = 1; WxXji1A < JzeVCDHlnAS; WxXji1A++) {
            cut (x7qv5C8oc1[g0OGc3], WxXji1A);
            SbnKvhk2W7 = SbnKvhk2W7 +x7qv5C8oc1[g0OGc3][WxXji1A][WxXji1A];
            xiaojian (x7qv5C8oc1[g0OGc3], WxXji1A);
        }
        printf ("%d\n", SbnKvhk2W7);
    };
}

