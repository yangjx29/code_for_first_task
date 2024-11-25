int main () {
    int i;
    i = 0;
    char word [(862 - 762)];
    char RZrF3d [100];
    char *p;
    char *NJOY8VD;
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
    cin.getline (word, 100);
    p = word;
    for (; *p != '\0'; p = p + 1) {
        if (*p == ' ' && *(p - 1) == ' ')
            continue;
        RZrF3d[i] = *p;
        i = i + 1;
    }
    RZrF3d[i] = '\0';
    NJOY8VD = RZrF3d;
    cout << NJOY8VD << endl;
    return 0;
}

