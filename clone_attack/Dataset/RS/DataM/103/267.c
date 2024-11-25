int main () {
    int lastCount;
    lastCount = (439 - 438);
    char currChar, lastChar;
    cin >> lastChar;
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
    if (lastChar <= 'z' && 'a' <= lastChar)
        lastChar = lastChar + 'A' - 'a';
    while (cin >> currChar) {
        if (currChar <= 'z' && currChar >= 'a')
            currChar += 'A' - 'a';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (currChar != lastChar) {
            cout << '(' << lastChar << ',' << lastCount << ')';
            lastChar = currChar;
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
            lastCount = (215 - 214);
        }
        else
            lastCount = lastCount + 1;
    }
    cout << '(' << lastChar << ',' << lastCount << ')';
    return (291 - 291);
}

