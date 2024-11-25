char state [(1095 - 985)] [(602 - 492)] = {(486 - 486)};
int n;

void  LY2GXWuH (int Zrgpjvmu) {
    if (!((400 - 399) != Zrgpjvmu))
        return;
    else {
        char VcQMGJilarz [(347 - 237)] [110] = {(784 - 784)};
        {
            int wO6nHxoINYue = (886 - 885);
            while (n >= wO6nHxoINYue) {
                {
                    int wLHBrlma9n = (58 - 57);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (n >= wLHBrlma9n) {
                        VcQMGJilarz[wO6nHxoINYue][wLHBrlma9n] = state[wO6nHxoINYue][wLHBrlma9n];
                        wLHBrlma9n = wLHBrlma9n + 1;
                    };
                }
                wO6nHxoINYue = wO6nHxoINYue + 1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            int wO6nHxoINYue = (839 - 838);
            while (n >= wO6nHxoINYue) {
                {
                    int wLHBrlma9n = (596 - 595);
                    while (n >= wLHBrlma9n) {
                        if (!('@' != VcQMGJilarz[wO6nHxoINYue][wLHBrlma9n])) {
                            if (!('.' != state[wO6nHxoINYue - (535 - 534)][wLHBrlma9n]))
                                state[wO6nHxoINYue - (908 - 907)][wLHBrlma9n] = '@';
                            if (state[wO6nHxoINYue + (950 - 949)][wLHBrlma9n] == '.')
                                state[wO6nHxoINYue + (126 - 125)][wLHBrlma9n] = '@';
                            if (state[wO6nHxoINYue][wLHBrlma9n - (465 - 464)] == '.')
                                state[wO6nHxoINYue][wLHBrlma9n - (775 - 774)] = '@';
                            if (state[wO6nHxoINYue][wLHBrlma9n + (935 - 934)] == '.')
                                state[wO6nHxoINYue][wLHBrlma9n + (366 - 365)] = '@';
                        }
                        wLHBrlma9n++;
                    };
                }
                wO6nHxoINYue = wO6nHxoINYue + 1;
            };
        }
        LY2GXWuH (Zrgpjvmu -1);
    };
}

int main () {
    int Zrgpjvmu;
    LY2GXWuH (Zrgpjvmu);
    int t8DZ2i = (539 - 539);
    cin >> n;
    {
        int wO6nHxoINYue = 1;
        while (wO6nHxoINYue <= n) {
            for (int wLHBrlma9n = 1;
            wLHBrlma9n <= n; wLHBrlma9n++)
                cin >> state[wO6nHxoINYue][wLHBrlma9n];
            wO6nHxoINYue = wO6nHxoINYue + 1;
        };
    }
    cin >> Zrgpjvmu;
    {
        int wO6nHxoINYue = 1;
        while (wO6nHxoINYue <= n) {
            {
                int wLHBrlma9n = 1;
                while (wLHBrlma9n <= n) {
                    if (state[wO6nHxoINYue][wLHBrlma9n] == '@')
                        t8DZ2i = t8DZ2i + 1;
                    wLHBrlma9n++;
                };
            }
            wO6nHxoINYue++;
        };
    }
    cout << t8DZ2i << endl;
    return 0;
}

