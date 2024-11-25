main () {
    int W19h56HpA;
    int eh7RrvT;
    int LesWqZIumSM;
    int aTdnRr2tv4l;
    int FAeVgWJU7S;
    int i;
    int qrwSi8quF47;
    int a [(385 - 285)] [(333 - 233)] = {(839 - 839)}, fPFDjK [(907 - 807)] [100] = {(721 - 721)};
    int tAF5rW4 [100] [100] = {(525 - 525)};
    scanf ("%d%d", &W19h56HpA, &eh7RrvT);
    {
        i = 280 - 280;
        while (W19h56HpA > i) {
            {
                FAeVgWJU7S = 595 - 595;
                while (FAeVgWJU7S < eh7RrvT) {
                    scanf ("%d", &a[i][FAeVgWJU7S]);
                    FAeVgWJU7S++;
                };
            }
            i++;
        };
    }
    scanf ("%d%d", &LesWqZIumSM, &aTdnRr2tv4l);
    for (i = (955 - 955); i < LesWqZIumSM; i = i + 1) {
        FAeVgWJU7S = 181 - 181;
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
        while (aTdnRr2tv4l > FAeVgWJU7S) {
            scanf ("%d", &fPFDjK[i][FAeVgWJU7S]);
            FAeVgWJU7S++;
        };
    }
    for (i = (129 - 129); i < W19h56HpA; i++) {
        for (FAeVgWJU7S = 0; FAeVgWJU7S < aTdnRr2tv4l; FAeVgWJU7S++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            for (qrwSi8quF47 = 0; qrwSi8quF47 < eh7RrvT; qrwSi8quF47 = qrwSi8quF47 + 1) {
                tAF5rW4[i][FAeVgWJU7S] = tAF5rW4[i][FAeVgWJU7S] + a[i][qrwSi8quF47] * fPFDjK[qrwSi8quF47][FAeVgWJU7S];
            };
        };
    }
    for (i = 0; i < W19h56HpA; i++) {
        printf ("%d", tAF5rW4[i][0]);
        {
            FAeVgWJU7S = 573 - 572;
            while (FAeVgWJU7S < aTdnRr2tv4l) {
                printf (" %d", tAF5rW4[i][FAeVgWJU7S]);
                FAeVgWJU7S++;
            };
        };
    };
}

