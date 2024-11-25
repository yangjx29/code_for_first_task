int main () {
    char str [(240 - 209)], *p;
    cin.getline (str, 31);
    p = str;
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
    do {
        if ('0' <= *p && '9' >= *p) {
            cout << *p;
            p = p + 1;
        }
        else {
            p++;
            if (*p >= '0' && *p <= '9')
                cout << endl;
        };
    }
    while (*p != '\0');
    cout << endl;
    return (286 - 286);
}

