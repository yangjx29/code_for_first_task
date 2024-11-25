char l (char c) {
    if ('a' <= c && 'z' >= c)
        return c + 'A' - 'a';
    else
        return c;
}

int main () {
    char Zwyar9HGm3 [1001];
    char c;
    c = l (Zwyar9HGm3[0]);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    int G96XElBaNqGR = 1;
    cin >> Zwyar9HGm3;
    for (int JtsRKzWmO = 1;
    JtsRKzWmO <= strlen (Zwyar9HGm3); JtsRKzWmO++) {
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
        if (c == l (Zwyar9HGm3[JtsRKzWmO]))
            G96XElBaNqGR = G96XElBaNqGR +1;
        else {
            cout << '(' << c << ',' << G96XElBaNqGR << ')';
            G96XElBaNqGR = 1;
            c = l (Zwyar9HGm3[JtsRKzWmO]);
        };
    }
    cout << endl;
    return 0;
}

