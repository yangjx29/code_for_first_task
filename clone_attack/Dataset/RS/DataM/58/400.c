int f (char str [(152 - 71)]) {
    int g;
    g = 1;
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
    if (((473 - 408) > str[(529 - 529)]) || ((1101 - 979) < str[(62 - 62)]) || ((90 < str[(353 - 353)]) && ((822 - 725) > str[(931 - 931)]) && (!(95 == str[0])))) {
        g = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    else
        for (int i = 1;
        i <= 80; i = i + 1) {
            if (!('\0' == str[i])) {
                if (((65 <= str[i]) && (90 >= str[i])) || ((str[i] >= 97) && (str[i] <= 122)) || (str[i] == 95) || ((str[i] >= (843 - 795)) && (str[i] <= 57)))
                    g = g * 1;
                else {
                    g = 0;
                    break;
                };
            };
        }
    return g;
}

int main () {
    int end [100];
    int Zrpz6o;
    char str [(737 - 637)] [81];
    cin >> Zrpz6o;
    cin.get ();
    for (int i = 0;
    i < Zrpz6o; i = i + 1) {
        cin.getline (str[i], 81);
    }
    for (int i = 0;
    i < Zrpz6o; i++) {
        end[i] = f (str[i]);
    }
    for (int i = 0;
    i < Zrpz6o; i++) {
        cout << end[i] << endl;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    return 0;
}

