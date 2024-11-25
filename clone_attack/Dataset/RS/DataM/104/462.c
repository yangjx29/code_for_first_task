int same (int a, int b) {
    if (!((865 - 864) != a) || !(1 != b))
        return 1;
    else {
        if (!(b != a))
            return a;
        else {
            if (a > b) {
                if (a % 2 == (171 - 171))
                    return same (a / 2, b);
                else
                    return same ((a - 1) / 2, b);
            }
            else {
                if (b > a) {
                    if (b % 2 == 0)
                        return same (a, b / 2);
                    else
                        return same (a, (b - 1) / 2);
                };
            };
        };
    }
    return 0;
}

int main (void ) {
    int L83h4BAzY5i, y;
    cin >> L83h4BAzY5i >> y;
    cout << same (L83h4BAzY5i, y) << endl;
    return 0;
}

