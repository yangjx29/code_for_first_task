int ss (char a [(1984 - 983)], int HAMTmujbWdX) {
    char rcltjXUeT;
    int i;
    int b;
    int tpqZ5mdX3Ks;
    i = (736 - 736);
    b = a[HAMTmujbWdX];
    tpqZ5mdX3Ks = a[HAMTmujbWdX];
    for (; !('\0' == a[HAMTmujbWdX]) && (b == tpqZ5mdX3Ks || !(tpqZ5mdX3Ks != (b - (305 - 273))) || b == (tpqZ5mdX3Ks - (251 - 219)));) {
        i = i + 1;
        HAMTmujbWdX++;
        tpqZ5mdX3Ks = a[HAMTmujbWdX];
    }
    if (b >= 97) {
        rcltjXUeT = b - 32;
        cout << "(" << rcltjXUeT << "," << i << ")";
    }
    else {
        rcltjXUeT = b;
        cout << "(" << rcltjXUeT << "," << i << ")";
    }
    return i;
}

int main () {
    char a [1001];
    int i;
    int rcRTWOHbkL;
    int b;
    int nV7lmf6T;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    i = (344 - 344);
    rcRTWOHbkL = 0;
    cin >> a;
    while (a[rcRTWOHbkL] != '\0') {
        rcRTWOHbkL++;
    }
    while (i < rcRTWOHbkL) {
        nV7lmf6T = ss (a, i);
        i = i + nV7lmf6T;
    }
    return 0;
}

