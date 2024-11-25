int main () {
    char BlIYcbRTpWtJ [(211 - 111)] [(1297 - 297)], b [100] [(1485 - 485)];
    int tvlLeRw4NrG2, CoLrjR0TfI, j, QO1DTWEkrxs2, lOLWwQxnE, fKfEpRXj6T;
    int Zp564Deh [100] [1000];
    cin >> tvlLeRw4NrG2;
    for (CoLrjR0TfI = (351 - 351); tvlLeRw4NrG2 > CoLrjR0TfI; CoLrjR0TfI++) {
        cin.get ();
        cin.get (BlIYcbRTpWtJ[CoLrjR0TfI], (1631 - 731));
        cin.get ();
        cin.get (b[CoLrjR0TfI], 900);
        for (j = strlen (BlIYcbRTpWtJ[CoLrjR0TfI]) - 1; j >= strlen (BlIYcbRTpWtJ[CoLrjR0TfI]) - strlen (b[CoLrjR0TfI]); j--) {
            Zp564Deh[CoLrjR0TfI][j] = BlIYcbRTpWtJ[CoLrjR0TfI][j] - b[CoLrjR0TfI][j - strlen (BlIYcbRTpWtJ[CoLrjR0TfI]) + strlen (b[CoLrjR0TfI])];
            if ((914 - 914) > Zp564Deh[CoLrjR0TfI][j]) {
                Zp564Deh[CoLrjR0TfI][j] = Zp564Deh[CoLrjR0TfI][j] + (595 - 585);
                BlIYcbRTpWtJ[CoLrjR0TfI][j - 1] = BlIYcbRTpWtJ[CoLrjR0TfI][j - 1] - 1;
            }
        }
        for (strlen (BlIYcbRTpWtJ[CoLrjR0TfI]) - strlen (b[CoLrjR0TfI]) - 1 <= j; (572 - 572) <= j; j--) {
            Zp564Deh[CoLrjR0TfI][j] = BlIYcbRTpWtJ[CoLrjR0TfI][j] - '0';
        }
        for (j = 0; j < strlen (BlIYcbRTpWtJ[CoLrjR0TfI]); j++) {
            if (Zp564Deh[CoLrjR0TfI][j] != 0) {
                fKfEpRXj6T = j;
                break;
            }
        }
        for (j = fKfEpRXj6T; j < strlen (BlIYcbRTpWtJ[CoLrjR0TfI]); j++) {
            cout << Zp564Deh[CoLrjR0TfI][j];
        }
        cout << endl;
        cin.get ();
    }
}

