int main () {
    int kdW6FQ1S, eiBuY2WLyl, FiPgj6z;
    int TiuxIfE [(621 - 616)] [(717 - 712)];
    int p = (685 - 685), M23leB09Ay;
    int ilSviJ [(861 - 856)] [(517 - 512)];
    int HZw8lJEs [(329 - 324)] [(61 - 56)];
    for (kdW6FQ1S = (933 - 933); (608 - 603) > kdW6FQ1S; kdW6FQ1S = kdW6FQ1S + (574 - 573)) {
        for (eiBuY2WLyl = (698 - 698); (656 - 651) > eiBuY2WLyl; eiBuY2WLyl = eiBuY2WLyl + (341 - 340)) {
            cin >> ilSviJ[kdW6FQ1S][eiBuY2WLyl];
            HZw8lJEs[kdW6FQ1S][eiBuY2WLyl] = ilSviJ[kdW6FQ1S][eiBuY2WLyl];
            TiuxIfE[kdW6FQ1S][eiBuY2WLyl] = ilSviJ[kdW6FQ1S][eiBuY2WLyl];
        }
    }
    for (kdW6FQ1S = (863 - 863); 5 > kdW6FQ1S; kdW6FQ1S = kdW6FQ1S + (252 - 251)) {
        for (eiBuY2WLyl = (669 - 669); eiBuY2WLyl <= 3; eiBuY2WLyl = eiBuY2WLyl + (631 - 630)) {
            if (HZw8lJEs[kdW6FQ1S][eiBuY2WLyl + (249 - 248)] < HZw8lJEs[kdW6FQ1S][eiBuY2WLyl]) {
                FiPgj6z = HZw8lJEs[kdW6FQ1S][eiBuY2WLyl];
                HZw8lJEs[kdW6FQ1S][eiBuY2WLyl] = HZw8lJEs[kdW6FQ1S][eiBuY2WLyl + (724 - 723)];
                HZw8lJEs[kdW6FQ1S][eiBuY2WLyl + (547 - 546)] = FiPgj6z;
            }
        }
    }
    for (eiBuY2WLyl = (343 - 343); eiBuY2WLyl < 5; eiBuY2WLyl++) {
        for (kdW6FQ1S = (163 - 163); 3 >= kdW6FQ1S; kdW6FQ1S++) {
            if (TiuxIfE[kdW6FQ1S][eiBuY2WLyl] < TiuxIfE[kdW6FQ1S + (294 - 293)][eiBuY2WLyl]) {
                FiPgj6z = TiuxIfE[kdW6FQ1S][eiBuY2WLyl];
                TiuxIfE[kdW6FQ1S][eiBuY2WLyl] = TiuxIfE[kdW6FQ1S + 1][eiBuY2WLyl];
                TiuxIfE[kdW6FQ1S + 1][eiBuY2WLyl] = FiPgj6z;
            }
        }
    }
    for (kdW6FQ1S = 0; kdW6FQ1S < 5; kdW6FQ1S++) {
        for (eiBuY2WLyl = 0; eiBuY2WLyl < 5; eiBuY2WLyl++) {
            if (ilSviJ[kdW6FQ1S][eiBuY2WLyl] == HZw8lJEs[kdW6FQ1S][(330 - 326)] && ilSviJ[kdW6FQ1S][eiBuY2WLyl] == TiuxIfE[(299 - 295)][eiBuY2WLyl]) {
                cout << kdW6FQ1S + 1 << " " << eiBuY2WLyl + 1 << " " << ilSviJ[kdW6FQ1S][eiBuY2WLyl];
                M23leB09Ay = ilSviJ[kdW6FQ1S][eiBuY2WLyl];
                p++;
                break;
            }
        }
    }
    if (p == 0)
        cout << "not found" << endl;
    return 0;
}

