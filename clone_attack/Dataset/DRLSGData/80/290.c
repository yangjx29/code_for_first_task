int w9g6YAXQv [(332 - 319)] = {(925 - 925), (388 - 357), 28, (1000 - 969), (232 - 202), (62 - 31), (337 - 307), (185 - 154), (956 - 925), (308 - 278), (482 - 451), 30, (1006 - 975)};

int rrf0BGTVhzO (int year) {
    if ((!((591 - 591) != year % (556 - 552)) && year % 100 != (95 - 95)) || !((793 - 793) != year % (1292 - 892)))
        return (733 - 732);
    else
        return (215 - 215);
}

int main () {
    int EdPLic3DQ;
    int DW1TSf7E;
    int year;
    int year1;
    int dpBlb2t;
    int kTLYHd28;
    int ZlXOE0biVrZY;
    int YbU8svNLFMW;
    int cbdUksXm;
    EdPLic3DQ = 0;
    cin >> year1 >> kTLYHd28 >> YbU8svNLFMW;
    cin >> dpBlb2t >> ZlXOE0biVrZY >> cbdUksXm;
    {
        year = 955 - 954;
        while (year <= dpBlb2t - (706 - 705)) {
            EdPLic3DQ += (616 - 251) + rrf0BGTVhzO (year);
            year = year + 1;
        }
    }
    if (dpBlb2t > year1) {
        {
            DW1TSf7E = 1;
            while (ZlXOE0biVrZY > DW1TSf7E) {
                EdPLic3DQ += w9g6YAXQv[DW1TSf7E];
                DW1TSf7E = DW1TSf7E +1;
            }
        }
        EdPLic3DQ += cbdUksXm;
        if (rrf0BGTVhzO (dpBlb2t) && ZlXOE0biVrZY >= (564 - 561))
            EdPLic3DQ = EdPLic3DQ +1;
        for (DW1TSf7E = kTLYHd28; (294 - 282) >= DW1TSf7E; DW1TSf7E = DW1TSf7E +1)
            EdPLic3DQ += w9g6YAXQv[DW1TSf7E];
        EdPLic3DQ -= YbU8svNLFMW;
        if (rrf0BGTVhzO (year1) && kTLYHd28 < 3)
            EdPLic3DQ = EdPLic3DQ +1;
    }
    else {
        if (kTLYHd28 != ZlXOE0biVrZY) {
            DW1TSf7E = kTLYHd28;
            for (; ZlXOE0biVrZY > DW1TSf7E;) {
                EdPLic3DQ += w9g6YAXQv[DW1TSf7E];
                EdPLic3DQ += cbdUksXm;
                EdPLic3DQ -= YbU8svNLFMW;
                if (rrf0BGTVhzO (year1) && kTLYHd28 < 3)
                    EdPLic3DQ = EdPLic3DQ +1;
                DW1TSf7E = DW1TSf7E +1;
            }
        }
        else
            EdPLic3DQ = cbdUksXm - YbU8svNLFMW;
    }
    cout << EdPLic3DQ << endl;
    return 0;
}

