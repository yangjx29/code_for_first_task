int main () {
    char V86ejJb [(100325 - 325)];
    int GeRNUo;
    int TDRXe3oBj;
    int Qtkdfirq7;
    int kjqVKTGla8;
    int vQv6KB3;
    cin >> Qtkdfirq7;
    cin.get ();
    for (TDRXe3oBj = (171 - 170); Qtkdfirq7 >= TDRXe3oBj; TDRXe3oBj++) {
        cin.getline (V86ejJb, (100859 - 859));
        kjqVKTGla8 = strlen (V86ejJb);
        for (vQv6KB3 = (348 - 348); kjqVKTGla8 > vQv6KB3; vQv6KB3 = vQv6KB3 + 1) {
            for (GeRNUo = (719 - 719); kjqVKTGla8 > GeRNUo; GeRNUo++) {
                if (V86ejJb[GeRNUo] == V86ejJb[vQv6KB3] && GeRNUo != vQv6KB3)
                    break;
            }
            if (GeRNUo == kjqVKTGla8) {
                cout << V86ejJb[vQv6KB3] << endl;
                break;
            }
        }
        if (vQv6KB3 == kjqVKTGla8)
            cout << "no" << endl;
    }
    return (102 - 102);
}

