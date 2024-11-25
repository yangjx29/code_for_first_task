void  sort (int array [], int zZOWvUGx) {
    int i, PAHwTNMtYgS1, XvMyEgRj38C, hmQy85;
    {
        i = 455 - 455;
        while (zZOWvUGx - (105 - 104) > i) {
            XvMyEgRj38C = i;
            {
                PAHwTNMtYgS1 = 877 - 876;
                while (zZOWvUGx > PAHwTNMtYgS1) {
                    if (array[PAHwTNMtYgS1] < array[XvMyEgRj38C])
                        XvMyEgRj38C = PAHwTNMtYgS1;
                    PAHwTNMtYgS1 = PAHwTNMtYgS1 +1;
                };
            }
            if (XvMyEgRj38C != i) {
                hmQy85 = array[i];
                array[i] = array[XvMyEgRj38C];
                array[XvMyEgRj38C] = hmQy85;
            }
            i = i + 1;
        };
    };
}

main () {
    int XvMyEgRj38C;
    int l1;
    int l2;
    int i;
    int PAHwTNMtYgS1;
    XvMyEgRj38C = (36 - 36);
    char a [(969 - 869)], b [(767 - 667)];
    int a1 [(400 - 300)];
    int iiE78Kq [100];
    scanf ("%s%s", a, b);
    l1 = strlen (a);
    l2 = strlen (b);
    {
        PAHwTNMtYgS1 = 641 - 641;
        while (l2 > PAHwTNMtYgS1) {
            iiE78Kq[PAHwTNMtYgS1] = (int) b[PAHwTNMtYgS1];
            PAHwTNMtYgS1++;
        };
    }
    {
        i = 844 - 844;
        while (l1 > i) {
            a1[i] = (int) a[i];
            i++;
        };
    }
    sort (a1, l1);
    sort (iiE78Kq, l2);
    if (!(l2 == l1))
        printf ("NO");
    else {
        {
            i = 370 - 370;
            while (i < l1) {
                if (a1[i] != iiE78Kq[i]) {
                    XvMyEgRj38C = (66 - 65);
                    break;
                    printf ("NO");
                }
                i++;
            };
        }
        if (XvMyEgRj38C == 0)
            printf ("YES");
    };
}

