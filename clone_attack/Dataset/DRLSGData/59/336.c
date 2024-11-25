void  f (int MUZRzs0AvMD, int rr3UYofEQ1h, char Hp7bGWYFR [] [500]) {
    int x;
    int ItuP2My8JNY;
    x = 0;
    ItuP2My8JNY = 0;
    if (MUZRzs0AvMD > 1)
        f (MUZRzs0AvMD -1, rr3UYofEQ1h, Hp7bGWYFR);
    for (x = 0; x < rr3UYofEQ1h; x++) {
        ItuP2My8JNY = 0;
        for (; ItuP2My8JNY < rr3UYofEQ1h;) {
            {
                if (0) {
                    return 0;
                }
            }
            if (!('@' != Hp7bGWYFR[x][ItuP2My8JNY])) {
                if (!('.' != Hp7bGWYFR[x - 1][ItuP2My8JNY]))
                    Hp7bGWYFR[x - 1][ItuP2My8JNY] = '$';
                if (!('.' != Hp7bGWYFR[x + 1][ItuP2My8JNY]))
                    Hp7bGWYFR[x + 1][ItuP2My8JNY] = '$';
                if (!('.' != Hp7bGWYFR[x][ItuP2My8JNY -1]))
                    Hp7bGWYFR[x][ItuP2My8JNY -1] = '$';
                if (Hp7bGWYFR[x][ItuP2My8JNY +1] == '.')
                    Hp7bGWYFR[x][ItuP2My8JNY +1] = '$';
            }
            ItuP2My8JNY++;
        }
    }
    {
        x = 0;
        while (x < rr3UYofEQ1h) {
            {
                ItuP2My8JNY = 0;
                while (ItuP2My8JNY < rr3UYofEQ1h) {
                    if (!('$' != Hp7bGWYFR[x][ItuP2My8JNY]))
                        Hp7bGWYFR[x][ItuP2My8JNY] = '@';
                    ItuP2My8JNY++;
                }
            }
            x++;
        }
    }
}

int main () {
    int rr3UYofEQ1h = 0, m = 0, x = 0, ItuP2My8JNY = 0, sum = 0;
    char Hp7bGWYFR [500] [500] = {0}, b;
    b = getchar ();
    cin >> rr3UYofEQ1h;
    {
        x = 0;
        while (x < rr3UYofEQ1h) {
            for (ItuP2My8JNY = 0;; ItuP2My8JNY++) {
                Hp7bGWYFR[x][ItuP2My8JNY] = getchar ();
                if (Hp7bGWYFR[x][ItuP2My8JNY] == '\n')
                    break;
            }
            x++;
        }
    }
    cin >> m;
    f (m - 1, rr3UYofEQ1h, Hp7bGWYFR);
    for (x = 0; x < rr3UYofEQ1h; x++)
        for (ItuP2My8JNY = 0; ItuP2My8JNY < rr3UYofEQ1h; ItuP2My8JNY++)
            if (Hp7bGWYFR[x][ItuP2My8JNY] == '@')
                sum++;
    cout << sum;
    return 0;
}

