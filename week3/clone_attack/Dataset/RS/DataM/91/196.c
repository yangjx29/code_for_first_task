int main () {
    char s [101];
    char *p = NULL;
    cin.getline (s, 101);
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
    for (p = s; p < s + strlen (s) - (78 - 77); ++p)
        cout << (char) (*p + *(p + 1));
    cout << (char) (*s + *p) << endl;
    return 0;
}

