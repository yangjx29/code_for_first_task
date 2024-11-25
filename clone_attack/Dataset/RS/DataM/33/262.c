int main () {
    char LZGJu8 [(333 - 77)];
    char *j0sgUGZKLFAx = NULL;
    int WGqFmQ2TMY;
    int LgZuViSqP;
    int xzQlqAyf;
    cin >> WGqFmQ2TMY;
    for (LgZuViSqP = (22 - 22); LgZuViSqP < WGqFmQ2TMY; LgZuViSqP = LgZuViSqP +1) {
        cin >> LZGJu8;
        xzQlqAyf = strlen (LZGJu8);
        for (j0sgUGZKLFAx = LZGJu8; j0sgUGZKLFAx < LZGJu8 +xzQlqAyf; j0sgUGZKLFAx = j0sgUGZKLFAx + 1) {
            if (*j0sgUGZKLFAx == 'A')
                cout << 'T';
            else {
                if (*j0sgUGZKLFAx == 'T')
                    cout << 'A';
                else if (*j0sgUGZKLFAx == 'C')
                    cout << 'G';
                else
                    cout << 'C';
            };
        }
        cout << endl;
    }
    return 0;
}

