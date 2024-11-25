int main () {
    char a [100], oEVqeF [100];
    int oGnrwZfJ = strlen (a);
    int rKp3oDLY;
    rKp3oDLY = strlen (oEVqeF);
    cin >> a >> oEVqeF;
    if (oGnrwZfJ != rKp3oDLY)
        cout << "NO";
    else {
        int QBimrjvazwQo;
        int udQVl5eZ;
        {
            QBimrjvazwQo = 0;
            while (QBimrjvazwQo < oGnrwZfJ) {
                for (udQVl5eZ = QBimrjvazwQo +1; udQVl5eZ < oGnrwZfJ; udQVl5eZ = udQVl5eZ + 1) {
                    char rsaHud5;
                    if (a[udQVl5eZ] > a[QBimrjvazwQo]) {
                        rsaHud5 = a[udQVl5eZ];
                        a[udQVl5eZ] = a[QBimrjvazwQo];
                        a[QBimrjvazwQo] = rsaHud5;
                    }
                    if (oEVqeF[udQVl5eZ] > oEVqeF[QBimrjvazwQo]) {
                        rsaHud5 = oEVqeF[udQVl5eZ];
                        oEVqeF[udQVl5eZ] = oEVqeF[QBimrjvazwQo];
                        oEVqeF[QBimrjvazwQo] = rsaHud5;
                    };
                }
                QBimrjvazwQo = QBimrjvazwQo +1;
            };
        }
        {
            QBimrjvazwQo = 0;
            while (QBimrjvazwQo < oGnrwZfJ) {
                if (oEVqeF[QBimrjvazwQo] != a[QBimrjvazwQo])
                    break;
                QBimrjvazwQo++;
            };
        }
        if (QBimrjvazwQo == oGnrwZfJ)
            cout << "YES";
        else {
            if (QBimrjvazwQo != oGnrwZfJ)
                cout << "NO";
        };
    }
    cin.get ();
    cin.get ();
    cin.get ();
    return 0;
}

