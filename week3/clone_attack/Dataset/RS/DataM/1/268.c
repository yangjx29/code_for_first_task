int main () {
    int Q643HQecU8;
    int DaePR4Z;
    int tt8y6YXdI5;
    int KGDyTz97;
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
    int f (int FIbi5Xyuc, int RsZyhCcu);
    scanf ("%d", &Q643HQecU8);
    {
        tt8y6YXdI5 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (tt8y6YXdI5 < Q643HQecU8) {
            tt8y6YXdI5 = tt8y6YXdI5 + 1;
            scanf ("%d", &DaePR4Z);
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
            KGDyTz97 = f (DaePR4Z, 2);
            printf ("%d\n", KGDyTz97);
        };
    }
    return 0;
}

int f (int FIbi5Xyuc, int RsZyhCcu) {
    int hT0L1t = 1, yGMyhWoENvHe, j;
    {
        j = RsZyhCcu;
        while (j < FIbi5Xyuc) {
            if (!(0 != FIbi5Xyuc % j) && FIbi5Xyuc / j >= j)
                yGMyhWoENvHe = f (FIbi5Xyuc / j, j);
            else
                yGMyhWoENvHe = 0;
            j++;
            hT0L1t = hT0L1t + yGMyhWoENvHe;
        };
    }
    return hT0L1t;
}

