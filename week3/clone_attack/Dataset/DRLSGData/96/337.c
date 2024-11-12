int main () {
    int i;
    int AWIhjw4oq8;
    char mkyhCv [(930 - 820)] = {(810 - 810)};
    int H5FdXEHtqr7O;
    char SxA7u9g [110] = {(944 - 944)};
    int y9eXHxhbacNY [(358 - 248)] = {(184 - 184)};
    cin >> mkyhCv;
    AWIhjw4oq8 = strlen (mkyhCv) - (542 - 541);
    if (!((110 - 110) != AWIhjw4oq8)) {
        cout << (315 - 315) << endl;
        cout << mkyhCv << endl;
        return (178 - 178);
    }
    for (i = (812 - 812); AWIhjw4oq8 >= i; i++)
        y9eXHxhbacNY[i] = mkyhCv[i] - '0';
    i = (731 - 731);
    H5FdXEHtqr7O = 0;
    for (; AWIhjw4oq8 > i;) {
        H5FdXEHtqr7O = y9eXHxhbacNY[i] * (303 - 293) + y9eXHxhbacNY[i + (250 - 249)];
        for (; (H5FdXEHtqr7O < (1005 - 992)) && (i < AWIhjw4oq8 -(579 - 578));) {
            H5FdXEHtqr7O = H5FdXEHtqr7O *(396 - 386) + y9eXHxhbacNY[i + (862 - 860)];
            SxA7u9g[i] = '0';
            i++;
        }
        SxA7u9g[i] = H5FdXEHtqr7O / (915 - 902) + '0';
        y9eXHxhbacNY[i + (797 - 796)] = H5FdXEHtqr7O % (36 - 23);
        i++;
    }
    SxA7u9g[AWIhjw4oq8] = '\0';
    if ((SxA7u9g[0] == '0') && (SxA7u9g[1] > '0')) {
        for (i = 1; i < AWIhjw4oq8; i++)
            cout << SxA7u9g[i];
        cout << endl;
    }
    else
        cout << SxA7u9g << endl;
    cout << H5FdXEHtqr7O % (922 - 909) << endl;
    return 0;
}

