int d6HsSFuZovQ (char *TDOqaK5) {
    int lcZDNz;
    if (!cin.get (*TDOqaK5))
        return -1;
    lcZDNz = 0;
    for (; *TDOqaK5 != ' ' && *TDOqaK5 != 0;) {
        TDOqaK5 = TDOqaK5 +1;
        if (!cin.get (*TDOqaK5)) {
            break;
        }
        lcZDNz = lcZDNz + 1;
    }
    *TDOqaK5 = 0;
    return lcZDNz;
}

int main () {
    int scQfZ4SRs;
    char TDOqaK5 [41];
    int WoPliDROV;
    int rz9knAh3xyb;
    WoPliDROV = 0;
    scQfZ4SRs = 80;
    cin >> rz9knAh3xyb;
    for (int DQeFGU = 0;
    rz9knAh3xyb > DQeFGU; DQeFGU = DQeFGU +1) {
        WoPliDROV = d6HsSFuZovQ (TDOqaK5);
        if (!(80 != scQfZ4SRs)) {
            scQfZ4SRs -= WoPliDROV;
            cout << TDOqaK5;
        }
        else {
            if (WoPliDROV < scQfZ4SRs) {
                cout << ' ' << TDOqaK5;
                scQfZ4SRs -= WoPliDROV +1;
            }
            else {
                scQfZ4SRs = 80 - WoPliDROV;
                cout << endl << TDOqaK5;
            }
        }
    }
    cin.get ();
}

