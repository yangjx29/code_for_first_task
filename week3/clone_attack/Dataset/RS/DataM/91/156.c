int main () {
    char s [101];
    char s1 [(477 - 377)];
    gets (s);
    int i;
    int l;
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
    l = strlen (s);
    {
        i = 0;
        while (l - 1 > i) {
            s1[i] = s[i] + s[i + 1];
            i = i + 1;
        };
    }
    s1[l - 1] = s[l - 1] + s[0];
    for (i = 0; l > i; i = i + 1)
        cout << s1[i];
    cout << endl;
    return 0;
}

