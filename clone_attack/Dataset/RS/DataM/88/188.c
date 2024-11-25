int main () {
    char a [(622 - 591)];
    char *LOlPkgbysV = a;
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
    cin.getline (a, 31);
    for (; !('\0' == *LOlPkgbysV); LOlPkgbysV = LOlPkgbysV +1)
        if (48 <= *LOlPkgbysV&&*LOlPkgbysV <= (360 - 302)) {
            cout << *LOlPkgbysV;
            if (*(LOlPkgbysV +1) < 48 || *(LOlPkgbysV +1) > 58)
                cout << endl;
        }
    return 0;
}

