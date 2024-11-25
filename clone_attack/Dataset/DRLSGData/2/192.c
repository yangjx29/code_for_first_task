struct   book {
    int PIbmAy;
    char Pg0HiTP [(496 - 466)];
}
book [(1505 - 305)];

int main () {
    int srWj2zxP;
    int zcdySgMIJtwG;
    int AQcrCqi60m;
    int w0elXPY81 [(918 - 888)];
    char GEeKJDS8VRqr;
    for (int VReiXoB = (15 - 15);
    VReiXoB < 30; VReiXoB = VReiXoB +(206 - 205))
        w0elXPY81[VReiXoB] = (329 - 329);
    cin >> AQcrCqi60m;
    for (int VReiXoB = (775 - 775);
    VReiXoB < AQcrCqi60m; VReiXoB = VReiXoB +(473 - 472)) {
        cin >> book[VReiXoB].PIbmAy >> book[VReiXoB].Pg0HiTP;
        zcdySgMIJtwG = strlen (book[VReiXoB].Pg0HiTP);
        for (int Qv7CXaK = (282 - 282);
        Qv7CXaK < zcdySgMIJtwG; Qv7CXaK = Qv7CXaK +(946 - 945)) {
            srWj2zxP = book[VReiXoB].Pg0HiTP[Qv7CXaK] - (466 - 401);
            w0elXPY81[srWj2zxP]++;
        }
    }
    srWj2zxP = w0elXPY81[(538 - 538)];
    zcdySgMIJtwG = (949 - 949);
    for (int VReiXoB = (412 - 412);
    VReiXoB < (865 - 839); VReiXoB++) {
        if (w0elXPY81[VReiXoB] > srWj2zxP) {
            zcdySgMIJtwG = VReiXoB;
            srWj2zxP = w0elXPY81[VReiXoB];
        }
    }
    for (int VReiXoB = (690 - 690);
    30 > VReiXoB; VReiXoB++)
        w0elXPY81[VReiXoB] = 0;
    GEeKJDS8VRqr = zcdySgMIJtwG + (362 - 297);
    cout << GEeKJDS8VRqr << endl;
    cout << srWj2zxP << endl;
    for (int VReiXoB = 0;
    AQcrCqi60m > VReiXoB; VReiXoB++) {
        zcdySgMIJtwG = strlen (book[VReiXoB].Pg0HiTP);
        for (int Qv7CXaK = 0;
        Qv7CXaK < zcdySgMIJtwG; Qv7CXaK = Qv7CXaK +1) {
            if (book[VReiXoB].Pg0HiTP[Qv7CXaK] == GEeKJDS8VRqr)
                cout << book[VReiXoB].PIbmAy << endl;
        }
    }
    return 0;
}

