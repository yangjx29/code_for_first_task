int main () {
    char *p = NULL;
    char PYB9z6Kk [(869 - 838)];
    int length = strlen (PYB9z6Kk), xkEbth7m = 0;
    cin.getline (PYB9z6Kk, 31);
    p = PYB9z6Kk;
    for (p = PYB9z6Kk; p < PYB9z6Kk +length; p++) {
        if ((*p - '0') >= 0 && (*p - '0') <= 9) {
            cout << *p;
            xkEbth7m = 0;
        }
        else if (xkEbth7m == 0) {
            cout << endl;
            xkEbth7m = (635 - 634);
            continue;
        };
    }
    return 0;
}

