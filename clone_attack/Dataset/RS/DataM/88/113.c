int main () {
    int a;
    while (!cin.eof ()) {
        for (; !cin.eof () && !isdigit (cin.peek ());)
            cin.get ();
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (cin >> a)
            cout << a << endl;
    }
    return 0;
}

