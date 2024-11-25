int main () {
    int n, HXz2dW8, kLK02N, k, qkqmdMcvU, lenth2, Hda6D2Y;
    int num1 [101], num2 [101];
    char eIyx4q [101], Kkiu3fGnjzX [101];
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
    cin >> n;
    {
        Hda6D2Y = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (Hda6D2Y <= n) {
            Hda6D2Y++;
            HXz2dW8 = 100;
            cin.get ();
            cin.getline (eIyx4q, 101);
            cin.getline (Kkiu3fGnjzX, 101);
            qkqmdMcvU = strlen (eIyx4q);
            lenth2 = strlen (Kkiu3fGnjzX);
            memset (num1, 0, sizeof (num1));
            memset (num2, 0, sizeof (num2));
            k = 0;
            {
                kLK02N = qkqmdMcvU - 1;
                while (0 <= kLK02N) {
                    num1[k++] = eIyx4q[kLK02N] - '0';
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    kLK02N = kLK02N - 1;
                };
            }
            k = 0;
            {
                kLK02N = lenth2 - 1;
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
                while (kLK02N >= 0) {
                    num2[k++] = Kkiu3fGnjzX[kLK02N] - '0';
                    kLK02N = kLK02N - 1;
                };
            }
            for (k = 0; k < qkqmdMcvU; k++) {
                if (num1[k] < num2[k]) {
                    num1[k] = num1[k] + 10;
                    num1[k + 1]--;
                }
                num1[k] = num1[k] - num2[k];
            }
            while (num1[HXz2dW8] == 0)
                HXz2dW8 = HXz2dW8 -1;
            for (; HXz2dW8 >= 0; HXz2dW8--)
                cout << num1[HXz2dW8];
            cout << endl;
        };
    }
    return 0;
}

