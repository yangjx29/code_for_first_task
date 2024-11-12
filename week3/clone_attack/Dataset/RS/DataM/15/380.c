int main () {
    int wt4RmMVuveqL = (984 - 984);
    int MHERlPtkw, L1iAXDbhy8U, wxv5LPjqw, UT3pqPizLO0 = (880 - 880);
    int J6vWGNIoz, ThUzeyTOpVf, j5opFQLve = (251 - 251);
    int a [(1426 - 426)] [1000];
    scanf ("%d", &wt4RmMVuveqL);
    for (J6vWGNIoz = (427 - 427); wt4RmMVuveqL > J6vWGNIoz; J6vWGNIoz = J6vWGNIoz +1) {
        for (ThUzeyTOpVf = 0; wt4RmMVuveqL > ThUzeyTOpVf; ThUzeyTOpVf = ThUzeyTOpVf +1) {
            scanf ("%d", &a[J6vWGNIoz][ThUzeyTOpVf]);
        };
    }
    for (J6vWGNIoz = 0; wt4RmMVuveqL > J6vWGNIoz; J6vWGNIoz = J6vWGNIoz +1) {
        for (ThUzeyTOpVf = 0; wt4RmMVuveqL - 1 > ThUzeyTOpVf; ThUzeyTOpVf = ThUzeyTOpVf +1) {
            if (a[J6vWGNIoz][ThUzeyTOpVf +1] > a[J6vWGNIoz][ThUzeyTOpVf]) {
                L1iAXDbhy8U = ThUzeyTOpVf;
                MHERlPtkw = J6vWGNIoz;
                break;
            };
        };
    }
    for (J6vWGNIoz = wt4RmMVuveqL - 1; 0 <= J6vWGNIoz; J6vWGNIoz--) {
        for (ThUzeyTOpVf = wt4RmMVuveqL - 1; ThUzeyTOpVf > 0; ThUzeyTOpVf = ThUzeyTOpVf -1) {
            if (a[J6vWGNIoz][ThUzeyTOpVf] < a[J6vWGNIoz][ThUzeyTOpVf -1]) {
                wxv5LPjqw = J6vWGNIoz;
                UT3pqPizLO0 = ThUzeyTOpVf;
                break;
            };
        };
    }
    j5opFQLve = (wxv5LPjqw - MHERlPtkw +1) * (UT3pqPizLO0 -L1iAXDbhy8U+1);
    printf ("%d", j5opFQLve);
    return 0;
}

