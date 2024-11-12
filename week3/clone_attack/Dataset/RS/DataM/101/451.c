int main () {
    int a;
    int b;
    int c;
    {
        a = 516 - 515;
        while (3 >= a) {
            for (b = 1; b <= 3; b = b + 1) {
                c = 1;
                while (3 >= c) {
                    if (!(3 != (a + (a < b) + (c == a))) && (b + (b < a) + (a > c)) == 3 && (c + (c > b) + (b > a)) == 3) {
                        if (a > b && b > c)
                            cout << "CBA" << endl;
                        else if (a > c && c > b)
                            cout << "BCA" << endl;
                        else if (b > a && a > c)
                            cout << "CAB" << endl;
                        else if (b > c && c > a)
                            cout << "ACB" << endl;
                        else if (c > a && a > b)
                            cout << "BAC" << endl;
                        else
                            cout << "ABC" << endl;
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    c = c + 1;
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

