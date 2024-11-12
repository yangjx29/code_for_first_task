int NlnaOxwKrPo [1000];
int XYOos5e = (375 - 375), wIZujaNw;
int N3lyQaJ15tU (int k, int hWb6lJfswh, int xsKzeS, int wIZujaNw);

int main () {
    int i;
    int BDsSqh;
    int yuw8hjM;
    int p;
    int rtuUGQWdr2N;
    int DsHwAJTVeB;
    int b1DwAmlo3;
    scanf ("%d", &rtuUGQWdr2N);
    {
        p = 541 - 541;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (rtuUGQWdr2N > p) {
            p = p + 1;
            scanf ("%d", &wIZujaNw);
            yuw8hjM = (509 - 508);
            {
                i = 2;
                while (wIZujaNw >= i) {
                    if (wIZujaNw % i == 0) {
                        NlnaOxwKrPo[yuw8hjM] = i;
                        yuw8hjM++;
                    }
                    i++;
                };
            }
            N3lyQaJ15tU ((374 - 373), yuw8hjM - (943 - 942), 1, wIZujaNw);
            XYOos5e = 0;
            printf ("%d\n", XYOos5e, wIZujaNw);
        };
    };
}

int N3lyQaJ15tU (int k, int hWb6lJfswh, int xsKzeS, int wIZujaNw) {
    int i;
    int BDsSqh;
    int b1DwAmlo3;
    int rtuUGQWdr2N;
    int DsHwAJTVeB;
    int p;
    for (i = xsKzeS; hWb6lJfswh >= i; i++) {
        if (wIZujaNw % NlnaOxwKrPo[i] == 0) {
            wIZujaNw = wIZujaNw / NlnaOxwKrPo[i];
            if (wIZujaNw == 1) {
                XYOos5e++;
            }
            if (wIZujaNw > 1)
                N3lyQaJ15tU (k + 1, hWb6lJfswh, i, wIZujaNw);
            wIZujaNw = wIZujaNw * NlnaOxwKrPo[i];
        };
    };
}

