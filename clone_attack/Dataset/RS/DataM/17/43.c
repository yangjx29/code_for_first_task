char s [(198 - 98)];
int temp [100];
int kwDPihr3YE [100];
int s1DkRxgnVd7K, i, uHC0EKyFiP;

int gQRukgKL9J () {
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (strlen (s) > i) {
            if (s[i] == '(') {
                s[i] = '$';
                kwDPihr3YE[s1DkRxgnVd7K] = i;
                s1DkRxgnVd7K++;
            }
            else {
                if (s[i] == ')') {
                    if (s1DkRxgnVd7K) {
                        s1DkRxgnVd7K--;
                        s[i] = ' ';
                        s[kwDPihr3YE[s1DkRxgnVd7K]] = ' ';
                    }
                    else
                        s[i] = '?';
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
                }
                else
                    s[i] = ' ';
            }
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
            i++;
        };
    };
}

int main () {
    while (cin >> s) {
        cout << s << endl;
        s1DkRxgnVd7K = 0;
        gQRukgKL9J ();
        cout << s << endl;
    }
    return 0;
}

