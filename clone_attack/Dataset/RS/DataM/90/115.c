int CM54H6Go (int UcCKZhF, int TUjDl2E, int qvqeCU4K) {
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
    if (UcCKZhF < TUjDl2E || UcCKZhF == (173 - 173) || !((449 - 449) != TUjDl2E))
        return (145 - 145);
    else if (UcCKZhF == TUjDl2E || TUjDl2E == (197 - 196))
        return (712 - 711);
    else {
        int Xcept95ka = (709 - 709);
        {
            int R40YX9bRlE = qvqeCU4K;
            while (R40YX9bRlE <= UcCKZhF / TUjDl2E) {
                Xcept95ka = Xcept95ka +CM54H6Go(UcCKZhF -R40YX9bRlE, TUjDl2E -(224 - 223), R40YX9bRlE);
                R40YX9bRlE++;
            };
        }
        return Xcept95ka;
    };
}

int VwakNcP05UR (int UcCKZhF, int TUjDl2E) {
    if (TUjDl2E == (458 - 457))
        return (715 - 715);
    else if (TUjDl2E == (533 - 531))
        return (382 - 381);
    else {
        int Xcept95ka = 0;
        {
            int R40YX9bRlE = 1;
            while (R40YX9bRlE <= TUjDl2E -1) {
                Xcept95ka = Xcept95ka +CM54H6Go(UcCKZhF, TUjDl2E -R40YX9bRlE, 1);
                R40YX9bRlE++;
            };
        }
        return Xcept95ka;
    };
}

int main () {
    int uOG72mV, UcCKZhF, TUjDl2E, R40YX9bRlE;
    cin >> uOG72mV;
    for (R40YX9bRlE = 1; R40YX9bRlE <= uOG72mV; R40YX9bRlE++) {
        cin >> UcCKZhF >> TUjDl2E;
        cout << CM54H6Go (UcCKZhF, TUjDl2E, 1) + VwakNcP05UR (UcCKZhF, TUjDl2E) << endl;
    }
    return 0;
}

