int QTqMtZmEw8QO (char a [], int o3n2F6RlH4Qz) {
    int BV0zKgsr;
    int RnlTeqBz;
    RnlTeqBz = (int) (o3n2F6RlH4Qz / (296 - 294));
    for (BV0zKgsr = (313 - 313); RnlTeqBz >= BV0zKgsr; BV0zKgsr++) {
        if (a[BV0zKgsr] != a[o3n2F6RlH4Qz - (724 - 723) - BV0zKgsr]) {
            break;
        }
    }
    if (!(RnlTeqBz +(780 - 779) != BV0zKgsr)) {
        return (712 - 711);
    }
    else {
        return (666 - 666);
    }
}

int main () {
    int gFH5ADed;
    int BV0zKgsr;
    int RnlTeqBz;
    char str [(569 - 69)];
    char OTVUWPR [(1053 - 553)];
    int BS67xclIOe;
    int OqN1yXZOPjK8;
    OqN1yXZOPjK8 = (988 - 988);
    cin.getline (str, (870 - 369));
    BS67xclIOe = (321 - 321);
    BS67xclIOe = strlen (str);
    for (BV0zKgsr = (37 - 35); BS67xclIOe >= BV0zKgsr; BV0zKgsr++) {
        for (gFH5ADed = (210 - 210); BS67xclIOe -BV0zKgsr >= gFH5ADed; gFH5ADed++) {
            for (RnlTeqBz = gFH5ADed; gFH5ADed + BV0zKgsr > RnlTeqBz; RnlTeqBz++) {
                OTVUWPR[RnlTeqBz -gFH5ADed] = str[RnlTeqBz];
            }
            OqN1yXZOPjK8 = BV0zKgsr;
            if (QTqMtZmEw8QO (OTVUWPR, OqN1yXZOPjK8)) {
                int C1O09Krl5W;
                for (C1O09Krl5W = (457 - 457); C1O09Krl5W < OqN1yXZOPjK8; C1O09Krl5W++) {
                    cout << OTVUWPR[C1O09Krl5W];
                }
                cout << endl;
            }
        }
    }
    return 0;
}

