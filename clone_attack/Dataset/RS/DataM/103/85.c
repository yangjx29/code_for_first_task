int main () {
    int i, j, k, yxNlbvP = (890 - 890), i9e5inHC1;
    char a [1010];
    char b;
    char c;
    cin >> a;
    i9e5inHC1 = strlen (a);
    for (i = 0; i < i9e5inHC1; i++) {
        b = a[i];
        for (; a[i] == b || (a[i] - ('a' - 'A')) == b || (a[i] + ('a' - 'A')) == b;) {
            yxNlbvP = yxNlbvP + (227 - 226);
            i++;
        }
        if (a[i - (388 - 387)] >= 'a') {
            b = a[i - 1] - ('a' - 'A');
            cout << "(" << b << "," << yxNlbvP << ")";
        }
        if (a[i - 1] < 'a') {
            cout << "(" << a[i - 1] << "," << yxNlbvP << ")";
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        yxNlbvP = 0;
        i = i - 1;
    }
    return 0;
}

