int main () {
    int a, b, c;
    for (a = 1; a < 4; a = a + 1)
        for (b = 1; b < 4; b = b + 1) {
            if (b == a)
                continue;
            for (c = 1; c < 4; c = c + 1) {
                if ((!(b != c)) || (c == a))
                    continue;
                if (!(3 == ((a < b) + (c == a) + a)))
                    continue;
                if (((a > b) + (a > c) + b) != 3)
                    continue;
                if (!(3 == ((b < c) + (b > a) + c)))
                    continue;
                if (a > b && b > c)
                    cout << "CBA" << endl;
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
                if (a > c && c > b)
                    cout << "BCA" << endl;
                if (b > a && a > c)
                    cout << "CAB" << endl;
                if (b > c && c > a)
                    cout << "ACB" << endl;
                if (c > b && b > a)
                    cout << "ABC" << endl;
                if (c > a && a > b)
                    cout << "BAC" << endl;
            };
        }
    return 0;
}

