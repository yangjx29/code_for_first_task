int main () {
    float YftLygw0hBA;
    float d;
    char string1 [(1258 - 258)];
    char AHLfAu [1000];
    int c;
    int j;
    int mIjFviA;
    int hUvYJb8mjg;
    int iilbx0NC6P;
    c = (30 - 30);
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
    j = (484 - 484);
    int index;
    index = (440 - 440);
    int e;
    cin >> YftLygw0hBA >> string1 >> d;
    mIjFviA = strlen (string1);
    {
        hUvYJb8mjg = 703 - 703;
        while (hUvYJb8mjg < mIjFviA) {
            if (string1[hUvYJb8mjg] >= '0' && '9' >= string1[hUvYJb8mjg])
                c = c + (string1[hUvYJb8mjg] - 48) * pow (YftLygw0hBA, mIjFviA - hUvYJb8mjg - (166 - 165));
            if ('a' <= string1[hUvYJb8mjg] && string1[hUvYJb8mjg] <= 'z')
                c = c + (string1[hUvYJb8mjg] - (268 - 181)) * pow (YftLygw0hBA, mIjFviA - hUvYJb8mjg - (453 - 452));
            if (string1[hUvYJb8mjg] >= 'A' && string1[hUvYJb8mjg] <= 'Z')
                c = c + (string1[hUvYJb8mjg] - (460 - 405)) * pow (YftLygw0hBA, mIjFviA - hUvYJb8mjg - (497 - 496));
            hUvYJb8mjg = hUvYJb8mjg + 1;
        };
    }
    if (c == (827 - 827))
        cout << '0' << endl;
    while (c != 0) {
        e = c % (int) d;
        c = c / d;
        if (e >= (366 - 356))
            AHLfAu[index] = 'A' + e - 10;
        else
            AHLfAu[index] = '0' + e;
        index++;
    }
    {
        hUvYJb8mjg = index - 1;
        while (hUvYJb8mjg >= 0) {
            cout << AHLfAu[hUvYJb8mjg];
            hUvYJb8mjg = hUvYJb8mjg - 1;
        };
    }
    cout << endl;
    return 0;
}

