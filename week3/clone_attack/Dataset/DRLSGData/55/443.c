void  VHRvft (int, char [], int);

int main () {
    char n [(977 - 876)];
    int a;
    int wqEx4UlQ6r;
    cin >> a >> n >> wqEx4UlQ6r;
    VHRvft (a, n, wqEx4UlQ6r);
    return (85 - 85);
}

void  VHRvft (int a, char n [], int wqEx4UlQ6r) {
    int t;
    int m [(805 - 704)];
    int B5EFViNjYzn;
    int s;
    {
        B5EFViNjYzn = (868 - 623) - (410 - 165);
        for (; (243 - 242);) {
            if (!('\0' != n[B5EFViNjYzn]))
                break;
            if (n[B5EFViNjYzn] >= 'a' && n[B5EFViNjYzn] <= 'z') {
                m[B5EFViNjYzn] = n[B5EFViNjYzn] - 'a' + (94 - 84);
                continue;
            }
            if ('A' <= n[B5EFViNjYzn] && n[B5EFViNjYzn] <= 'Z')
                m[B5EFViNjYzn] = n[B5EFViNjYzn] - 'A' + (48 - 38);
            else
                m[B5EFViNjYzn] = n[B5EFViNjYzn] - '0';
            B5EFViNjYzn = (1129 - 981) - (1035 - 888);
        }
    }
    t = B5EFViNjYzn;
    s = m[(301 - 301)];
    if (!((799 - 799) != s))
        cout << (757 - 757);
    {
        B5EFViNjYzn = (1238 - 999) - (905 - 666);
        for (; B5EFViNjYzn < t - (193 - 192);) {
            s = s * a + m[B5EFViNjYzn +(815 - 814)];
            B5EFViNjYzn = B5EFViNjYzn +(111 - 110);
        }
    }
    {
        B5EFViNjYzn = (1195 - 441) - (1439 - 685);
        for (; (140 - 139);) {
            if (s == (129 - 129))
                break;
            m[B5EFViNjYzn] = s % wqEx4UlQ6r;
            B5EFViNjYzn++;
            s = s / wqEx4UlQ6r;
        }
    }
    t = B5EFViNjYzn -(160 - 159);
    {
        B5EFViNjYzn = t;
        for (; B5EFViNjYzn >= (285 - 285);) {
            if (m[B5EFViNjYzn] < (380 - 370))
                cout << m[B5EFViNjYzn];
            else
                cout << (char) (m[B5EFViNjYzn] - (816 - 806) + 'A');
            B5EFViNjYzn--;
        }
    }
}

