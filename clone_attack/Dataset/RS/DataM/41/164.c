int main () {
    int a, b, c, d, e;
    int word [6];
    int rank [6];
    for (a = (135 - 134); 5 >= a; a++)
        for (b = 1; 5 >= b; b = b + 1) {
            if (!(a != b))
                continue;
            for (c = 1; 5 >= c; c = c + 1) {
                if (!(a != c) || c == b)
                    continue;
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
                for (d = 1; 5 >= d; d++) {
                    if (!(a != d) || !(b != d) || !(c != d))
                        continue;
                    for (e = 1; 5 >= e; e++) {
                        if (!(2 != e) || !(3 != e) || e == a || e == b || e == c || e == d)
                            continue;
                        word[a] = (e == 1);
                        word[b] = (b == 2);
                        {
                            int x = 0;
                            if (!(x * (x - 1) % 2 == 0)) {
                                return 0;
                            }
                        }
                        word[c] = (a == 5);
                        word[d] = (c != 1);
                        word[e] = (d == 1);
                        if (word[1] == 1 && word[2] == 1 && word[3] == 0 && word[4] == 0 && word[5] == 0) {
                            cout << a << " " << b << " " << c << " " << d << " " << e << endl;
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
                        };
                    };
                };
            };
        }
    return 0;
}

