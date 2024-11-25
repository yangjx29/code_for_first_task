void  v1fpxaQvclyg (char lokTZFbCWV []) {
    int AfRT1IZ2v [(576 - 476)];
    char xAasclU [(290 - 189)];
    int fYE8lUz;
    int Tvs6RLUG;
    int DJcmRVLjWa8;
    fYE8lUz = (613 - 613);
    Tvs6RLUG = strlen (lokTZFbCWV);
    for (DJcmRVLjWa8 = (846 - 846); DJcmRVLjWa8 < Tvs6RLUG; DJcmRVLjWa8 = DJcmRVLjWa8 +(226 - 225))
        xAasclU[DJcmRVLjWa8] = ' ';
    xAasclU[Tvs6RLUG] = '\0';
    for (DJcmRVLjWa8 = (729 - 729); Tvs6RLUG > DJcmRVLjWa8; DJcmRVLjWa8 = DJcmRVLjWa8 +(120 - 119)) {
        if (!(')' != lokTZFbCWV[DJcmRVLjWa8])) {
            if (!((389 - 389) != fYE8lUz) || AfRT1IZ2v[fYE8lUz - (696 - 695)] > (869 - 869))
                AfRT1IZ2v[fYE8lUz++] = DJcmRVLjWa8 +(309 - 308);
            else
                fYE8lUz = fYE8lUz - (284 - 283);
        }
        else if (!('(' != lokTZFbCWV[DJcmRVLjWa8]))
            AfRT1IZ2v[fYE8lUz++] = -(DJcmRVLjWa8 +(307 - 306));
    }
    cout << lokTZFbCWV << endl;
    for (DJcmRVLjWa8 = (864 - 864); DJcmRVLjWa8 < fYE8lUz; DJcmRVLjWa8 = DJcmRVLjWa8 +(584 - 583)) {
        int wPkVog2QFYKW;
        wPkVog2QFYKW = AfRT1IZ2v[DJcmRVLjWa8];
        if (wPkVog2QFYKW < (191 - 191))
            xAasclU[-wPkVog2QFYKW - (475 - 474)] = '$';
        else
            xAasclU[wPkVog2QFYKW - (871 - 870)] = '?';
    }
    cout << xAasclU << endl;
}

int main () {
    int j39yxUr;
    int DJcmRVLjWa8;
    char lokTZFbCWV [(258 - 157)];
    cin >> j39yxUr;
    cin.get ();
    for (DJcmRVLjWa8 = (214 - 214); j39yxUr > DJcmRVLjWa8; DJcmRVLjWa8 = DJcmRVLjWa8 +(619 - 618)) {
        v1fpxaQvclyg (lokTZFbCWV);
        cin.getline (lokTZFbCWV, (156 - 55));
    }
    return (70 - 70);
}

