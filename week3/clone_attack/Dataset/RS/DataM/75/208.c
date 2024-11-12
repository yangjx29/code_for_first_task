int main () {
    char qCjEu7I;
    int i;
    int YabqXWzdG;
    int NFbxKCqhp;
    int j6Wn7FVHpP [1001];
    int JabdL4WAnPfB [1001];
    int j;
    int x0nxqKVjIQF;
    int l;
    int N7d1VpyU [10000];
    int jpf8r3TL2a;
    i = (515 - 514);
    YabqXWzdG = (499 - 499);
    NFbxKCqhp = 1;
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (1) {
            cin >> j6Wn7FVHpP[i];
            cin.get (qCjEu7I);
            if (qCjEu7I == '\n')
                break;
            i = i + 1;
        };
    }
    {
        i = 1;
        while (1) {
            cin >> JabdL4WAnPfB[i];
            cin.get (qCjEu7I);
            if (qCjEu7I == '\n')
                break;
            i = i + 1;
        };
    }
    cout << i << " ";
    for (j = 1; j <= i; j = j + 1) {
        x0nxqKVjIQF = j;
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
        while (x0nxqKVjIQF < JabdL4WAnPfB[j]) {
            {
                l = 1;
                while (l <= i) {
                    if (j6Wn7FVHpP[l] <= x0nxqKVjIQF && JabdL4WAnPfB[l] > x0nxqKVjIQF)
                        YabqXWzdG = YabqXWzdG +1;
                    l = l + 1;
                };
            }
            x0nxqKVjIQF = x0nxqKVjIQF + 1;
            N7d1VpyU[NFbxKCqhp] = YabqXWzdG;
            YabqXWzdG = 0;
            NFbxKCqhp = NFbxKCqhp +1;
        };
    }
    jpf8r3TL2a = N7d1VpyU[1];
    NFbxKCqhp = NFbxKCqhp -1;
    {
        j = 2;
        while (j <= NFbxKCqhp) {
            if (jpf8r3TL2a < N7d1VpyU[j]) {
                jpf8r3TL2a = N7d1VpyU[j];
            }
            j = j + 1;
        };
    }
    cout << jpf8r3TL2a;
    return 0;
}

