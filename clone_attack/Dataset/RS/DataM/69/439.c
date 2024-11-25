const  int MAX = 250;
char Ye5TRrwSkIX1 [MAX] = {(416 - 416)};
char c2 [MAX] = {(503 - 503)};
int J8FiDwlebGP [MAX] = {0};
int re [MAX] = {0};

int main () {
    int l1;
    l1 = strlen (Ye5TRrwSkIX1);
    int l2;
    l2 = strlen (c2);
    int nIAO5lnV8;
    int lsgdGuNVM;
    int l;
    memset (J8FiDwlebGP, 0, sizeof (J8FiDwlebGP));
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
    memset (re, 0, sizeof (re));
    cin >> Ye5TRrwSkIX1 >> c2;
    for (nIAO5lnV8 = 0; nIAO5lnV8 < l1; nIAO5lnV8 = nIAO5lnV8 + 1)
        re[nIAO5lnV8] = Ye5TRrwSkIX1[l1 - nIAO5lnV8 - 1] - '0';
    for (nIAO5lnV8 = 0; nIAO5lnV8 < l2; nIAO5lnV8++)
        J8FiDwlebGP[nIAO5lnV8] = c2[l2 - nIAO5lnV8 - 1] - '0';
    if (l1 >= l2)
        l = l1;
    else
        l = l2;
    for (nIAO5lnV8 = 0; l >= nIAO5lnV8; nIAO5lnV8++) {
        re[nIAO5lnV8] = re[nIAO5lnV8] + J8FiDwlebGP[nIAO5lnV8];
        while (re[nIAO5lnV8] >= 10) {
            re[nIAO5lnV8] = re[nIAO5lnV8] - 10;
            re[nIAO5lnV8 + 1] += 1;
        };
    }
    nIAO5lnV8 = 201;
    while (re[nIAO5lnV8] == 0 && nIAO5lnV8 > -1)
        nIAO5lnV8--;
    if (nIAO5lnV8 == -1)
        cout << 0;
    for (lsgdGuNVM = nIAO5lnV8; lsgdGuNVM >= 0; lsgdGuNVM = lsgdGuNVM - 1)
        cout << re[lsgdGuNVM];
    return 0;
}

