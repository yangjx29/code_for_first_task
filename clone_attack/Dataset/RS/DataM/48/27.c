void  cal (int F5ZncBJwj8gM [] [9] [9], int vP9cNAg) {
    for (int i = 4 - vP9cNAg;
    4 + vP9cNAg >= i; i++) {
        int pNOv7S59iyTR;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        pNOv7S59iyTR = 4 - vP9cNAg;
        while (4 + vP9cNAg >= pNOv7S59iyTR) {
            F5ZncBJwj8gM[vP9cNAg + (350 - 349)][i - (468 - 467)][pNOv7S59iyTR - (858 - 857)] = F5ZncBJwj8gM[vP9cNAg + (350 - 349)][i - (468 - 467)][pNOv7S59iyTR - (858 - 857)] + F5ZncBJwj8gM[vP9cNAg][i][pNOv7S59iyTR];
            F5ZncBJwj8gM[vP9cNAg + 1][i - 1][pNOv7S59iyTR] = F5ZncBJwj8gM[vP9cNAg + 1][i - 1][pNOv7S59iyTR] + F5ZncBJwj8gM[vP9cNAg][i][pNOv7S59iyTR];
            F5ZncBJwj8gM[vP9cNAg + 1][i - 1][pNOv7S59iyTR + 1] += F5ZncBJwj8gM[vP9cNAg][i][pNOv7S59iyTR];
            F5ZncBJwj8gM[vP9cNAg + 1][i][pNOv7S59iyTR - 1] = F5ZncBJwj8gM[vP9cNAg + 1][i][pNOv7S59iyTR - 1] + F5ZncBJwj8gM[vP9cNAg][i][pNOv7S59iyTR];
            F5ZncBJwj8gM[vP9cNAg + 1][i][pNOv7S59iyTR + 1] = F5ZncBJwj8gM[vP9cNAg + 1][i][pNOv7S59iyTR + 1] + F5ZncBJwj8gM[vP9cNAg][i][pNOv7S59iyTR];
            F5ZncBJwj8gM[vP9cNAg + 1][i + 1][pNOv7S59iyTR - 1] = F5ZncBJwj8gM[vP9cNAg + 1][i + 1][pNOv7S59iyTR - 1] + F5ZncBJwj8gM[vP9cNAg][i][pNOv7S59iyTR];
            F5ZncBJwj8gM[vP9cNAg + 1][i + 1][pNOv7S59iyTR] = F5ZncBJwj8gM[vP9cNAg + 1][i + 1][pNOv7S59iyTR] + F5ZncBJwj8gM[vP9cNAg][i][pNOv7S59iyTR];
            F5ZncBJwj8gM[vP9cNAg + 1][i + 1][pNOv7S59iyTR + 1] = F5ZncBJwj8gM[vP9cNAg + 1][i + 1][pNOv7S59iyTR + 1] + F5ZncBJwj8gM[vP9cNAg][i][pNOv7S59iyTR];
            F5ZncBJwj8gM[vP9cNAg + 1][i][pNOv7S59iyTR] = F5ZncBJwj8gM[vP9cNAg + 1][i][pNOv7S59iyTR] + 2 * F5ZncBJwj8gM[vP9cNAg][i][pNOv7S59iyTR];
            pNOv7S59iyTR++;
        };
    };
}

int main () {
    int hTFGPQoWeU2K;
    int n;
    int F5ZncBJwj8gM [(376 - 371)] [9] [9];
    memset (F5ZncBJwj8gM, (855 - 855), sizeof (F5ZncBJwj8gM));
    F5ZncBJwj8gM[0][4][4] = 1;
    cin >> hTFGPQoWeU2K >> n;
    for (int i = 0;
    n > i; i++)
        cal (F5ZncBJwj8gM, i);
    for (int i = 0;
    9 > i; i++) {
        for (int pNOv7S59iyTR = 0;
        pNOv7S59iyTR < 9; pNOv7S59iyTR++) {
            if (pNOv7S59iyTR == 0)
                cout << F5ZncBJwj8gM[n][i][pNOv7S59iyTR] * hTFGPQoWeU2K;
            else
                cout << ' ' << F5ZncBJwj8gM[n][i][pNOv7S59iyTR] * hTFGPQoWeU2K;
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
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        cout << endl;
    }
    return 0;
}

