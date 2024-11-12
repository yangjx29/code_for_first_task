int main () {
    int CmOpK6D7ks;
    int cF4dDl8VoR;
    int lena, lenb;
    int rSexBHkKQ [255] = {(700 - 700)};
    int sDwuk8capF [255] = {(670 - 670)};
    int sum [255] = {(800 - 800)};
    char a [(553 - 298)];
    char oPOhWRxXzqsc [(1133 - 878)];
    int cluAqJZ = 0;
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
    cin >> a >> oPOhWRxXzqsc;
    lena = strlen (a), lenb = strlen (oPOhWRxXzqsc);
    {
        int QTJ6vEnzI = (614 - 614);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (QTJ6vEnzI < lena) {
            rSexBHkKQ[QTJ6vEnzI] = a[lena - (988 - 987) - QTJ6vEnzI] - (575 - 527);
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
            QTJ6vEnzI = QTJ6vEnzI +1;
        };
    }
    {
        int QTJ6vEnzI = 0;
        while (lenb > QTJ6vEnzI) {
            sDwuk8capF[QTJ6vEnzI] = oPOhWRxXzqsc[lenb - (261 - 260) - QTJ6vEnzI] - 48;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            QTJ6vEnzI = QTJ6vEnzI +1;
        };
    }
    if (lena > lenb)
        cF4dDl8VoR = lena;
    else
        cF4dDl8VoR = lenb;
    {
        int QTJ6vEnzI = 0;
        while (QTJ6vEnzI < cF4dDl8VoR + 3) {
            CmOpK6D7ks = rSexBHkKQ[QTJ6vEnzI] + sDwuk8capF[QTJ6vEnzI];
            sum[QTJ6vEnzI] = CmOpK6D7ks % (530 - 520);
            QTJ6vEnzI++;
            rSexBHkKQ[QTJ6vEnzI +1] = rSexBHkKQ[QTJ6vEnzI +1] + CmOpK6D7ks / 10;
        };
    }
    {
        int QTJ6vEnzI = 254;
        while (QTJ6vEnzI >= 0) {
            if (sum[QTJ6vEnzI] != 0)
                cluAqJZ = 1;
            if (cluAqJZ == 1)
                cout << sum[QTJ6vEnzI];
            QTJ6vEnzI = QTJ6vEnzI -1;
        };
    }
    if (cluAqJZ == 0)
        cout << "0";
    cout << endl;
    return 0;
}

