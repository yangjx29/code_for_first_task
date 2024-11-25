void  process (char *qqmXewSB, int uZF7lo) {
    char *XoZaAYC2pQ, head;
    head = *qqmXewSB;
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
        XoZaAYC2pQ = qqmXewSB;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (XoZaAYC2pQ < qqmXewSB + uZF7lo - 1) {
            *XoZaAYC2pQ = *XoZaAYC2pQ+*(XoZaAYC2pQ +1);
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
            XoZaAYC2pQ = XoZaAYC2pQ +1;
        };
    }
    *(qqmXewSB + uZF7lo - 1) = *(qqmXewSB + uZF7lo - 1) + head;
    {
        XoZaAYC2pQ = qqmXewSB;
        while (XoZaAYC2pQ < qqmXewSB + uZF7lo) {
            printf ("%c", *XoZaAYC2pQ);
            XoZaAYC2pQ++;
        };
    };
}

int main () {
    char Qm9wbHiy7aB [101];
    gets (Qm9wbHiy7aB);
    char *qqmXewSB;
    int uZF7lo;
    uZF7lo = strlen (Qm9wbHiy7aB);
    qqmXewSB = Qm9wbHiy7aB;
    process (qqmXewSB, uZF7lo);
    return 0;
}

