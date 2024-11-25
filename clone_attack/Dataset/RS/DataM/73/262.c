int main () {
    int eAMO92vnuP;
    int iCBxsqWn [(790 - 785)] [5];
    int G8DwVGoW;
    int Zut81ZyG;
    int SK5vAHju6V;
    int RT2M9C;
    int VykiOK5;
    int sDCYuVM;
    eAMO92vnuP = 0;
    for (G8DwVGoW = 0; 5 > G8DwVGoW; G8DwVGoW = G8DwVGoW +1) {
        for (Zut81ZyG = 0; 5 > Zut81ZyG; Zut81ZyG++)
            cin >> iCBxsqWn[G8DwVGoW][Zut81ZyG];
    }
    for (G8DwVGoW = 0; 5 > G8DwVGoW; G8DwVGoW++) {
        VykiOK5 = G8DwVGoW;
        sDCYuVM = 0;
        RT2M9C = iCBxsqWn[G8DwVGoW][0];
        {
            Zut81ZyG = 0;
            while (5 > Zut81ZyG) {
                if (iCBxsqWn[G8DwVGoW][Zut81ZyG] > RT2M9C) {
                    RT2M9C = iCBxsqWn[G8DwVGoW][Zut81ZyG];
                    sDCYuVM = Zut81ZyG;
                }
                Zut81ZyG = Zut81ZyG +1;
            };
        }
        Zut81ZyG = 0;
        for (SK5vAHju6V = 0; 5 > SK5vAHju6V; SK5vAHju6V++) {
            if (iCBxsqWn[SK5vAHju6V][sDCYuVM] < RT2M9C)
                Zut81ZyG = Zut81ZyG +1;
        }
        if (Zut81ZyG == 0) {
            eAMO92vnuP = eAMO92vnuP + 1;
            cout << VykiOK5 +1 << " " << sDCYuVM + 1 << " " << RT2M9C << endl;
        };
    }
    if (eAMO92vnuP == 0)
        cout << "not found" << endl;
    return 0;
}

