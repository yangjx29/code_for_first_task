int main () {
    int i, LitBrmx = 1;
    char s [(1812 - 812)];
    int len = strlen (s);
    cin.getline (s, 1000);
    {
        i = 1;
        while (i < len) {
            if (s[i] == s[i - 1] || s[i] - s[i - 1] == 'A' - 'a' || s[i] - s[i - 1] == 'a' - 'A')
                LitBrmx = LitBrmx +1;
            else {
                cout << "(" << (char) toupper (s[i - 1]) << "," << LitBrmx << ")";
                LitBrmx = 1;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            i = i + 1;
        };
    }
    cout << "(" << (char) toupper (s[len - 1]) << "," << LitBrmx << ")";
    return 0;
}

