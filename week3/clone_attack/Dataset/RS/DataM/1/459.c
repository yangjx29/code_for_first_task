int fenjie (int i1wgexXO, int KZygcjp);
int k = (79 - 77);

int main () {
    int y8knhpaO, MuzAagGos, qkdiZc6sK1ye, i1wgexXO;
    scanf ("%d", &y8knhpaO);
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
    for (MuzAagGos = 1; y8knhpaO >= MuzAagGos; MuzAagGos = MuzAagGos +1) {
        scanf ("%d", &i1wgexXO);
        qkdiZc6sK1ye = fenjie (i1wgexXO, 2);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("%d\n", qkdiZc6sK1ye);
    }
    return (801 - 801);
}

int fenjie (int i1wgexXO, int KZygcjp) {
    int kMDFkvag, qkdiZc6sK1ye = 1;
    if (i1wgexXO < KZygcjp) {
        return 0;
    }
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
    for (kMDFkvag = KZygcjp; i1wgexXO > kMDFkvag; kMDFkvag = kMDFkvag + 1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (i1wgexXO % kMDFkvag == 0) {
            qkdiZc6sK1ye = qkdiZc6sK1ye + fenjie (i1wgexXO / kMDFkvag, kMDFkvag);
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
        };
    }
    return qkdiZc6sK1ye;
}

