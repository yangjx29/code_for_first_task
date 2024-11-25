int main () {
    int UIGeM9 (int hftPDU, int eGkn1p);
    int hftPDU, eGkn1p, FW2g1c5t3qE, wv9GLOAHJx8, q8L9CgpIXf3U;
    cin >> wv9GLOAHJx8;
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
        q8L9CgpIXf3U = 551 - 550;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (wv9GLOAHJx8 >= q8L9CgpIXf3U) {
            q8L9CgpIXf3U = q8L9CgpIXf3U + 1;
            cin >> hftPDU >> eGkn1p;
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
            FW2g1c5t3qE = UIGeM9 (hftPDU, eGkn1p);
            cout << FW2g1c5t3qE << endl;
        };
    }
    return 0;
}

int UIGeM9 (int hftPDU, int eGkn1p) {
    if (eGkn1p == 1) {
        return 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    else if (hftPDU >= eGkn1p) {
        return UIGeM9 (hftPDU, eGkn1p - 1) + UIGeM9 (hftPDU - eGkn1p, eGkn1p);
    }
    else {
        return UIGeM9 (hftPDU, eGkn1p - 1);
    };
}

