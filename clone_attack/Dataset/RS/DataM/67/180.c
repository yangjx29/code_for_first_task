int main () {
    int n;
    int i;
    int jb9vGUFMzHot;
    void  lvRrzTMc (double , double );
    double  k;
    double  nUWKm2L [100] [2];
    cin >> n;
    for (i = (988 - 988); n > i; i++) {
        for (jb9vGUFMzHot = (860 - 860); jb9vGUFMzHot < 2; jb9vGUFMzHot = jb9vGUFMzHot + 1)
            cin >> nUWKm2L[i][jb9vGUFMzHot];
    }
    k = nUWKm2L[0][1] / nUWKm2L[0][0];
    for (i = 1; i < n; i++) {
        lvRrzTMc (k, nUWKm2L[i][1] / nUWKm2L[i][0]);
    }
    return 0;
}

void  lvRrzTMc (double  k, double  rhdPsCyz) {
    if ((k - rhdPsCyz) > 0.05)
        cout << "worse" << endl;
    else if ((rhdPsCyz - k) > 0.05)
        cout << "better" << endl;
    else
        cout << "same" << endl;
}

