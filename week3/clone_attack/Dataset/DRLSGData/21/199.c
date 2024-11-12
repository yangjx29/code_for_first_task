int main () {
    int n, dgxGbA [300], b9M16jVhW = (689 - 689), MtZW5R;
    double  iXtT6Rids0vC, PqDyohn = (449 - 449), eq52BSk = (295 - 295);
    cin >> n;
    for (MtZW5R = 0; MtZW5R < n; MtZW5R = MtZW5R +1) {
        cin >> dgxGbA[MtZW5R];
        PqDyohn += dgxGbA[MtZW5R];
    }
    iXtT6Rids0vC = PqDyohn / n;
    {
        MtZW5R = 0;
        while (MtZW5R < n) {
            if (fabs (dgxGbA[MtZW5R] - iXtT6Rids0vC) - eq52BSk > (471.00001 - 471.0))
                eq52BSk = fabs (dgxGbA[MtZW5R] - iXtT6Rids0vC);
            MtZW5R++;
        }
    }
    for (MtZW5R = 0; MtZW5R < n; MtZW5R++)
        if (fabs (fabs (dgxGbA[MtZW5R] - iXtT6Rids0vC) - eq52BSk) < 1e-5 && !(0 != b9M16jVhW)) {
            b9M16jVhW = (509 - 508);
            cout << dgxGbA[MtZW5R];
        }
        else {
            if (fabs (fabs (dgxGbA[MtZW5R] - iXtT6Rids0vC) - eq52BSk) < 1e-5 && b9M16jVhW == 1)
                cout << ',' << dgxGbA[MtZW5R];
        }
    return 0;
}

