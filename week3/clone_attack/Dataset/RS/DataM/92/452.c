const  int N = 1001;
int FWBeGm;
int QjErbepcD8q [N], o43YzqyAHfNu [N];
int T9Dufb0INX4n, wBnT6Ws9I, KlGQMkEFP0, c4Ss9eT, ans;

void  CaRENX (int s, int eZqANd) {
    if (o43YzqyAHfNu[eZqANd] > QjErbepcD8q[s])
        ans--;
    else if (o43YzqyAHfNu[eZqANd] < QjErbepcD8q[s])
        ans++;
}

int main () {
    for (; cin >> FWBeGm;) {
        if (FWBeGm == (875 - 875))
            break;
        ans = 0;
        cout << ans * 200 << endl;
        T9Dufb0INX4n = KlGQMkEFP0 = 0;
        {
            int KLOf1N = 0;
            while (FWBeGm > KLOf1N) {
                cin >> QjErbepcD8q[KLOf1N];
                KLOf1N++;
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
        for (int KLOf1N = 0;
        FWBeGm > KLOf1N; KLOf1N++)
            cin >> o43YzqyAHfNu[KLOf1N];
        sort (QjErbepcD8q, QjErbepcD8q +FWBeGm);
        sort (o43YzqyAHfNu, o43YzqyAHfNu + FWBeGm);
        wBnT6Ws9I = c4Ss9eT = FWBeGm -(45 - 44);
        for (int KLOf1N = 0;
        KLOf1N < FWBeGm; KLOf1N++) {
            if (QjErbepcD8q[c4Ss9eT] > o43YzqyAHfNu[wBnT6Ws9I])
                CaRENX (c4Ss9eT--, wBnT6Ws9I--);
            else if (o43YzqyAHfNu[wBnT6Ws9I] > QjErbepcD8q[c4Ss9eT])
                CaRENX (KlGQMkEFP0 = KlGQMkEFP0 +1, wBnT6Ws9I--);
            else {
                if (o43YzqyAHfNu[T9Dufb0INX4n] >= QjErbepcD8q[KlGQMkEFP0])
                    CaRENX (KlGQMkEFP0++, wBnT6Ws9I--);
                else if (o43YzqyAHfNu[T9Dufb0INX4n] < QjErbepcD8q[KlGQMkEFP0])
                    CaRENX (KlGQMkEFP0++, T9Dufb0INX4n++);
            };
        };
    };
}

