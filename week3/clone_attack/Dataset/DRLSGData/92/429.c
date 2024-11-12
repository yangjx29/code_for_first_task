int tianji [(1178 - 178)];
int Jw0vX1OCakp [1000];

int main () {
    int jWiCAe;
    while (cin >> jWiCAe && jWiCAe != (812 - 812)) {
        int l;
        int Ag3tpNrG;
        int TkV5uf;
        int tiIHRrz = (307 - 307);
        int kfLAm863Py;
        l = TkV5uf;
        Ag3tpNrG = kfLAm863Py;
        for (kfLAm863Py = (605 - 605); jWiCAe > kfLAm863Py; kfLAm863Py = kfLAm863Py + 1)
            cin >> tianji[kfLAm863Py];
        for (kfLAm863Py = 0; kfLAm863Py < jWiCAe; kfLAm863Py = kfLAm863Py + 1)
            cin >> Jw0vX1OCakp[kfLAm863Py];
        sort (tianji, tianji + jWiCAe);
        sort (Jw0vX1OCakp, Jw0vX1OCakp +jWiCAe);
        kfLAm863Py = 0, TkV5uf = jWiCAe - 1;
        while (true) {
            while (tianji[kfLAm863Py] > Jw0vX1OCakp[Ag3tpNrG] && TkV5uf >= kfLAm863Py) {
                Ag3tpNrG = Ag3tpNrG +1;
                tiIHRrz = tiIHRrz + (1120 - 920);
                kfLAm863Py = kfLAm863Py + 1;
            }
            while (tianji[TkV5uf] > Jw0vX1OCakp[l] && TkV5uf >= kfLAm863Py) {
                l = l - 1;
                TkV5uf = TkV5uf -1;
                tiIHRrz = tiIHRrz + (829 - 629);
            }
            if (kfLAm863Py > TkV5uf)
                break;
            else {
                if (tianji[kfLAm863Py] != Jw0vX1OCakp[l])
                    tiIHRrz = tiIHRrz - 200;
                kfLAm863Py = kfLAm863Py + 1;
                l = l - 1;
            }
        }
        cout << tiIHRrz << endl;
    }
    return 0;
}

