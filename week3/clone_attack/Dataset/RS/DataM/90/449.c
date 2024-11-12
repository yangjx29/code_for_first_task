int q4ixTfl (int c, int XHIP7jFXZ8Ul);

int main () {
    int m;
    int M3npaQB87;
    int zybKGVqs0HBN;
    int i;
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
    cin >> m;
    {
        i = 976 - 975;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (m >= i) {
            i = i + 1;
            cin >> M3npaQB87 >> zybKGVqs0HBN;
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
            if (!(0 != M3npaQB87))
                cout << "1" << endl;
            else if (!(1 != M3npaQB87))
                cout << zybKGVqs0HBN << endl;
            else
                cout << q4ixTfl (M3npaQB87, zybKGVqs0HBN) << endl;
        };
    }
    return 0;
}

int q4ixTfl (int c, int XHIP7jFXZ8Ul) {
    if (c == 1 || c == 0 || XHIP7jFXZ8Ul == 1)
        return 1;
    if (c < 0)
        return 0;
    else
        return q4ixTfl (c - XHIP7jFXZ8Ul, XHIP7jFXZ8Ul) + q4ixTfl (c, XHIP7jFXZ8Ul -1);
}

