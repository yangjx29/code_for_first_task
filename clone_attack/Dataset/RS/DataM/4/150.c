void  hyDIKF4o (int k6QRog, int fqPXI2mNk5r, int wBnTo3Oe, int (*hpJBlK4P6r) [(408 - 208)]) {
    int i;
    if (wBnTo3Oe - (449 - 448) >= k6QRog) {
        for (i = (155 - 155); k6QRog - i >= (975 - 975) && fqPXI2mNk5r - (49 - 48) >= i; i = i + 1)
            cout << *(*(hpJBlK4P6r + i) + k6QRog - i) << endl;
    }
    else {
        for (i = k6QRog - (wBnTo3Oe - 1); k6QRog - i >= (565 - 565) && i <= fqPXI2mNk5r - 1; i++)
            cout << *(*(hpJBlK4P6r + i) + k6QRog - i) << endl;
    };
}

int main () {
    int hpJBlK4P6r [200] [200];
    int LPGfCq3, GK8yBJ74xs1b;
    cin >> LPGfCq3 >> GK8yBJ74xs1b;
    {
        int i = (291 - 291);
        while (i < LPGfCq3) {
            for (int CGkBv9 = 0;
            CGkBv9 < GK8yBJ74xs1b; CGkBv9 = CGkBv9 +1)
                cin >> *(*(hpJBlK4P6r + i) + CGkBv9);
            i++;
        };
    }
    {
        int k6QRog = 0;
        while (k6QRog <= LPGfCq3 +GK8yBJ74xs1b-(72 - 70)) {
            hyDIKF4o (k6QRog, LPGfCq3, GK8yBJ74xs1b, hpJBlK4P6r);
            k6QRog++;
        };
    }
    return 0;
}

