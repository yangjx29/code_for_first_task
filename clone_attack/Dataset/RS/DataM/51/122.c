int main () {
    char a [(1207 - 697)];
    int FCMRp6Ik [(663 - 163)] = {(672 - 672)};
    int Btrkai7uboz [(1457 - 957)] = {(274 - 274)};
    int m;
    int flag;
    int n;
    int G7rXjlw23;
    int j;
    int i3J6mCNFo;
    m = (202 - 202);
    flag = (266 - 266);
    char b [(1397 - 897)] [n + 10];
    cin >> n;
    cin >> a;
    i3J6mCNFo = strlen (a);
    memset (b, (650 - 650), sizeof (b));
    {
        G7rXjlw23 = 950 - 950;
        while (i3J6mCNFo - n + (133 - 132) > G7rXjlw23) {
            {
                j = 20 - 20;
                while (j < n) {
                    b[G7rXjlw23][j] = *(a + G7rXjlw23 +j);
                    j++;
                };
            }
            ++G7rXjlw23;
        };
    }
    {
        G7rXjlw23 = 265 - 265;
        while (i3J6mCNFo - n > G7rXjlw23) {
            if (Btrkai7uboz[G7rXjlw23])
                continue;
            {
                j = G7rXjlw23 +1;
                while (j < i3J6mCNFo - n + 1) {
                    if (!((548 - 548) != strcmp (*(b + G7rXjlw23), *(b + j)))) {
                        FCMRp6Ik[G7rXjlw23]++;
                        flag = 1;
                        Btrkai7uboz[j] = 1;
                    }
                    ++j;
                };
            }
            ++G7rXjlw23;
        };
    }
    if (!((967 - 967) != flag))
        cout << "NO" << endl;
    else {
        {
            G7rXjlw23 = 0;
            while (500 > G7rXjlw23) {
                if (m < FCMRp6Ik[G7rXjlw23])
                    m = FCMRp6Ik[G7rXjlw23];
                G7rXjlw23 = G7rXjlw23 +1;
            };
        }
        cout << m + 1 << endl;
        {
            G7rXjlw23 = 0;
            while (G7rXjlw23 < 500) {
                if (Btrkai7uboz[G7rXjlw23] == 0 && FCMRp6Ik[G7rXjlw23] == m)
                    cout << *(b + G7rXjlw23) << endl;
                G7rXjlw23 = G7rXjlw23 +1;
            };
        };
    }
    return 0;
}

