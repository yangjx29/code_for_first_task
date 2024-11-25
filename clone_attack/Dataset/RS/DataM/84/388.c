int main () {
    int er7RUL, nxL0f4cjb [100], i;
    int iKpQCN1wc;
    int C2haoNdP;
    iKpQCN1wc = 0;
    C2haoNdP = 0;
    scanf ("%d", &er7RUL);
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (er7RUL >= i) {
            scanf ("%d", &nxL0f4cjb[i]);
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
            i = i + 1;
        };
    }
    {
        i = 1;
        while (i <= er7RUL) {
            while (iKpQCN1wc < nxL0f4cjb[i])
                iKpQCN1wc = nxL0f4cjb[i];
            i = i + 1;
        };
    }
    {
        i = 1;
        while (i <= er7RUL) {
            while (C2haoNdP < nxL0f4cjb[i] && nxL0f4cjb[i] < iKpQCN1wc)
                C2haoNdP = nxL0f4cjb[i];
            i++;
        };
    }
    printf ("%d\n%d\n", iKpQCN1wc, C2haoNdP);
    return 0;
}

