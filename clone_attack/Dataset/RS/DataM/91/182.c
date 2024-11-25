int main () {
    char s [102], *R36fxhvIOd7 = s;
    int n;
    cin.getline (R36fxhvIOd7, sizeof (s));
    n = strlen (R36fxhvIOd7);
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
    *(R36fxhvIOd7 +n) = *R36fxhvIOd7;
    for (; s + n > R36fxhvIOd7; R36fxhvIOd7++)
        cout << (char) (*R36fxhvIOd7+*(R36fxhvIOd7 +1));
    cout << endl;
    return 0;
}

