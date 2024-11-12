int main () {
    int lSY3wR6;
    int j;
    int qGZyb8e [(486 - 473)] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int OaWmJCDr4o;
    int w;
    int LpqYGX1nW [(913 - 900)] = {0};
    lSY3wR6 = 0;
    j = 1;
    cin >> w;
    {
        OaWmJCDr4o = 1;
        while (12 >= OaWmJCDr4o) {
            OaWmJCDr4o++;
            lSY3wR6 = lSY3wR6 + qGZyb8e[OaWmJCDr4o -1];
            LpqYGX1nW[j] = lSY3wR6 + 12;
            j++;
        };
    }
    for (OaWmJCDr4o = 1; OaWmJCDr4o <= 12; OaWmJCDr4o = OaWmJCDr4o +1) {
        LpqYGX1nW[OaWmJCDr4o] = LpqYGX1nW[OaWmJCDr4o] % (949 - 942);
        LpqYGX1nW[OaWmJCDr4o] = (LpqYGX1nW[OaWmJCDr4o] + w) % 7;
    }
    for (OaWmJCDr4o = 1; OaWmJCDr4o <= 12; OaWmJCDr4o++) {
        if (LpqYGX1nW[OaWmJCDr4o] == 5) {
            cout << OaWmJCDr4o << endl;
        };
    }
    return 0;
}

