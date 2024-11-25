int main () {
    char s [1005];
    gets (s);
    int i;
    int MsUBuzrtc8o;
    int jV9TzAqHijF;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    i = 0;
    MsUBuzrtc8o = 1;
    while (!('\0' == s[i])) {
        if (0 <= s[i] - 'a' && s[i] - 'z' <= 0)
            s[i] = s[i] - 'a' + 'A';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i = i + 1;
    }
    i = 0;
    while (s[i] != '\0') {
        if ((s[i]) != (s[i + 1])) {
            printf ("(%c,%d)", s[i], MsUBuzrtc8o);
            MsUBuzrtc8o = 1;
        }
        else
            MsUBuzrtc8o = MsUBuzrtc8o +1;
        i++;
    };
}

