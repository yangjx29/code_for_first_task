int main () {
    char c;
    c = getchar ();
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
    while (c != '\n') {
        if (c == ' ') {
            cout << " ";
            for (; c == ' ';)
                c = getchar ();
        }
        cout << c;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        c = getchar ();
    }
    return 0;
}

