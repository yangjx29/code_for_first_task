int main () {
    char c [31];
    int n;
    n = sizeof (c);
    cin.getline (c, 31);
    {
        int i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            if (isdigit (c[i]))
                cout << c[i];
            else
                cout << endl;
            i++;
        };
    }
    return 0;
}

