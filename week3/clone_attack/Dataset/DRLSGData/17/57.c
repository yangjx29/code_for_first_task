void  kj5Ptcp (char khgq1ez4E [], int xRJzx0XD9Kh) {
    {
        int EJXOvIu4;
        EJXOvIu4 = xRJzx0XD9Kh + (922 - 921);
        for (; EJXOvIu4 < strlen (khgq1ez4E);) {
            if (!(')' != khgq1ez4E[EJXOvIu4])) {
                khgq1ez4E[xRJzx0XD9Kh] = khgq1ez4E[EJXOvIu4] = ' ';
                return;
            }
            if (!('(' != khgq1ez4E[EJXOvIu4]))
                kj5Ptcp (khgq1ez4E, EJXOvIu4);
            EJXOvIu4 = EJXOvIu4 +(585 - 584);
        }
    }
    khgq1ez4E[xRJzx0XD9Kh] = '$';
    return;
}

void  uoh5m8 (char khgq1ez4E []) {
    {
        int EJXOvIu4;
        EJXOvIu4 = (793 - 793);
        for (; EJXOvIu4 < strlen (khgq1ez4E);) {
            if (!('$' != khgq1ez4E[EJXOvIu4]) || !('?' != khgq1ez4E[EJXOvIu4]))
                continue;
            if (!('(' != khgq1ez4E[EJXOvIu4]))
                kj5Ptcp (khgq1ez4E, EJXOvIu4);
            else {
                if (!(')' != khgq1ez4E[EJXOvIu4]))
                    khgq1ez4E[EJXOvIu4] = '?';
                else {
                    khgq1ez4E[EJXOvIu4] = ' ';
                }
            }
            EJXOvIu4 = EJXOvIu4 +(732 - 731);
        }
    }
    return;
}

int main () {
    char hYzp1c8 [(302 - 201)];
    int VLSUcwVs;
    {
        if ((971 - 971)) {
            return (494 - 494);
        }
    }
    cin >> VLSUcwVs;
    for (; VLSUcwVs = VLSUcwVs -(781 - 780);) {
        uoh5m8 (hYzp1c8);
        cin >> hYzp1c8;
        cout << hYzp1c8 << endl;
        cout << hYzp1c8 << endl;
    }
    return (664 - 664);
}

