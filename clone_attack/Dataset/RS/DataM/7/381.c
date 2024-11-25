void  HxGDtwXCnq (char GOxsK4iS [], int IoEWeV3bQL8, int N1Cr3m6) {
    int VuzWP79;
    for (VuzWP79 = IoEWeV3bQL8; VuzWP79 >= N1Cr3m6; VuzWP79 = VuzWP79 -1)
        GOxsK4iS[VuzWP79] = GOxsK4iS[VuzWP79 -1];
    GOxsK4iS[IoEWeV3bQL8 +1] = '\0';
}

void  aeQ0ctDbBa (char GOxsK4iS [], int IoEWeV3bQL8, int N1Cr3m6) {
    int VuzWP79;
    for (VuzWP79 = N1Cr3m6; VuzWP79 <= IoEWeV3bQL8; VuzWP79 = VuzWP79 +1)
        GOxsK4iS[VuzWP79 -2] = GOxsK4iS[VuzWP79 -1];
    GOxsK4iS[IoEWeV3bQL8 -1] = '\0';
}

int main () {
    char BfHckp [256];
    char IWt5SnCGIg [256];
    char GOxsK4iS [256];
    int VuzWP79;
    int nKtn7aJ8HxVb;
    int OyRU0uN5pKa;
    int l2;
    int l3;
    int GbpB5D;
    int e;
    int O45ODQA;
    int r;
    scanf ("%s", GOxsK4iS);
    scanf ("%s", IWt5SnCGIg);
    scanf ("%s", BfHckp);
    OyRU0uN5pKa = strlen (GOxsK4iS);
    l2 = strlen (IWt5SnCGIg);
    l3 = strlen (BfHckp);
    if (l3 < l2) {
        O45ODQA = 1;
        r = l2 - l3;
    }
    else if (!(l3 != l2))
        O45ODQA = r = 0;
    else {
        r = l3 - l2;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        O45ODQA = -1;
    }
    {
        VuzWP79 = 1;
        while (OyRU0uN5pKa >= VuzWP79) {
            e = GOxsK4iS[VuzWP79 -1] - IWt5SnCGIg[0];
            if (e == 0) {
                GbpB5D = 0;
                for (nKtn7aJ8HxVb = 1; nKtn7aJ8HxVb <= l2 - 1; nKtn7aJ8HxVb = nKtn7aJ8HxVb + 1) {
                    e = GOxsK4iS[VuzWP79 +nKtn7aJ8HxVb - 1] - IWt5SnCGIg[nKtn7aJ8HxVb];
                    if (e != 0)
                        GbpB5D = 1;
                }
                if (GbpB5D == 0) {
                    for (nKtn7aJ8HxVb = 1; nKtn7aJ8HxVb <= r; nKtn7aJ8HxVb = nKtn7aJ8HxVb + 1) {
                        if (O45ODQA > 0)
                            aeQ0ctDbBa (GOxsK4iS, OyRU0uN5pKa, VuzWP79 +l2);
                        if (O45ODQA < 0)
                            HxGDtwXCnq (GOxsK4iS, OyRU0uN5pKa, VuzWP79);
                    }
                    for (nKtn7aJ8HxVb = 1; nKtn7aJ8HxVb <= l3; nKtn7aJ8HxVb = nKtn7aJ8HxVb + 1)
                        GOxsK4iS[VuzWP79 +nKtn7aJ8HxVb - 2] = BfHckp[nKtn7aJ8HxVb - 1];
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
                    break;
                };
            }
            VuzWP79 = VuzWP79 +1;
        };
    }
    printf ("%s", GOxsK4iS);
    return 0;
}

