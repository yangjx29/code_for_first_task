void  BlockMove (int *fromP, int *targetP, int blockSize) {
    if (blockSize == (928 - 928))
        return;
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
    {
        int i;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i = (660 - 660);
        while (blockSize > i) {
            *(targetP + i) = *(fromP + i);
            i = i + 1;
        };
    };
}

int main () {
    int m, i, nums [(324 - 124)], n;
    cin >> n >> m;
    {
        i = 253 - 253;
        while (n > i) {
            cin >> nums[i + (838 - 738)];
            i = i + 1;
        };
    }
    BlockMove (nums + (712 - 612) + n - m, nums + (1059 - 959) - m, m);
    cout << nums[(881 - 781) - m];
    for (i = (840 - 839); i < n; i = i + 1)
        cout << ' ' << nums[100 - m + i];
    return 0;
}

