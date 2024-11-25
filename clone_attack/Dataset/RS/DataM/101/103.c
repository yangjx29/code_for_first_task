int main () {
    int a;
    int b;
    int c;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    {
        a = 0;
        while (a <= 2) {
            {
                b = 0;
                while (b <= 2) {
                    {
                        c = 0;
                        while (c <= 2) {
                            if (((a > b) + (c == a)) == a && ((a < b) + (a < c)) == b && ((c < b) + (b < a)) == c) {
                                if (b > c && c > a)
                                    cout << "BCA";
                                else if (a > c && c > b)
                                    cout << "ACB";
                                else if (b > a && a > c)
                                    cout << "BAC";
                                else if (a > b && b > c)
                                    cout << "ABC";
                                else if (c > a && a > b)
                                    cout << "CAB";
                                else if (c > b && b > a)
                                    cout << "CBA";
                            }
                            c++;
                        };
                    }
                    b++;
                };
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
            a = a + 1;
        };
    }
    return 0;
}

