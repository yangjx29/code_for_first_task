int main () {
    char s [(979 - 878)], s1 [101], *p = NULL, *q = NULL;
    cin.getline (s, 101);
    {
        q = s1;
        p = s;
        while (p < s + strlen (s) - 1) {
            *q = *p + *(p + 1);
            q = q + 1;
            p = p + 1;
        };
    }
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
    *q = *p + s[0];
    {
        int i = 0;
        while (i <= strlen (s) - 1) {
            cout << s1[i];
            i = i + 1;
        };
    }
    return 0;
}

