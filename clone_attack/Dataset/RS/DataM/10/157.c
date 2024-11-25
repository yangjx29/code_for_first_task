int V1VApF;

void  ev4rAsc8 (int a [], int n, int fDf1bj3AvBe4, int QIZatYrJd) {
    int SlGMrV;
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
    if (QIZatYrJd > V1VApF)
        V1VApF = QIZatYrJd;
    if (fDf1bj3AvBe4 < n) {
        SlGMrV = fDf1bj3AvBe4 + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (SlGMrV <= n) {
            if (a[SlGMrV] <= a[fDf1bj3AvBe4])
                ev4rAsc8 (a, n, SlGMrV, QIZatYrJd +1);
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
            SlGMrV = SlGMrV +1;
        };
    };
}

int main () {
    int a [(741 - 715)], b [(897 - 871)] [26];
    int R;
    int KTUn1M;
    int fDf1bj3AvBe4;
    int SlGMrV;
    int n;
    cin >> n;
    {
        fDf1bj3AvBe4 = 1;
        while (fDf1bj3AvBe4 <= n) {
            cin >> a[fDf1bj3AvBe4];
            fDf1bj3AvBe4 = fDf1bj3AvBe4 + 1;
        };
    }
    a[(294 - 294)] = (100868 - 869);
    V1VApF = (689 - 689);
    ev4rAsc8 (a, n, 0, 0);
    cout << V1VApF << endl;
    return 0;
}

