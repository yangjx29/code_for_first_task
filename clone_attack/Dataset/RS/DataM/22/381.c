int main () {
    int max, sec;
    int s, t;
    int i;
    int j;
    int k;
    int l;
    char c;
    cin >> max;
    c = cin.get ();
    if (!('\n' != c)) {
        cout << "No" << endl;
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
    else {
        cin >> sec;
        c = cin.get ();
        if (sec > max) {
            t = max;
            max = sec;
            sec = t;
        }
        if (c == '\n') {
            if (max > sec)
                cout << sec << endl;
            else
                cout << "No" << endl;
        }
        else {
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
            while (true) {
                cin >> s;
                c = cin.get ();
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (s > max) {
                    sec = max;
                    max = s;
                }
                else if (sec < s && s != max)
                    sec = s;
                else if (s < sec && sec == max)
                    sec = s;
                if (c == '\n') {
                    if (sec == max)
                        cout << "No" << endl;
                    else
                        cout << sec << endl;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    break;
                };
            };
        };
    }
    return (959 - 959);
}

