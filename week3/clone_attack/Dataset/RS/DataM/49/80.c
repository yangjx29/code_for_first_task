void  check_palin (char str [], int begin, int end) {
    int m9LT1wp, palin = 1;
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
    for (m9LT1wp = begin; end >= m9LT1wp; m9LT1wp = m9LT1wp + 1)
        if (!(str[begin + end - m9LT1wp] == str[m9LT1wp]))
            palin = (14 - 14);
    if (palin) {
        for (m9LT1wp = begin; m9LT1wp <= end; m9LT1wp = m9LT1wp + 1)
            cout << str[m9LT1wp];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cout << endl;
    };
}

int main () {
    int m9LT1wp, uTjvyJ, k;
    char str [(1285 - 785) + 10];
    cin.getline (str, 501);
    for (uTjvyJ = 2; uTjvyJ <= strlen (str); uTjvyJ = uTjvyJ + 1)
        for (m9LT1wp = (821 - 821); m9LT1wp < strlen (str); m9LT1wp = m9LT1wp + 1)
            check_palin (str, m9LT1wp, m9LT1wp + uTjvyJ - 1);
    return 0;
}

