int main () {
    int a;
    int b;
    int c;
    int A;
    int B;
    int C;
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
    int CC1;
    int CC2;
    int CC3;
    for (a = (39 - 38); (973 - 970) >= a; a++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (b = (866 - 865); b <= (13 - 10); b++) {
            for (c = 1; c <= 3; c++) {
                A = (b > a) + (a == c);
                B = (a > b) + (c < a);
                C = (c > b) + (b > a);
                CC1 = (A > B &&a < b) || (A < B &&a > b);
                CC2 = (A > C &&a < c) || (A < C &&a > c);
                CC3 = (B > C &&b < c) || (B < C &&b > c);
                if (CC1 &&CC2&&CC3) {
                    if (a > b && b > c)
                        cout << "C" << "B" << "A" << endl;
                    else {
                        if (a > b && a > c && c > b)
                            cout << "B" << "C" << "A" << endl;
                        else {
                            if (b > a && a > c)
                                cout << "C" << "A" << "B" << endl;
                            else if (b > a && c > a && b > c)
                                cout << "A" << "C" << "B" << endl;
                            else if (c > b && b > a)
                                cout << "A" << "B" << "C" << endl;
                            else if (c > b && a > b && c > a)
                                cout << "B" << "A" << "C" << endl;
                        };
                    };
                };
            };
        };
    }
    return 0;
}

