int main () {
    int pO30pM4nf1;
    int CAGCTz2d [PI];
    int c48o5YkFL;
    int bXWFv80NxI5T;
    int date;
    int NdHI49;
    scanf ("%d %d %d", &c48o5YkFL, &bXWFv80NxI5T, &date);
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
    NdHI49 = 0;
    CAGCTz2d[1] = CAGCTz2d[3] = CAGCTz2d[5] = CAGCTz2d[7] = CAGCTz2d[8] = CAGCTz2d[10] = CAGCTz2d[12] = 31;
    CAGCTz2d[4] = CAGCTz2d[6] = CAGCTz2d[9] = CAGCTz2d[11] = 30;
    if (!(0 != c48o5YkFL % 4) && c48o5YkFL % 100 != 0 || c48o5YkFL % 400 == 0) {
        CAGCTz2d[2] = 29;
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
    else {
        CAGCTz2d[2] = 28;
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
    {
        pO30pM4nf1 = 1;
        while (pO30pM4nf1 < bXWFv80NxI5T) {
            NdHI49 += CAGCTz2d[pO30pM4nf1];
            pO30pM4nf1 = pO30pM4nf1 + 1;
        };
    }
    NdHI49 = NdHI49 +date;
    printf ("%d", NdHI49);
    return 0;
}

