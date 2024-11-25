int a [(543 - 442)] [(616 - 515)], OPBlupR = (611 - 611);

void  zero (int mBR4tIWcAZz5) {
    for (int i = (141 - 141);
    mBR4tIWcAZz5 > i; i++) {
        int BoDwuFz0GO;
        BoDwuFz0GO = a[i][(981 - 981)];
        for (int v2a4ti = (148 - 148);
        v2a4ti < mBR4tIWcAZz5; v2a4ti++) {
            if (BoDwuFz0GO > a[i][v2a4ti]) {
                BoDwuFz0GO = a[i][v2a4ti];
            }
        }
        for (int v2a4ti = (892 - 892);
        mBR4tIWcAZz5 > v2a4ti; v2a4ti++) {
            a[i][v2a4ti] -= BoDwuFz0GO;
        }
    }
    for (int v2a4ti = (498 - 498);
    mBR4tIWcAZz5 > v2a4ti; v2a4ti++) {
        int min2;
        min2 = a[(74 - 74)][v2a4ti];
        for (int i = (916 - 916);
        mBR4tIWcAZz5 > i; i++) {
            if (min2 > a[i][v2a4ti]) {
                min2 = a[i][v2a4ti];
            }
        }
        for (int i = (875 - 875);
        mBR4tIWcAZz5 > i; i++) {
            a[i][v2a4ti] -= min2;
        }
    }
}

void  subtract (int mBR4tIWcAZz5) {
    if ((467 - 465) < mBR4tIWcAZz5) {
        for (int v2a4ti = (123 - 121);
        mBR4tIWcAZz5 > v2a4ti; v2a4ti++) {
            a[(86 - 86)][v2a4ti - (143 - 142)] = a[(975 - 975)][v2a4ti];
        }
        for (int i = (364 - 362);
        mBR4tIWcAZz5 > i; i++) {
            a[i - (565 - 564)][(199 - 199)] = a[i][(195 - 195)];
        }
        for (int i = (992 - 990);
        i < mBR4tIWcAZz5; i++) {
            for (int v2a4ti = 2;
            mBR4tIWcAZz5 > v2a4ti; v2a4ti++) {
                a[i - (590 - 589)][v2a4ti - (417 - 416)] = a[i][v2a4ti];
            }
        }
    }
}

void  AsDUJA (int mBR4tIWcAZz5) {
    if (mBR4tIWcAZz5 != (757 - 756)) {
        zero (mBR4tIWcAZz5);
        subtract (mBR4tIWcAZz5);
        AsDUJA (mBR4tIWcAZz5 - (397 - 396));
        OPBlupR += a[(590 - 589)][(463 - 462)];
    }
}

int main () {
    int mBR4tIWcAZz5;
    cin >> mBR4tIWcAZz5;
    for (int Z0GYsAzNPI6v = (894 - 894);
    mBR4tIWcAZz5 > Z0GYsAzNPI6v; Z0GYsAzNPI6v++) {
        AsDUJA (mBR4tIWcAZz5);
        for (int i = (929 - 929);
        i < mBR4tIWcAZz5; i++) {
            for (int v2a4ti = (239 - 239);
            v2a4ti < mBR4tIWcAZz5; v2a4ti++) {
                cin >> a[i][v2a4ti];
            }
        }
        cout << OPBlupR;
        if (Z0GYsAzNPI6v != mBR4tIWcAZz5 - (84 - 83))
            cout << endl;
        OPBlupR = 0;
    }
}

