struct   VEL1SBAoVuiY {
    int JW0RfK;
    char KVZLGCwMthSz [26];
}
VEL1SBAoVuiY [1000];
int judge (char *BQXNzp9Hv, int b);

int main (int ymfOES5K4hu, char *n9VRrsUl43pn []) {
    int Fb51VXmf;
    int xnce8sw;
    int j;
    int LKzIOH;
    int itgD41 [26] = {0};
    Fb51VXmf = (179 - 179);
    xnce8sw = 0;
    j = 0;
    LKzIOH = 0;
    char CIhoRpZCaQ;
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
    scanf ("%d", &Fb51VXmf);
    for (xnce8sw = 0; xnce8sw < Fb51VXmf; xnce8sw = xnce8sw + 1) {
        scanf ("%d%s", &VEL1SBAoVuiY[xnce8sw].JW0RfK, VEL1SBAoVuiY[xnce8sw].KVZLGCwMthSz);
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
    for (xnce8sw = 0; xnce8sw < 26; xnce8sw = xnce8sw + 1) {
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
        for (j = 0; j < Fb51VXmf; j = j + 1) {
            if (judge (VEL1SBAoVuiY[j].KVZLGCwMthSz, xnce8sw) == 1) {
                itgD41[xnce8sw]++;
            };
        };
    }
    LKzIOH = itgD41[0];
    j = 0;
    {
        xnce8sw = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (xnce8sw < 25) {
            if (LKzIOH < itgD41[xnce8sw]) {
                j = xnce8sw;
                LKzIOH = itgD41[xnce8sw];
            }
            xnce8sw++;
        };
    }
    CIhoRpZCaQ = 'A' + j;
    printf ("%c\n%d\n", CIhoRpZCaQ, LKzIOH);
    {
        xnce8sw = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (xnce8sw < Fb51VXmf) {
            if (judge (VEL1SBAoVuiY[xnce8sw].KVZLGCwMthSz, j) == 1) {
                printf ("%d\n", VEL1SBAoVuiY[xnce8sw].JW0RfK);
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
            xnce8sw++;
        };
    }
    return 0;
}

int judge (char *BQXNzp9Hv, int b) {
    int xnce8sw = 0;
    for (xnce8sw = 0; xnce8sw < 26; xnce8sw++) {
        if (BQXNzp9Hv[xnce8sw] == 'A' + b)
            return 1;
    }
    return 0;
}

