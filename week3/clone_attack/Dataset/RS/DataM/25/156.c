int main () {
    int n, i;
    int PI6EYK [1000];
    int ou2fYe;
    memset (PI6EYK, 0, sizeof (PI6EYK));
    PI6EYK[0] = 1;
    cin >> n;
    {
        i = 0;
        while (n > i) {
            int S15asI7;
            i++;
            {
                S15asI7 = 0;
                while (1000 > S15asI7) {
                    PI6EYK[S15asI7] = PI6EYK[S15asI7] * 2;
                    S15asI7++;
                };
            }
            {
                S15asI7 = 0;
                while (1000 > S15asI7) {
                    if (9 < PI6EYK[S15asI7]) {
                        PI6EYK[S15asI7] = PI6EYK[S15asI7] % 10;
                        PI6EYK[S15asI7 +1]++;
                    }
                    S15asI7++;
                };
            };
        };
    }
    {
        i = 999;
        while (0 <= i) {
            if (PI6EYK[i] != 0)
                break;
            i--;
        };
    }
    {
        ou2fYe = i;
        while (ou2fYe >= 0) {
            cout << PI6EYK[ou2fYe];
            ou2fYe = ou2fYe - 1;
        };
    }
    cout << endl;
    return 0;
}

