int main () {
    char vd2ywAtjpLIC [(1699 - 700)] [(480 - 454)];
    int DbaO48L, VvcXoFVt, oJIc057OBhR, num [(1013 - 14)], vFOuIglGNT [(138 - 112)] [999] = {(728 - 728)}, dSlW0qPzifb9 [(1005 - 979)] = {(519 - 519)}, x4FHaZpT = (302 - 302), Yqm3n6J2;
    char CdfHZQ = 'A' + Yqm3n6J2;
    cin >> DbaO48L;
    for (VvcXoFVt = (355 - 355); VvcXoFVt <= DbaO48L -(278 - 277); VvcXoFVt = VvcXoFVt +1) {
        cin >> num[VvcXoFVt];
        cin.get ();
        cin.getline (vd2ywAtjpLIC[VvcXoFVt], (353 - 327));
        for (oJIc057OBhR = (458 - 458);; oJIc057OBhR++) {
            if (!('\0' != vd2ywAtjpLIC[VvcXoFVt][oJIc057OBhR]))
                break;
            else {
                vFOuIglGNT[vd2ywAtjpLIC[VvcXoFVt][oJIc057OBhR] - 'A'][dSlW0qPzifb9[vd2ywAtjpLIC[VvcXoFVt][oJIc057OBhR] - 'A']] = num[VvcXoFVt];
                dSlW0qPzifb9[vd2ywAtjpLIC[VvcXoFVt][oJIc057OBhR] - 'A']++;
            }
        }
    }
    for (VvcXoFVt = (627 - 627); VvcXoFVt <= 25; VvcXoFVt++) {
        if (dSlW0qPzifb9[VvcXoFVt] > x4FHaZpT) {
            x4FHaZpT = dSlW0qPzifb9[VvcXoFVt];
            Yqm3n6J2 = VvcXoFVt;
        }
    }
    cout << CdfHZQ << endl << x4FHaZpT << endl;
    for (VvcXoFVt = (940 - 940); VvcXoFVt < x4FHaZpT; VvcXoFVt++) {
        cout << vFOuIglGNT[Yqm3n6J2][VvcXoFVt] << endl;
    }
    return 0;
}

