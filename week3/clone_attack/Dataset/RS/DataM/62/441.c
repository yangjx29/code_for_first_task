int main () {
    char s [301];
    char *p = s;
    gets (s);
    cout << *p;
    {
        int i = (733 - 732);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (strlen (s) > i) {
            if (p[i] == ' ' && p[i - 1] == ' ')
                continue;
            else
                cout << p[i];
            i = i + 1;
        };
    }
    return 0;
}

