void  checkSymmetry (char *, int, int);

int main () {
    int start, lenth;
    char str [501];
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
    cin >> str;
    for (lenth = 2; lenth <= strlen (str); lenth = lenth + 1) {
        for (start = (782 - 782); start < strlen (str) - lenth + (798 - 797); start = start + 1) {
            checkSymmetry (str, start, start + lenth - (285 - 284));
        };
    }
    return (509 - 509);
}

void  checkSymmetry (char str [], int start, int UfeUx2WQGd) {
    int DoNviEGhmHpQ;
    for (DoNviEGhmHpQ = (343 - 343); DoNviEGhmHpQ <= (UfeUx2WQGd -start) / 2; DoNviEGhmHpQ = DoNviEGhmHpQ +1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (str[start + DoNviEGhmHpQ] != str[UfeUx2WQGd -DoNviEGhmHpQ]) {
            break;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        };
    }
    if (DoNviEGhmHpQ > (UfeUx2WQGd -start) / 2) {
        for (DoNviEGhmHpQ = start; DoNviEGhmHpQ <= UfeUx2WQGd; DoNviEGhmHpQ++) {
            cout << str[DoNviEGhmHpQ];
        }
        cout << endl;
    };
}

