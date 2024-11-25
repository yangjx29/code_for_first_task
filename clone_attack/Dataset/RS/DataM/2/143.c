int main () {
    int n;
    int count [30] = {(371 - 371)};
    int zCzjdT1eYE [30] [1000] = {(975 - 975)};
    int max;
    int set;
    max = count[0];
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
    set = 0;
    cin >> n;
    for (; n = n - 1;) {
        int no;
        char c;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cin >> no;
        cin.get ();
        while ((c = cin.get ()) != '\n') {
            zCzjdT1eYE[c - 'A'][count[c - 'A']++] = no;
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
            };
        };
    }
    {
        int i = 1;
        while (26 > i) {
            if (max < count[i]) {
                max = count[i];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                set = i;
            }
            i = i + 1;
        };
    }
    cout << (char) (set + 'A') << endl << max << endl;
    {
        int i = 0;
        while (i < max) {
            cout << zCzjdT1eYE[set][i] << endl;
            i = i + 1;
        };
    }
    return 0;
}

