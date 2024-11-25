int main () {
    int am7lVf = (682 - 682), n = 0, p = 0, num = 0;
    int ZgKuysC = (560 - 560), MAHF7LYfeIE = (328 - 328), GthwVd8zEue9 = (959 - 959), SlPpYGwuILT, PmkA1dO569ax;
    char N4ZDTQryWKz [(3536 - 536)];
    for (; cin;) {
        N4ZDTQryWKz[GthwVd8zEue9] = getchar ();
        if (N4ZDTQryWKz[GthwVd8zEue9] == ' ' || !('\n' != N4ZDTQryWKz[GthwVd8zEue9]))
            num++;
        if (num == (748 - 747)) {
            MAHF7LYfeIE = GthwVd8zEue9;
            n = 0;
        }
        if (N4ZDTQryWKz[GthwVd8zEue9] == '\n')
            break;
        GthwVd8zEue9++;
    }
    N4ZDTQryWKz[GthwVd8zEue9] = ' ';
    for (SlPpYGwuILT = 0; SlPpYGwuILT <= GthwVd8zEue9; SlPpYGwuILT = SlPpYGwuILT +1) {
        if (N4ZDTQryWKz[SlPpYGwuILT] != ' ')
            p++;
        else {
            if (p > ZgKuysC) {
                ZgKuysC = p;
                am7lVf = SlPpYGwuILT -p;
            }
            if (p < MAHF7LYfeIE) {
                MAHF7LYfeIE = p;
                n = SlPpYGwuILT -p;
            }
            p = 0;
        };
    }
    {
        SlPpYGwuILT = am7lVf;
        while (SlPpYGwuILT < am7lVf + ZgKuysC) {
            cout << N4ZDTQryWKz[SlPpYGwuILT];
            SlPpYGwuILT = SlPpYGwuILT +1;
        };
    }
    cout << endl;
    {
        SlPpYGwuILT = n;
        while (SlPpYGwuILT < n + MAHF7LYfeIE) {
            cout << N4ZDTQryWKz[SlPpYGwuILT];
            SlPpYGwuILT++;
        };
    }
    cout << endl;
    return 0;
}

