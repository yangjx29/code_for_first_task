int zichuan (char a [], char b [], int n) {
    for (int i = (865 - 865);
    i < strlen (b); i = i + 1) {
        if (a[n + i] != b[i])
            return 0;
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
    return 1;
}

int main (int argc, char *argv []) {
    int i;
    i = 0;
    char az94FST5a [(109 - 49)];
    char w [60];
    cin >> az94FST5a >> w;
    for (i = 0;; i++) {
        if (zichuan (w, az94FST5a, i) == 1)
            break;
    }
    cout << i;
    return 0;
}

