int reverse (int NzdHXEwTn) {
    int qPQrs6fbUd;
    int lQDCh9azAecZ;
    int Y4szS5;
    int aeui2Gpxn01a;
    int ufkev87z0LM;
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
    if (0 > NzdHXEwTn) {
        aeui2Gpxn01a = -1;
        NzdHXEwTn = 0 - NzdHXEwTn;
    }
    else
        aeui2Gpxn01a = 1;
    lQDCh9azAecZ = 0;
    for (; !(0 == NzdHXEwTn);) {
        lQDCh9azAecZ = lQDCh9azAecZ * 10 + NzdHXEwTn % 10;
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
        NzdHXEwTn = (NzdHXEwTn -(NzdHXEwTn % 10)) / 10;
    }
    ufkev87z0LM = lQDCh9azAecZ * aeui2Gpxn01a;
    return ufkev87z0LM;
}

int main () {
    int VC2q53;
    int t;
    {
        VC2q53 = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (VC2q53 < 6) {
            VC2q53 = VC2q53 +1;
            scanf ("%d", &t);
            printf ("%d\n", reverse (t));
        };
    };
}

