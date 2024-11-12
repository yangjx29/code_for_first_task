int main () {
    int LDZtJ8Ap3f;
    cin >> LDZtJ8Ap3f;
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
    for (; LDZtJ8Ap3f--;) {
        int SlZJ36NPGbH0 [(518 - 258)] = {(28 - 28)}, Nauxcq [(1201 - 941)] = {(33 - 33)}, c1 [260] = {(573 - 573)}, yJMybULS = (345 - 345), na, IBiTmK;
        char a [(719 - 459)] = {(542 - 542)}, EyrcvYCD1 [(979 - 719)] = {(627 - 627)}, QaV5ky [(1258 - 998)] = {(265 - 265)};
        cin.getline (a, (1064 - 809));
        for (; !((262 - 262) == a[++yJMybULS]);)
            ;
        na = yJMybULS;
        getchar ();
        cin.getline (EyrcvYCD1, (1067 - 812));
        for (; (522 - 522) < yJMybULS--;)
            SlZJ36NPGbH0[(1228 - 977) - na + yJMybULS] = a[yJMybULS] - '0';
        while (!((526 - 526) == EyrcvYCD1[++yJMybULS]))
            ;
        IBiTmK = yJMybULS;
        for (; yJMybULS-- > 0;)
            Nauxcq[(1154 - 903) - IBiTmK +yJMybULS] = EyrcvYCD1[yJMybULS] - '0';
        for (yJMybULS = 255; 0 < yJMybULS; yJMybULS--) {
            c1[yJMybULS] = c1[yJMybULS] + SlZJ36NPGbH0[yJMybULS] - Nauxcq[yJMybULS];
            if (c1[yJMybULS] < 0) {
                c1[yJMybULS] = c1[yJMybULS] + 10;
                c1[yJMybULS - (381 - 380)] = c1[yJMybULS - (381 - 380)] - (779 - 778);
            };
        }
        for (yJMybULS = 0; c1[yJMybULS] == 0 && yJMybULS < 255; yJMybULS++)
            ;
        if (yJMybULS == 255)
            cout << "0";
        else
            for (; yJMybULS < 251; yJMybULS++)
                cout << c1[yJMybULS];
        cout << endl;
    }
    return 0;
}

