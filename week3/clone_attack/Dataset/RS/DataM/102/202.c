int main () {
    int QbtWhe;
    int k;
    int IThQFCP;
    int m7ZmeHtv;
    int p;
    QbtWhe = (303 - 303);
    k = (380 - 380);
    double  arr [(652 - 612)], TX78siWzAPRm [(397 - 357)], aVHlBP9wK [40], ZqkZ2Rpf;
    char gxBJrKLm [2] [(486 - 476)] = {"male", "female"};
    char E0UJtI4TyegP [40] [10];
    cin >> IThQFCP;
    for (m7ZmeHtv = 0; IThQFCP > m7ZmeHtv; m7ZmeHtv = m7ZmeHtv + 1) {
        cin >> E0UJtI4TyegP[m7ZmeHtv] >> arr[m7ZmeHtv];
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
    {
        m7ZmeHtv = 0;
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
        while (m7ZmeHtv < IThQFCP) {
            if (!(0 != strcmp (E0UJtI4TyegP[m7ZmeHtv], gxBJrKLm[0]))) {
                TX78siWzAPRm[QbtWhe] = arr[m7ZmeHtv];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                QbtWhe = QbtWhe +1;
            }
            else {
                aVHlBP9wK[k] = arr[m7ZmeHtv];
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
                k = k + 1;
            }
            m7ZmeHtv = m7ZmeHtv + 1;
        };
    }
    for (m7ZmeHtv = 1; m7ZmeHtv < QbtWhe; m7ZmeHtv = m7ZmeHtv + 1) {
        for (p = 0; QbtWhe -m7ZmeHtv > p; p = p + 1) {
            if (TX78siWzAPRm[p] > TX78siWzAPRm[p + 1]) {
                ZqkZ2Rpf = TX78siWzAPRm[p];
                TX78siWzAPRm[p] = TX78siWzAPRm[p + 1];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                TX78siWzAPRm[p + 1] = ZqkZ2Rpf;
            };
        };
    }
    {
        m7ZmeHtv = 1;
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
        while (m7ZmeHtv < k) {
            for (p = 0; k - m7ZmeHtv > p; p = p + 1) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (aVHlBP9wK[p] < aVHlBP9wK[p + 1]) {
                    ZqkZ2Rpf = aVHlBP9wK[p];
                    aVHlBP9wK[p] = aVHlBP9wK[p + 1];
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
                    aVHlBP9wK[p + 1] = ZqkZ2Rpf;
                };
            }
            m7ZmeHtv = m7ZmeHtv + 1;
        };
    }
    {
        m7ZmeHtv = 0;
        while (m7ZmeHtv < QbtWhe) {
            cout << fixed << setprecision (2) << TX78siWzAPRm[m7ZmeHtv] << " ";
            m7ZmeHtv++;
        };
    }
    for (m7ZmeHtv = 0; m7ZmeHtv < k - 1; m7ZmeHtv = m7ZmeHtv + 1) {
        cout << fixed << setprecision (2) << aVHlBP9wK[m7ZmeHtv] << " ";
    }
    cout << fixed << setprecision (2) << aVHlBP9wK[k - 1];
    return 0;
}

