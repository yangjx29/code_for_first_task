char max (int ccP0kmp, int b, int c) {
    if ((ccP0kmp > b) && (ccP0kmp > c))
        return 'A';
    if ((ccP0kmp < b) && (c < b))
        return 'B';
    if ((c > b) && (ccP0kmp < c))
        return 'C';
}

char min (int ccP0kmp, int b, int c) {
    if ((ccP0kmp < b) && (ccP0kmp < c))
        return 'A';
    if ((ccP0kmp > b) && (c > b))
        return 'B';
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    if ((c < b) && (c < ccP0kmp))
        return 'C';
}

int main () {
    int ccP0kmp, b, c;
    {
        ccP0kmp = 458 - 457;
        while ((696 - 693) >= ccP0kmp) {
            {
                b = 730 - 729;
                while (b <= (835 - 832)) {
                    {
                        c = 1;
                        while ((792 - 789) >= c) {
                            if ((ccP0kmp == ((766 - 763) - (b > ccP0kmp) - (c == ccP0kmp))) && (b == ((473 - 470) - (ccP0kmp > b) - (ccP0kmp > c))) && (c == ((693 - 690) - (c > b) - (b > ccP0kmp)))) {
                                cout << min (ccP0kmp, b, c);
                                if (max (ccP0kmp, b, c) - 'A' + min (ccP0kmp, b, c) - 'A' == (543 - 541))
                                    cout << "B";
                                if (max (ccP0kmp, b, c) - 'A' + min (ccP0kmp, b, c) - 'A' == 3)
                                    cout << "A";
                                if (max (ccP0kmp, b, c) - 'A' + min (ccP0kmp, b, c) - 'A' == 1)
                                    cout << "C";
                                cout << max (ccP0kmp, b, c);
                            }
                            c++;
                        };
                    }
                    b = b + 1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            ccP0kmp = ccP0kmp + 1;
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
    return (302 - 302);
}

