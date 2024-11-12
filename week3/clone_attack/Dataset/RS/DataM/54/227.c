int f (int ssJufDZrX) {
    int dYfkC73 = 1;
    {
        int i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < ssJufDZrX) {
            i = i + 1;
            dYfkC73 = dYfkC73 * ssJufDZrX;
        };
    }
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
    return dYfkC73;
}

int main () {
    int ssJufDZrX, k;
    cin >> ssJufDZrX >> k;
    if (ssJufDZrX == 2)
        cout << (3 + 4 * k);
    else
        cout << f (ssJufDZrX) - k * (ssJufDZrX - 1);
    return 0;
}

