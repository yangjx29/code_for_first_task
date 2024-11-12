int main () {
    int m1;
    int UK1jDViLh;
    int ZS9C7utKQvV0;
    int l2;
    int a [101] [101];
    int P2f8EFBl57q;
    int bvVCzQBe2NO;
    int qpLCIi;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    int kl4Iq9j;
    cin >> P2f8EFBl57q;
    {
        bvVCzQBe2NO = 642 - 642;
        while (P2f8EFBl57q > bvVCzQBe2NO) {
            {
                qpLCIi = 0;
                while (P2f8EFBl57q > qpLCIi) {
                    cin >> *(*(a + bvVCzQBe2NO) + qpLCIi);
                    qpLCIi++;
                };
            }
            bvVCzQBe2NO = bvVCzQBe2NO + 1;
        };
    }
    {
        bvVCzQBe2NO = 0;
        while (P2f8EFBl57q > bvVCzQBe2NO) {
            {
                qpLCIi = 0;
                while (P2f8EFBl57q > qpLCIi) {
                    if (!(0 != *(*(a + bvVCzQBe2NO) + qpLCIi)) && !(0 == *(*(a + bvVCzQBe2NO - 1) + qpLCIi)) && !(0 == *(*(a + bvVCzQBe2NO) + qpLCIi - 1))) {
                        UK1jDViLh = qpLCIi;
                        m1 = bvVCzQBe2NO;
                    }
                    qpLCIi++;
                };
            }
            bvVCzQBe2NO++;
        };
    }
    for (bvVCzQBe2NO = 0; bvVCzQBe2NO < P2f8EFBl57q; bvVCzQBe2NO = bvVCzQBe2NO + 1) {
        qpLCIi = 0;
        while (qpLCIi < P2f8EFBl57q) {
            if (*(*(a + bvVCzQBe2NO) + qpLCIi) == 0 && *(*(a + bvVCzQBe2NO + 1) + qpLCIi) != 0 && *(*(a + bvVCzQBe2NO) + qpLCIi + 1) != 0) {
                l2 = qpLCIi;
                ZS9C7utKQvV0 = bvVCzQBe2NO;
            }
            qpLCIi++;
        };
    }
    kl4Iq9j = (ZS9C7utKQvV0 -m1 - 1) * (l2 - UK1jDViLh -1);
    cout << kl4Iq9j << endl;
    return 0;
}

