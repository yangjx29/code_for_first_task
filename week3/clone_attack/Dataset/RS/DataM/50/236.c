int main () {
    int MJSY8NuLi9 [(326 - 313)] = {0, (740 - 709), (74 - 46), (213 - 182), 30, (915 - 884), 30, (62 - 31), 31, 30, 31, 30, 31}, IXY0tar9o [(893 - 880)];
    int w, i;
    cin >> w;
    w = (w + (990 - 978)) % (708 - 701);
    IXY0tar9o[1] = w;
    if (!(5 != w))
        cout << 1 << endl;
    {
        i = 2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= 12) {
            IXY0tar9o[i] = (IXY0tar9o[i - 1] + MJSY8NuLi9[i - 1]) % 7;
            if (IXY0tar9o[i] == 5)
                cout << i << endl;
            i = i + 1;
        };
    }
    return 0;
}

