int main () {
    int SYDn4froIK;
    int mZF1eT0J2 [1001];
    int left [1001];
    int bdYneX;
    int qL5a7GnsvB;
    int hnQrmDa;
    while (scanf ("%d", &mZF1eT0J2[(716 - 716)]) != EOF) {
        int nzldOcLav = left[0];
        int JLhbuQxdBC;
        JLhbuQxdBC = mZF1eT0J2[0];
        char Z9LEXyP1;
        int sP5fQSz3wEi;
        sP5fQSz3wEi = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        int lH6l01yA = 0;
        SYDn4froIK = (298 - 297);
        while (scanf ("%c", &Z9LEXyP1) != EOF &&Z9LEXyP1 == ',') {
            scanf ("%d", &mZF1eT0J2[SYDn4froIK]);
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
            SYDn4froIK = SYDn4froIK +1;
        }
        for (bdYneX = 0; bdYneX < SYDn4froIK -1; bdYneX = bdYneX + 1)
            scanf ("%d,", &left[bdYneX]);
        scanf ("%d", &left[SYDn4froIK -1]);
        {
            bdYneX = 0;
            while (bdYneX < SYDn4froIK) {
                if (mZF1eT0J2[bdYneX] < JLhbuQxdBC)
                    JLhbuQxdBC = mZF1eT0J2[bdYneX];
                if (left[bdYneX] > nzldOcLav)
                    nzldOcLav = left[bdYneX];
                bdYneX = bdYneX + 1;
            };
        }
        {
            bdYneX = JLhbuQxdBC;
            while (nzldOcLav >= bdYneX) {
                sP5fQSz3wEi = 0;
                for (qL5a7GnsvB = 0; qL5a7GnsvB < SYDn4froIK; qL5a7GnsvB++) {
                    if (mZF1eT0J2[qL5a7GnsvB] <= bdYneX && left[qL5a7GnsvB] > bdYneX)
                        sP5fQSz3wEi = sP5fQSz3wEi + 1;
                }
                bdYneX = bdYneX + 1;
                if (sP5fQSz3wEi > lH6l01yA)
                    lH6l01yA = sP5fQSz3wEi;
            };
        }
        printf ("%d %d\n", SYDn4froIK, lH6l01yA);
    };
}

