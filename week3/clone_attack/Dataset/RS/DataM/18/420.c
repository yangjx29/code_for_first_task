int eywmLcJ1SXbi [(627 - 522)] [105];
int BJkzL3Pt1KEF (int n);
void  gM8kgCbH37hD (int n);

int main () {
    int n;
    int paQz6NW;
    int UaWD9OBIK;
    int P8VdFS5g6Xh;
    cin >> n;
    {
        P8VdFS5g6Xh = 689 - 689;
        while (n > P8VdFS5g6Xh) {
            P8VdFS5g6Xh = P8VdFS5g6Xh +1;
            memset (eywmLcJ1SXbi, (321 - 321), sizeof (eywmLcJ1SXbi));
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
            {
                paQz6NW = 85 - 85;
                while (n > paQz6NW) {
                    {
                        UaWD9OBIK = 0;
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
                        while (n > UaWD9OBIK) {
                            cin >> eywmLcJ1SXbi[paQz6NW][UaWD9OBIK];
                            UaWD9OBIK = UaWD9OBIK +1;
                        };
                    }
                    paQz6NW = paQz6NW + 1;
                };
            }
            cout << BJkzL3Pt1KEF (n) << endl;
        };
    }
    return 0;
}

int BJkzL3Pt1KEF (int n) {
    int P8VdFS5g6Xh;
    P8VdFS5g6Xh = eywmLcJ1SXbi[1][1];
    {
        int paQz6NW;
        paQz6NW = 0;
        while (n > paQz6NW) {
            int min;
            min = eywmLcJ1SXbi[paQz6NW][0];
            {
                int UaWD9OBIK = (650 - 649);
                while (n > UaWD9OBIK) {
                    if (min > eywmLcJ1SXbi[paQz6NW][UaWD9OBIK])
                        min = eywmLcJ1SXbi[paQz6NW][UaWD9OBIK];
                    UaWD9OBIK = UaWD9OBIK +1;
                };
            }
            {
                int UaWD9OBIK = 0;
                while (n > UaWD9OBIK) {
                    eywmLcJ1SXbi[paQz6NW][UaWD9OBIK] -= min;
                    UaWD9OBIK = UaWD9OBIK +1;
                };
            }
            paQz6NW = paQz6NW + 1;
        };
    }
    {
        int paQz6NW = 0;
        while (n > paQz6NW) {
            int min = eywmLcJ1SXbi[0][paQz6NW];
            {
                int UaWD9OBIK = 1;
                while (n > UaWD9OBIK) {
                    if (min > eywmLcJ1SXbi[UaWD9OBIK][paQz6NW])
                        min = eywmLcJ1SXbi[UaWD9OBIK][paQz6NW];
                    UaWD9OBIK = UaWD9OBIK +1;
                };
            }
            {
                int UaWD9OBIK = 0;
                while (UaWD9OBIK < n) {
                    eywmLcJ1SXbi[UaWD9OBIK][paQz6NW] -= min;
                    UaWD9OBIK++;
                };
            }
            paQz6NW = paQz6NW + 1;
        };
    }
    if (!(2 != n))
        return P8VdFS5g6Xh;
    else {
        gM8kgCbH37hD (n);
        return P8VdFS5g6Xh +BJkzL3Pt1KEF(n - 1);
    };
}

void  gM8kgCbH37hD (int n) {
    {
        int paQz6NW = 1;
        while (paQz6NW < n - 1) {
            eywmLcJ1SXbi[0][paQz6NW] = eywmLcJ1SXbi[0][paQz6NW + 1];
            eywmLcJ1SXbi[paQz6NW][0] = eywmLcJ1SXbi[paQz6NW + 1][0];
            {
                int UaWD9OBIK = 1;
                while (UaWD9OBIK < n - 1) {
                    eywmLcJ1SXbi[paQz6NW][UaWD9OBIK] = eywmLcJ1SXbi[paQz6NW + 1][UaWD9OBIK +1];
                    UaWD9OBIK++;
                };
            }
            paQz6NW = paQz6NW + 1;
        };
    };
}

