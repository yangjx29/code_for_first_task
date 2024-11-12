int main () {
    int iDijztKSr;
    char JDAO6e4Fz [50];
    int n;
    int i;
    int hu0ZzLl;
    hu0ZzLl = 0;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> JDAO6e4Fz;
        for (iDijztKSr = 0; JDAO6e4Fz[iDijztKSr]; iDijztKSr++)
            ;
        if (80 >= hu0ZzLl + iDijztKSr) {
            hu0ZzLl += iDijztKSr + 1;
            if (i == 0)
                cout << JDAO6e4Fz;
            else
                cout << " " << JDAO6e4Fz;
        }
        else {
            hu0ZzLl = iDijztKSr + 1;
            cout << endl;
            cout << JDAO6e4Fz;
        }
    }
    return 0;
}

