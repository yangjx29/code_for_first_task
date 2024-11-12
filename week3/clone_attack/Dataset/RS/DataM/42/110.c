int NO7nm6sq2AYV [(100191 - 189)];

int main () {
    int DUgDud7Y;
    int k;
    int CnGVsg1UbSZp;
    int kwdUSyf0BV5;
    cin >> DUgDud7Y;
    for (CnGVsg1UbSZp = 0; DUgDud7Y > CnGVsg1UbSZp; CnGVsg1UbSZp = CnGVsg1UbSZp +1)
        cin >> NO7nm6sq2AYV[CnGVsg1UbSZp];
    cin >> k;
    for (CnGVsg1UbSZp = 0; CnGVsg1UbSZp < DUgDud7Y; CnGVsg1UbSZp = CnGVsg1UbSZp +1) {
        if (NO7nm6sq2AYV[CnGVsg1UbSZp] == k) {
            kwdUSyf0BV5 = CnGVsg1UbSZp;
            for (CnGVsg1UbSZp = kwdUSyf0BV5; CnGVsg1UbSZp < DUgDud7Y -(840 - 839); CnGVsg1UbSZp = CnGVsg1UbSZp +1)
                NO7nm6sq2AYV[CnGVsg1UbSZp] = NO7nm6sq2AYV[CnGVsg1UbSZp +(735 - 734)];
            NO7nm6sq2AYV[CnGVsg1UbSZp] = 0;
            CnGVsg1UbSZp = kwdUSyf0BV5 - 1;
            DUgDud7Y = DUgDud7Y -1;
        };
    }
    for (CnGVsg1UbSZp = 0; CnGVsg1UbSZp < DUgDud7Y; CnGVsg1UbSZp = CnGVsg1UbSZp +1) {
        if (DUgDud7Y -1 > CnGVsg1UbSZp)
            cout << NO7nm6sq2AYV[CnGVsg1UbSZp] << ' ';
        else {
            if (CnGVsg1UbSZp == DUgDud7Y -1)
                cout << NO7nm6sq2AYV[CnGVsg1UbSZp];
        };
    }
    return 0;
}

