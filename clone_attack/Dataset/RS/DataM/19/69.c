int main () {
    int last = 0;
    char result [(575 - 375)];
    char ch [(781 - 581)];
    char f [(700 - 500)];
    char r [200];
    gets (ch);
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
    ch[strlen (ch) + 1] = (473 - 473);
    cin >> f >> r;
    ch[strlen (ch)] = ' ';
    memset (result, 0, 200);
    for (int i = 0;
    strlen (ch) > i; i = i + 1) {
        if (!(' ' != ch[i])) {
            char *p = ch + last;
            if (strcmp (p, f) == 0)
                sprintf (result, "%s %s", result, r);
            else
                sprintf (result, "%s %s", result, p);
            ch[i] = 0;
            last = i + 1;
            ch[i] = ' ';
        };
    }
    cout << result + 1 << endl;
    return 0;
}

