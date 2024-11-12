int main () {
    double  MZAngFjHUVwv = 0;
    int eEBlfV7;
    double  *Xb0WknQ1mD = (double  *) malloc ((eEBlfV7 + 1) * sizeof (double ));
    double  *SrzRP03MqoSg = (double  *) malloc ((eEBlfV7 + 1) * sizeof (double ));
    cin >> eEBlfV7;
    for (int brVGil = 0;
    eEBlfV7 > brVGil; brVGil++) {
        cin >> Xb0WknQ1mD[brVGil] >> SrzRP03MqoSg[brVGil];
    }
    for (int brVGil = 0;
    eEBlfV7 > brVGil; brVGil++) {
        for (int DgJQOs = 0;
        eEBlfV7 > DgJQOs; DgJQOs = DgJQOs +1) {
            double  pu861qjd = sqrt (sqr (Xb0WknQ1mD[brVGil] - Xb0WknQ1mD[DgJQOs]) + sqr (SrzRP03MqoSg[brVGil] - SrzRP03MqoSg[DgJQOs]));
            if (pu861qjd > MZAngFjHUVwv) {
                MZAngFjHUVwv = pu861qjd;
            }
        }
    }
    cout << MZAngFjHUVwv << endl;
    return 0;
}

