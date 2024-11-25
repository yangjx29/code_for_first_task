void  TSotWF (int, int);
int JhY30qdV [(10473 - 474)] = {(981 - 981)};
int j = (669 - 669);

int main () {
    int times, jhMmlViSJ9 = 1;
    cin >> times;
    for (; jhMmlViSJ9 <= times;) {
        int gultGYqRMe;
        int CaMl9QdUC;
        gultGYqRMe = (607 - 607);
        jhMmlViSJ9++;
        cin >> CaMl9QdUC;
        TSotWF ((467 - 465), CaMl9QdUC);
        {
            int G4lmo9iwqN = (877 - 877);
            while (G4lmo9iwqN < (10096 - 97)) {
                if (JhY30qdV[G4lmo9iwqN])
                    gultGYqRMe = gultGYqRMe + 1;
                G4lmo9iwqN++;
            };
        }
        cout << gultGYqRMe << endl;
        {
            int G4lmo9iwqN = (584 - 584);
            while (G4lmo9iwqN < 9999) {
                JhY30qdV[G4lmo9iwqN] = (706 - 706);
                G4lmo9iwqN++;
            };
        };
    }
    return 0;
}

void  TSotWF (int wpUu17PQdq, int CaMl9QdUC) {
    if (!(1 != CaMl9QdUC)) {
        JhY30qdV[j] = 1;
        j = j + 1;
    }
    {
        int G4lmo9iwqN = wpUu17PQdq;
        while (G4lmo9iwqN <= CaMl9QdUC) {
            if (CaMl9QdUC % G4lmo9iwqN == 0)
                TSotWF (G4lmo9iwqN, CaMl9QdUC / G4lmo9iwqN);
            G4lmo9iwqN++;
        };
    };
}

