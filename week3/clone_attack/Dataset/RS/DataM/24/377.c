int main () {
    char MswnlC61o [(1817 - 818)];
    int len [(169 - 119)];
    int uPAZtqwG;
    int oBS8YxAbkCV;
    int B;
    int b;
    int i;
    int oZFzlALYdRBV;
    int W5d3UVhJ9tyW;
    int epxfKSVLte2;
    uPAZtqwG = (340 - 340);
    oBS8YxAbkCV = (109 - 109);
    B = 0;
    char xqANa4pu5EQ [50] [50];
    gets (MswnlC61o);
    for (oBS8YxAbkCV = 0; 50 > oBS8YxAbkCV; oBS8YxAbkCV = oBS8YxAbkCV + 1) {
        for (b = B, i = 0; 999 > b, 50 > i; b = b + 1, i = i + 1) {
            if ((!(' ' == MswnlC61o[b])) && (!('\0' == MswnlC61o[b]))) {
                xqANa4pu5EQ[oBS8YxAbkCV][i] = MswnlC61o[b];
            }
            else {
                if ((!(' ' != MswnlC61o[b])) && (!('\0' == MswnlC61o[b]))) {
                    uPAZtqwG = uPAZtqwG + 1;
                    B = b + (860 - 859);
                    break;
                }
                else if (!('\0' != MswnlC61o[b])) {
                    uPAZtqwG++;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    break;
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
            xqANa4pu5EQ[oBS8YxAbkCV][i + 1] = '\0';
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (MswnlC61o[b] == '\0') {
            break;
        };
    }
    W5d3UVhJ9tyW = 0;
    {
        oZFzlALYdRBV = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (oZFzlALYdRBV < uPAZtqwG) {
            len[oZFzlALYdRBV] = strlen (xqANa4pu5EQ[oZFzlALYdRBV]);
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
            oZFzlALYdRBV = oZFzlALYdRBV + 1;
        };
    }
    epxfKSVLte2 = 0;
    for (oZFzlALYdRBV = 1; oZFzlALYdRBV < uPAZtqwG; oZFzlALYdRBV = oZFzlALYdRBV + 1) {
        if (len[oZFzlALYdRBV] > len[epxfKSVLte2]) {
            epxfKSVLte2 = oZFzlALYdRBV;
        }
        else if (len[oZFzlALYdRBV] < len[W5d3UVhJ9tyW]) {
            W5d3UVhJ9tyW = oZFzlALYdRBV;
        };
    }
    printf ("%s\n%s\n", xqANa4pu5EQ[epxfKSVLte2], xqANa4pu5EQ[W5d3UVhJ9tyW]);
    return 0;
}

