int main () {
    int ZYqpajIK8 [100] = {0};
    int ICs8MqkVDfle;
    int rVuCmrZg, DUTNrQxAaD;
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
    cin >> rVuCmrZg >> DUTNrQxAaD;
    do {
        ZYqpajIK8[rVuCmrZg + 1] = ZYqpajIK8[rVuCmrZg + 1] + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        ZYqpajIK8[rVuCmrZg] = ZYqpajIK8[rVuCmrZg + 1] * rVuCmrZg + DUTNrQxAaD;
        {
            ICs8MqkVDfle = rVuCmrZg - 1;
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
            while (1 <= ICs8MqkVDfle) {
                if (ZYqpajIK8[ICs8MqkVDfle +1] % (rVuCmrZg - 1) != 0)
                    break;
                else
                    ZYqpajIK8[ICs8MqkVDfle] = ZYqpajIK8[ICs8MqkVDfle +1] * rVuCmrZg / (rVuCmrZg - 1) + DUTNrQxAaD;
                ICs8MqkVDfle = ICs8MqkVDfle -1;
            };
        };
    }
    while (ICs8MqkVDfle >= 1);
    cout << ZYqpajIK8[1] << endl;
    return 0;
}

