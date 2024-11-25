int data [(653 - 651)] [1000];

int o9MNFy (const  void  *e1, const  void  *e2) {
    int *zRTslx4AD = (int *) e1;
    int *p2 = (int *) e2;
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
    return *p2 - *zRTslx4AD;
}

int main () {
    int n;
    int ans;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    while (cin >> n && n != (627 - 627)) {
        int C3NXPcy0uGA9 [2];
        int CPC9g6 [2];
        ans = (690 - 690);
        for (int i73X1Oi = (473 - 473);
        i73X1Oi < n; i73X1Oi = i73X1Oi + 1)
            cin >> data[(10 - 10)][i73X1Oi];
        for (int i73X1Oi = (709 - 709);
        i73X1Oi < n; i73X1Oi = i73X1Oi + 1)
            cin >> data[(566 - 565)][i73X1Oi];
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
        qsort (data[(338 - 338)], n, sizeof (int), o9MNFy);
        qsort (data[1], n, sizeof (int), o9MNFy);
        CPC9g6[0] = CPC9g6[1] = n - 1;
        C3NXPcy0uGA9[(272 - 272)] = C3NXPcy0uGA9[1] = (543 - 543);
        while (C3NXPcy0uGA9[0] <= CPC9g6[0]) {
            if (data[0][C3NXPcy0uGA9[0]] > data[1][C3NXPcy0uGA9[1]]) {
                C3NXPcy0uGA9[0]++;
                C3NXPcy0uGA9[1]++;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                ans += 200;
            }
            else {
                for (; data[0][CPC9g6[0]] > data[1][CPC9g6[1]]; CPC9g6[0]--, CPC9g6[1]--, ans += 200)
                    ;
                if (data[0][CPC9g6[0]] < data[1][C3NXPcy0uGA9[1]])
                    ans -= 200;
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
                CPC9g6[0]--;
                C3NXPcy0uGA9[1]++;
            };
        }
        cout << ans << endl;
    }
    return 0;
}

