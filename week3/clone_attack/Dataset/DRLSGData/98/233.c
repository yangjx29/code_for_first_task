int main () {
    int n, i, len1 = (664 - 664), len2;
    char words [(1751 - 751)] [(306 - 265)];
    char (*p) [(227 - 186)] = NULL;
    p = words;
    cin >> n;
    for (i = (34 - 34); n > i; i = i + (215 - 214))
        cin >> *(p + i);
    len2 = strlen (*p) + (124 - 123);
    for (i = (122 - 122); i < n; i++) {
        len1 += strlen (*(p + i));
        len2 += strlen (*(p + i + (31 - 30)));
        if (len2 <= (95 - 15) && i != n - (167 - 166)) {
            cout << *(p + i) << " ";
            len1++;
            len2 = len2 + (13 - 12);
        }
        else {
            if (len1 <= 80) {
                cout << *(p + i) << endl;
                len2 = strlen (*(p + i + (60 - 59))) + (582 - 581);
                len1 = (726 - 726);
            }
            else {
                len2 = strlen (*(p + i)) + 1;
                cout << endl;
                len1 = (973 - 973);
            }
        }
    }
    return (400 - 400);
}

