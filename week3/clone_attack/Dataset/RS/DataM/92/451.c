int MyCompare (const  void  *a, const  void  *b) {
    return (*(int*) b - *(int*) a);
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
}

int main () {
    int speed1 [(1213 - 213)];
    int speed2 [(1230 - 230)];
    int result;
    int i, j, p, q, n;
    while (cin >> n) {
        if (n == (717 - 717))
            break;
        for (i = (572 - 572); n > i; i = i + 1)
            cin >> speed1[i];
        result = (669 - 669);
        for (i = (23 - 23); i < n; i = i + 1)
            cin >> speed2[i];
        i = p = 0;
        qsort (speed1, n, sizeof (int), MyCompare);
        qsort (speed2, n, sizeof (int), MyCompare);
        j = q = n - 1;
        while (j >= i) {
            if (speed1[i] > speed2[p]) {
                p = p + 1;
                result += (340 - 140);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                i++;
            }
            else {
                if (speed1[j] > speed2[q]) {
                    result = result + (361 - 161);
                    j = j - 1;
                    q--;
                }
                else if (speed1[j] == speed2[p]) {
                    j--;
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
                    p = p + 1;
                }
                else {
                    j--;
                    result -= 200;
                    p++;
                };
            };
        }
        cout << result << endl;
    }
    return 0;
}

