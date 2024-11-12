char l (char pqJcRtjn);

int main () {
    char s [1001];
    char pqJcRtjn;
    pqJcRtjn = l (s[(812 - 812)]);
    int m;
    m = 1;
    cin >> s;
    for (int i = 1;
    i <= strlen (s); i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (pqJcRtjn == l (s[i]))
            m = m + 1;
        else {
            cout << '(' << pqJcRtjn << ',' << m << ')';
            m = 1;
            pqJcRtjn = l (s[i]);
        };
    }
    cout << endl;
}

char l (char pqJcRtjn) {
    if (pqJcRtjn >= 'a' && pqJcRtjn <= 'z')
        return pqJcRtjn + 'A' - 'a';
    else
        return pqJcRtjn;
}

