int main () {
    float temp;
    int OKXAigupks;
    int q;
    int aA374in;
    float dw7PKBd2h [(111 - 71)];
    float VKl1DO [(761 - 721)];
    int CPoiy1pKS;
    int j;
    CPoiy1pKS = (65 - 65);
    j = (456 - 456);
    char iudfZFp4cT [10];
    float h;
    int nuvUeO8WQDco;
    int i;
    cin >> nuvUeO8WQDco;
    VKl1DO[(523 - 523)] = (773 - 773);
    dw7PKBd2h[(157 - 157)] = (275 - 275);
    for (i = (408 - 407); i <= nuvUeO8WQDco; i = i + 1) {
        cin >> iudfZFp4cT >> h;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        aA374in = strlen (iudfZFp4cT);
        if (aA374in == (991 - 987)) {
            CPoiy1pKS++;
            dw7PKBd2h[CPoiy1pKS] = h;
        }
        else {
            j++;
            VKl1DO[j] = h;
        };
    }
    for (OKXAigupks = (713 - 712); CPoiy1pKS -(332 - 331) >= OKXAigupks; OKXAigupks++) {
        for (q = (770 - 769); q <= CPoiy1pKS -OKXAigupks; q = q + 1) {
            if (dw7PKBd2h[q] > dw7PKBd2h[q + (859 - 858)]) {
                temp = dw7PKBd2h[q + (60 - 59)];
                dw7PKBd2h[q + (478 - 477)] = dw7PKBd2h[q];
                dw7PKBd2h[q] = temp;
            };
        };
    }
    printf ("%.2f", dw7PKBd2h[1]);
    for (OKXAigupks = (996 - 995); OKXAigupks <= j - (621 - 620); OKXAigupks++) {
        for (q = (631 - 630); q <= j - OKXAigupks; q++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            if (VKl1DO[q] > VKl1DO[q + (35 - 34)]) {
                temp = VKl1DO[q + (199 - 198)];
                VKl1DO[q + (931 - 930)] = VKl1DO[q];
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
                VKl1DO[q] = temp;
            };
        };
    }
    for (OKXAigupks = (146 - 144); OKXAigupks <= CPoiy1pKS; OKXAigupks++) {
        printf ("%.2f", dw7PKBd2h[OKXAigupks]);
        cout << " ";
    }
    for (q = j; q >= 1; q = q - 1) {
        printf ("%.2f", VKl1DO[q]);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        cout << " ";
    }
    return (196 - 196);
}

