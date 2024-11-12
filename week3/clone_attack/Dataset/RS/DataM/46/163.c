int main () {
    int ZsP58fy1Rl;
    int c;
    int aX0cNKGECRTJ;
    int j;
    int P0JfNB;
    int oXBfDMkjJ [200] [200];
    cin >> ZsP58fy1Rl >> c;
    {
        aX0cNKGECRTJ = 1;
        while (ZsP58fy1Rl >= aX0cNKGECRTJ) {
            {
                j = 1;
                while (j <= c) {
                    cin >> oXBfDMkjJ[aX0cNKGECRTJ][j];
                    j = j + 1;
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
            aX0cNKGECRTJ = aX0cNKGECRTJ + 1;
        };
    }
    aX0cNKGECRTJ = 1;
    j = 1;
    while (aX0cNKGECRTJ <= ZsP58fy1Rl &&j <= c) {
        {
            P0JfNB = j;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (P0JfNB <= c) {
                cout << oXBfDMkjJ[aX0cNKGECRTJ][P0JfNB] << endl;
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
                P0JfNB = P0JfNB +1;
            };
        }
        {
            P0JfNB = aX0cNKGECRTJ + 1;
            while (ZsP58fy1Rl >= P0JfNB) {
                cout << oXBfDMkjJ[P0JfNB][c] << endl;
                P0JfNB++;
            };
        }
        {
            P0JfNB = c - 1;
            while (j <= P0JfNB &&aX0cNKGECRTJ != ZsP58fy1Rl &&j != c) {
                cout << oXBfDMkjJ[ZsP58fy1Rl][P0JfNB] << endl;
                P0JfNB = P0JfNB -1;
            };
        }
        for (P0JfNB = ZsP58fy1Rl -1; aX0cNKGECRTJ < P0JfNB &&aX0cNKGECRTJ != ZsP58fy1Rl &&j != c; P0JfNB--) {
            cout << oXBfDMkjJ[P0JfNB][j] << endl;
        }
        j++;
        aX0cNKGECRTJ++;
        ZsP58fy1Rl = ZsP58fy1Rl -1;
        c = c - 1;
    }
    return 0;
}

