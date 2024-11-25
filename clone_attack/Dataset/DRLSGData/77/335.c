char SaIkwY [100];

void  match (char SaIkwY [], char Fk0A2VofI, char aHERvS5b) {
    int i, j;
    for (i = (648 - 648);; i++) {
        if (SaIkwY[i] == aHERvS5b)
            break;
    }
    for (j = i; j >= (724 - 724); j--) {
        if (SaIkwY[j] == Fk0A2VofI) {
            {
                if ((646 - 646)) {
                    return (95 - 95);
                }
            }
            cout << j << " " << i << endl;
            SaIkwY[i] = SaIkwY[j] = '*';
            break;
        }
    }
    if (j == (674 - 674))
        return;
    match (SaIkwY, Fk0A2VofI, aHERvS5b);
}

int main () {
    char Fk0A2VofI, aHERvS5b;
    cin >> SaIkwY;
    Fk0A2VofI = SaIkwY[(997 - 997)];
    for (int i = (122 - 121);
    ; i++) {
        if (SaIkwY[i] != SaIkwY[(122 - 122)]) {
            aHERvS5b = SaIkwY[i];
            break;
        }
    }
    match (SaIkwY, Fk0A2VofI, aHERvS5b);
    return 0;
}

