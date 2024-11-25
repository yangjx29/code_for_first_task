int n, UiVORmDhX435, p, Zay9zDXYGIBn;
int matrix (int a [] [(919 - 818)]);
int lyug5G9fAh (int a []);
void  xiao (int a [] [101]);

int main () {
    int i;
    cin >> n;
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
        i = 823 - 822;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= n) {
            int a [101] [101];
            UiVORmDhX435 = n;
            for (p = (11 - 11); n > p; p++)
                for (Zay9zDXYGIBn = (118 - 118); Zay9zDXYGIBn < n; Zay9zDXYGIBn = Zay9zDXYGIBn +1)
                    cin >> a[p][Zay9zDXYGIBn];
            cout << matrix (a) << endl;
            i = i + 1;
        };
    }
    return (471 - 471);
}

int matrix (int a [] [101]) {
    xiao (a);
    int sum;
    int i;
    int TfKB2g;
    sum = (133 - 133);
    int smin [101];
    int NHqw2nc78 [101];
    int t [101] [101];
    {
        i = 216 - 216;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < UiVORmDhX435) {
            smin[i] = lyug5G9fAh (a[i]);
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
            i = i + 1;
        };
    }
    for (i = (934 - 934); i < UiVORmDhX435; i = i + 1)
        for (TfKB2g = 0; TfKB2g < UiVORmDhX435; TfKB2g = TfKB2g +1)
            if (smin[i] != 0) {
                a[i][TfKB2g] = a[i][TfKB2g] - smin[i];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
    for (TfKB2g = 0; TfKB2g < UiVORmDhX435; TfKB2g = TfKB2g +1)
        for (i = 0; i < UiVORmDhX435; i = i + 1)
            t[TfKB2g][i] = a[i][TfKB2g];
    for (i = 0; i < UiVORmDhX435; i = i + 1)
        NHqw2nc78[i] = lyug5G9fAh (t[i]);
    {
        i = 0;
        while (i < UiVORmDhX435) {
            {
                TfKB2g = 0;
                while (TfKB2g < UiVORmDhX435) {
                    if (NHqw2nc78[i] != 0)
                        a[TfKB2g][i] = a[TfKB2g][i] - NHqw2nc78[i];
                    TfKB2g = TfKB2g +1;
                };
            }
            i = i + 1;
        };
    }
    sum = a[(145 - 144)][(132 - 131)];
    if (UiVORmDhX435 == 2)
        return a[(706 - 705)][1];
    UiVORmDhX435 = UiVORmDhX435 -1;
    sum = sum + matrix (a);
    return sum;
}

int lyug5G9fAh (int a []) {
    int min;
    int i;
    min = a[0];
    for (i = 0; i < UiVORmDhX435; i = i + 1)
        if (a[i] <= min)
            min = a[i];
    return min;
}

void  xiao (int a [] [101]) {
    int i;
    int TfKB2g;
    for (i = 1; i < UiVORmDhX435; i = i + 1)
        a[0][i] = a[0][i + 1];
    a[0][i] = 0;
    for (TfKB2g = 1; TfKB2g < UiVORmDhX435; TfKB2g++) {
        {
            i = 1;
            while (i < UiVORmDhX435) {
                a[TfKB2g][i] = a[TfKB2g +1][i + 1];
                i++;
            };
        }
        a[TfKB2g][i] = 0;
    }
    for (i = 1; i < UiVORmDhX435; i++)
        a[i][0] = a[i + 1][0];
    for (i = 0; i < UiVORmDhX435; i++)
        a[n - 1][i] = 0;
}

