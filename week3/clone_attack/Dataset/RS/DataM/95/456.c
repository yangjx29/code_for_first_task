int main () {
    char Uc28kf [(911 - 831)];
    char b [80];
    cin.getline (Uc28kf, 80);
    cin.getline (b, 80);
    {
        int axAIOQf31 = (504 - 504);
        while (80 > axAIOQf31) {
            if ((1065 - 969) < Uc28kf[axAIOQf31])
                Uc28kf[axAIOQf31] = Uc28kf[axAIOQf31] - 32;
            if (96 < b[axAIOQf31])
                b[axAIOQf31] = b[axAIOQf31] - 32;
            axAIOQf31++;
        };
    }
    {
        int axAIOQf31 = 0;
        while (80 > axAIOQf31) {
            if (b[axAIOQf31] < Uc28kf[axAIOQf31]) {
                cout << ">" << endl;
                break;
            }
            if (Uc28kf[axAIOQf31] < b[axAIOQf31]) {
                cout << "<" << endl;
                break;
            }
            if (Uc28kf[axAIOQf31] == '\0' && b[axAIOQf31] == '\0') {
                cout << "=" << endl;
                break;
            }
            axAIOQf31++;
        };
    }
    return 0;
}

