int nULmt5gXdeS = 0, ZhBSxD74G = 2;

void  BHCUm5eba8T (int pQbTxR) {
    int cphWDwr;
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
    int U7X6N8e = ZhBSxD74G;
    if (pQbTxR == 1) {
        nULmt5gXdeS = nULmt5gXdeS + 1;
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
    else {
        for (cphWDwr = ZhBSxD74G; cphWDwr <= pQbTxR / 2; cphWDwr = cphWDwr + 1) {
            if (pQbTxR % cphWDwr == 0) {
                BHCUm5eba8T (pQbTxR);
                pQbTxR = pQbTxR / cphWDwr;
                ZhBSxD74G = cphWDwr;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                ZhBSxD74G = U7X6N8e;
                pQbTxR = pQbTxR * cphWDwr;
            };
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
        if (cphWDwr > pQbTxR / 2 && pQbTxR >= ZhBSxD74G) {
            BHCUm5eba8T (pQbTxR);
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
            pQbTxR = 1;
        };
    };
}

int main () {
    int pQbTxR;
    int elxf2hZd5o;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    cin >> pQbTxR;
    for (int cphWDwr = 1;
    cphWDwr <= pQbTxR; cphWDwr++) {
        BHCUm5eba8T (elxf2hZd5o);
        ZhBSxD74G = 2;
        cout << nULmt5gXdeS << endl;
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
        nULmt5gXdeS = 0;
        cin >> elxf2hZd5o;
    }
    return 0;
}

