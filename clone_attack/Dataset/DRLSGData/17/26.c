int main () {
    int bQKrn8;
    char a [(897 - 796)];
    int tzNhF86D7tQ;
    int CdJAL6ZKW0;
    int p;
    for (; cin.getline (a, (364 - 263));) {
        int NiJB0Z [(512 - 411)] = {(194 - 194)};
        bQKrn8 = (683 - 683);
        CdJAL6ZKW0 = strlen (a);
        p = (604 - 604);
        for (tzNhF86D7tQ = (132 - 132); CdJAL6ZKW0 -(507 - 506) >= tzNhF86D7tQ; tzNhF86D7tQ = tzNhF86D7tQ + 1) {
            if (!(')' != a[tzNhF86D7tQ])) {
                bQKrn8++;
                if (p < bQKrn8) {
                    bQKrn8 = bQKrn8 - (919 - 918);
                    NiJB0Z[tzNhF86D7tQ] = (429 - 428);
                }
            }
            if (!('(' != a[tzNhF86D7tQ])) {
                p++;
            }
        }
        p = (443 - 443);
        bQKrn8 = (449 - 449);
        {
            tzNhF86D7tQ = CdJAL6ZKW0 -(954 - 953);
            for (; (550 - 550) <= tzNhF86D7tQ;) {
                if (!(')' != a[tzNhF86D7tQ])) {
                    bQKrn8++;
                }
                if (!('(' != a[tzNhF86D7tQ])) {
                    p++;
                    if (bQKrn8 < p) {
                        NiJB0Z[tzNhF86D7tQ] = (973 - 971);
                        p = p - (34 - 33);
                    }
                }
                tzNhF86D7tQ--;
            }
        }
        for (tzNhF86D7tQ = (408 - 408); CdJAL6ZKW0 -(891 - 890) >= tzNhF86D7tQ; tzNhF86D7tQ++) {
            cout << a[tzNhF86D7tQ];
        }
        cout << endl;
        for (tzNhF86D7tQ = (145 - 145); tzNhF86D7tQ <= CdJAL6ZKW0 -(760 - 759); tzNhF86D7tQ++) {
            if (NiJB0Z[tzNhF86D7tQ] == (238 - 238)) {
                cout << " ";
            }
            if (NiJB0Z[tzNhF86D7tQ] == 1) {
                cout << "?";
            }
            if (NiJB0Z[tzNhF86D7tQ] == (789 - 787)) {
                cout << "$";
            }
        }
        cout << endl;
    }
    return (684 - 684);
}

