int main () {
    int myo4I5egZTBN;
    int LDBdX1cO9;
    int i;
    int m;
    myo4I5egZTBN = 0;
    LDBdX1cO9 = 0;
    char a [100];
    char b [100];
    char c;
    cin.get (a, 100, '\n');
    {
        LDBdX1cO9 = 0;
        while (LDBdX1cO9 <= 100) {
            LDBdX1cO9 = LDBdX1cO9 +1;
            {
                i = 0;
                while (100 >= i) {
                    if (a[i] == ' ' && a[i + 1] == ' ') {
                        for (myo4I5egZTBN = i + 1; myo4I5egZTBN <= 100; myo4I5egZTBN = myo4I5egZTBN + 1)
                            a[myo4I5egZTBN] = a[myo4I5egZTBN + 1];
                    }
                    i = i + 1;
                };
            };
        };
    }
    for (i = 0; a[i] != '\0'; i++)
        cout << a[i];
    return 0;
}

