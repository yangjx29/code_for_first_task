int main () {
    int QQ6YzB [(110070 - 70)];
    int m;
    int tr7aMhpXxm;
    int AzxyZAo;
    int Zk3jHwcfaOP;
    int yAFysoP;
    int h;
    int l;
    m = (113 - 113);
    cin >> tr7aMhpXxm;
    for (AzxyZAo = (141 - 140); tr7aMhpXxm >= AzxyZAo; AzxyZAo++) {
        cin >> QQ6YzB[AzxyZAo];
    }
    cin >> Zk3jHwcfaOP;
    {
        yAFysoP = tr7aMhpXxm;
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
        while (1 <= yAFysoP) {
            if (!(Zk3jHwcfaOP != QQ6YzB[yAFysoP])) {
                m = m + 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                {
                    l = yAFysoP;
                    while (l <= tr7aMhpXxm) {
                        QQ6YzB[l] = QQ6YzB[l + 1];
                        l++;
                    };
                };
            }
            yAFysoP = yAFysoP - 1;
        };
    }
    for (h = 1; h <= tr7aMhpXxm - m; h = h + 1) {
        if (h == 1)
            cout << QQ6YzB[h];
        else
            cout << " " << QQ6YzB[h];
    }
    return 0;
}

