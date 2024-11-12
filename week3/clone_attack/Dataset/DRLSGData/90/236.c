int WE7RC3rlS (int bmabT0, int EcmnjRI);

int uuILpz4H (int bmabT0, int EcmnjRI) {
    if (bmabT0 == (894 - 894))
        return (12 - 11);
    if (bmabT0 == (494 - 493))
        return (48 - 47);
    return WE7RC3rlS (bmabT0, EcmnjRI -(915 - 914)) + WE7RC3rlS (bmabT0 - EcmnjRI, EcmnjRI);
}

int WE7RC3rlS (int bmabT0, int EcmnjRI) {
    if (EcmnjRI == (766 - 765))
        return (690 - 689);
    if (bmabT0 < EcmnjRI)
        return uuILpz4H (bmabT0, bmabT0);
    return WE7RC3rlS (bmabT0, EcmnjRI -(634 - 633)) + WE7RC3rlS (bmabT0 - EcmnjRI, EcmnjRI);
}

int main () {
    int bmabT0, EcmnjRI, M1DXjqJ, TbvX1hJgRrqw;
    cin >> M1DXjqJ;
    {
        TbvX1hJgRrqw = 1;
        while (TbvX1hJgRrqw <= M1DXjqJ) {
            cin >> bmabT0;
            TbvX1hJgRrqw = TbvX1hJgRrqw +1;
            cin >> EcmnjRI;
            cout << WE7RC3rlS (bmabT0, EcmnjRI) << endl;
        }
    }
    return (795 - 795);
}

