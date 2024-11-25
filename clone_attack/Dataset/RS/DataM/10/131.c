int BYdXbgWBR (int LsZWARVDCvLU, int gwXURSLe1) {
    if (gwXURSLe1 < LsZWARVDCvLU)
        return LsZWARVDCvLU;
    else
        return gwXURSLe1;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int main () {
    int cVuBAGqO;
    int dp [30] = {0};
    int UdifnMqp;
    UdifnMqp = 0;
    int fqSiXYj6T8o [30];
    scanf ("%d", &cVuBAGqO);
    {
        int i = 1;
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
        while (i <= cVuBAGqO) {
            scanf ("%d", &fqSiXYj6T8o[i]);
            dp[i] = 1;
            i = i + 1;
        };
    }
    for (int i = 2;
    i <= cVuBAGqO; i = i + 1) {
        int j = 1;
        while (j < i) {
            if (fqSiXYj6T8o[i] <= fqSiXYj6T8o[j]) {
                dp[i] = BYdXbgWBR (dp[i], dp[j] + 1);
                if (dp[i] > UdifnMqp)
                    UdifnMqp = dp[i];
            }
            j++;
        };
    }
    printf ("%d", UdifnMqp);
}

