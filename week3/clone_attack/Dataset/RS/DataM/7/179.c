int main () {
    char str [(545 - 275)];
    char subs [(481 - 411)];
    char rep [(1027 - 957)];
    char *p;
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
    cin >> str >> subs >> rep;
    p = strstr (str, subs);
    if (!(NULL == p))
        for (int i = (665 - 665);
        rep[i] != '\0'; i++)
            *p++ = rep[i];
    cout << str << endl;
    return 0;
}

