int main () {
    int sum;
    int BNznoCqLtiBY;
    int UhIVAToqS;
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
    int NTZJUge69, jRgzrIftQS, LTuS1p6r4m, oVdvY2thMWn;
    int d95JmgLRb6, mDGXgKipEm1e, z486GPRO;
    for (NTZJUge69 = 10; NTZJUge69 <= 50; NTZJUge69 = NTZJUge69 +10)
        for (jRgzrIftQS = 10; jRgzrIftQS <= 50; jRgzrIftQS = jRgzrIftQS + 10)
            for (LTuS1p6r4m = 10; LTuS1p6r4m <= 50; LTuS1p6r4m = LTuS1p6r4m +10)
                for (oVdvY2thMWn = 10; oVdvY2thMWn <= 50; oVdvY2thMWn = oVdvY2thMWn + 10) {
                    d95JmgLRb6 = ((NTZJUge69 +jRgzrIftQS) == (LTuS1p6r4m +oVdvY2thMWn));
                    mDGXgKipEm1e = ((NTZJUge69 +oVdvY2thMWn) > (LTuS1p6r4m +jRgzrIftQS));
                    z486GPRO = ((NTZJUge69 +LTuS1p6r4m) < jRgzrIftQS);
                    sum = d95JmgLRb6 + mDGXgKipEm1e + z486GPRO;
                    if (sum == 3) {
                        int DoWIOVq [4] = {NTZJUge69, jRgzrIftQS, LTuS1p6r4m, oVdvY2thMWn};
                        char d3mXWq0eaKJ [4] = {'z', 'q', 's', 'l'};
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
                        for (int dtmvQLeKiGjT = 0;
                        dtmvQLeKiGjT < 3; dtmvQLeKiGjT = dtmvQLeKiGjT + 1)
                            for (int j = 0;
                            j < 3 - dtmvQLeKiGjT; j++) {
                                if (DoWIOVq[j] < DoWIOVq[j + 1]) {
                                    BNznoCqLtiBY = DoWIOVq[j];
                                    DoWIOVq[j] = DoWIOVq[j + 1];
                                    DoWIOVq[j + 1] = BNznoCqLtiBY;
                                    UhIVAToqS = d3mXWq0eaKJ[j];
                                    d3mXWq0eaKJ[j] = d3mXWq0eaKJ[j + 1];
                                    d3mXWq0eaKJ[j + 1] = UhIVAToqS;
                                };
                            }
                        for (int j = 0;
                        j <= 3; j++)
                            cout << d3mXWq0eaKJ[j] << " " << DoWIOVq[j] << endl;
                    };
                }
    return 0;
}

