int main () {
    int SaUbQuwJoi;
    int dhbnmj;
    int i;
    int CDLMXv;
    int MaWzYL7c6wR [(977 - 777)] = {0};
    int M03fb8 [(1009 - 809)] = {0};
    SaUbQuwJoi = 0;
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
    dhbnmj = 0;
    scanf ("%d", &CDLMXv);
    for (i = 0; i < CDLMXv; i = i + 1) {
        scanf ("%d %d\n", &MaWzYL7c6wR[i], &M03fb8[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(0 != MaWzYL7c6wR[i]) && M03fb8[i] == 1) {
            SaUbQuwJoi = SaUbQuwJoi +1;
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
        }
        else {
            if (MaWzYL7c6wR[i] == 1 && M03fb8[i] == 2) {
                SaUbQuwJoi = SaUbQuwJoi +1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            else if (MaWzYL7c6wR[i] == 2 && !(0 != M03fb8[i])) {
                SaUbQuwJoi = SaUbQuwJoi +1;
            }
            else if (MaWzYL7c6wR[i] == 1 && M03fb8[i] == 0) {
                dhbnmj = dhbnmj + 1;
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
            else if (MaWzYL7c6wR[i] == 2 && M03fb8[i] == 1) {
                dhbnmj = dhbnmj + 1;
            }
            else if (MaWzYL7c6wR[i] == 0 && M03fb8[i] == 2) {
                dhbnmj = dhbnmj + 1;
            }
            else if (MaWzYL7c6wR[i] == M03fb8[i]) {
                continue;
            };
        };
    }
    if (SaUbQuwJoi > dhbnmj) {
        printf ("A");
    }
    if (SaUbQuwJoi < dhbnmj) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    if (SaUbQuwJoi == dhbnmj) {
    }
    return 0;
}

