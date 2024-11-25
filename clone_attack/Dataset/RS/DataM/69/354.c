int main () {
    char aoE2iW [251], eoZTebw9uDdR [251];
    int xKYjFa8RL2, HJcCAld4bW, qdUhZHk [251];
    {
        xKYjFa8RL2 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (251 > xKYjFa8RL2) {
            qdUhZHk[xKYjFa8RL2] = 0;
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
            xKYjFa8RL2++;
        };
    }
    cin >> aoE2iW >> eoZTebw9uDdR;
    if (aoE2iW[0] == '0' && eoZTebw9uDdR[0] == '0' && !((383 - 382) != strlen (aoE2iW)) && !((807 - 806) != strlen (eoZTebw9uDdR)))
        cout << 0;
    {
        xKYjFa8RL2 = 0;
        while (strlen (aoE2iW) > xKYjFa8RL2 && strlen (eoZTebw9uDdR) > xKYjFa8RL2) {
            qdUhZHk[xKYjFa8RL2] = qdUhZHk[xKYjFa8RL2] + aoE2iW[strlen (aoE2iW) - xKYjFa8RL2 - (738 - 737)] + eoZTebw9uDdR[strlen (eoZTebw9uDdR) - xKYjFa8RL2 - (447 - 446)] - 2 * '0';
            if (9 < qdUhZHk[xKYjFa8RL2]) {
                qdUhZHk[xKYjFa8RL2 + 1]++;
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
                qdUhZHk[xKYjFa8RL2] = qdUhZHk[xKYjFa8RL2] - 10;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            xKYjFa8RL2++;
        };
    }
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
    if (strlen (aoE2iW) >= strlen (eoZTebw9uDdR)) {
        HJcCAld4bW = xKYjFa8RL2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (HJcCAld4bW < strlen (aoE2iW)) {
            qdUhZHk[HJcCAld4bW] = qdUhZHk[HJcCAld4bW] + aoE2iW[strlen (aoE2iW) - HJcCAld4bW -1] - '0';
            if (qdUhZHk[HJcCAld4bW] > 9) {
                qdUhZHk[HJcCAld4bW +1]++;
                qdUhZHk[HJcCAld4bW] = qdUhZHk[HJcCAld4bW] - 10;
            }
            HJcCAld4bW++;
        };
    }
    else
        for (HJcCAld4bW = xKYjFa8RL2; HJcCAld4bW < strlen (eoZTebw9uDdR); HJcCAld4bW++) {
            qdUhZHk[HJcCAld4bW] = qdUhZHk[HJcCAld4bW] + eoZTebw9uDdR[strlen (eoZTebw9uDdR) - HJcCAld4bW -1] - '0';
            if (qdUhZHk[HJcCAld4bW] > 9) {
                qdUhZHk[HJcCAld4bW +1]++;
                qdUhZHk[HJcCAld4bW] = qdUhZHk[HJcCAld4bW] - 10;
            };
        }
    {
        xKYjFa8RL2 = 250;
        while (qdUhZHk[xKYjFa8RL2] == 0) {
            xKYjFa8RL2--;
        };
    }
    {
        HJcCAld4bW = xKYjFa8RL2;
        while (HJcCAld4bW >= 0) {
            cout << qdUhZHk[HJcCAld4bW];
            HJcCAld4bW--;
        };
    }
    cout << endl;
    return 0;
}

