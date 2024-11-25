int main () {
    int xNi0lCArw, WZXFHi7;
    int gSes1I, CZfDeci6H2k;
    int eVfNDbaTe [(1044 - 944)] [100];
    cin >> xNi0lCArw >> WZXFHi7;
    {
        gSes1I = 192 - 191;
        while (xNi0lCArw >= gSes1I) {
            {
                CZfDeci6H2k = 1;
                while (WZXFHi7 >= CZfDeci6H2k) {
                    cin >> eVfNDbaTe[gSes1I][CZfDeci6H2k];
                    CZfDeci6H2k++;
                }
            }
            gSes1I++;
        }
    }
    int sqMgxR7vSc;
    cout << eVfNDbaTe[1][1];
    for (sqMgxR7vSc = 2; WZXFHi7 >= sqMgxR7vSc; sqMgxR7vSc++) {
        cout << endl << eVfNDbaTe[1][sqMgxR7vSc];
    }
    int jDJc6h = WZXFHi7 -1;
    int IEi2gSPUGvX = xNi0lCArw - 1;
    int fC6eJypl7hPV;
    char TI4ekvWn8X2 = 'd';
    gSes1I = 1;
    CZfDeci6H2k = WZXFHi7;
    while (((!('u' != TI4ekvWn8X2) || !('d' != TI4ekvWn8X2)) && (IEi2gSPUGvX != 0)) || ((TI4ekvWn8X2 == 'l' || TI4ekvWn8X2 == 'r') && (jDJc6h != 0))) {
        switch (TI4ekvWn8X2) {
        case 'd' :
            for (fC6eJypl7hPV = 1; fC6eJypl7hPV <= IEi2gSPUGvX; fC6eJypl7hPV++) {
                gSes1I++;
                cout << endl << eVfNDbaTe[gSes1I][CZfDeci6H2k];
            }
            TI4ekvWn8X2 = 'l';
            IEi2gSPUGvX--;
            break;
        case 'l' :
            for (fC6eJypl7hPV = 1; fC6eJypl7hPV <= jDJc6h; fC6eJypl7hPV++) {
                CZfDeci6H2k--;
                cout << endl << eVfNDbaTe[gSes1I][CZfDeci6H2k];
            }
            TI4ekvWn8X2 = 'u';
            jDJc6h--;
            break;
        case 'u' :
            for (fC6eJypl7hPV = 1; fC6eJypl7hPV <= IEi2gSPUGvX; fC6eJypl7hPV++) {
                gSes1I--;
                cout << endl << eVfNDbaTe[gSes1I][CZfDeci6H2k];
            }
            TI4ekvWn8X2 = 'r';
            IEi2gSPUGvX--;
            break;
        case 'r' :
            for (fC6eJypl7hPV = 1; fC6eJypl7hPV <= jDJc6h; fC6eJypl7hPV++) {
                CZfDeci6H2k++;
                cout << endl << eVfNDbaTe[gSes1I][CZfDeci6H2k];
            }
            TI4ekvWn8X2 = 'd';
            jDJc6h--;
            break;
        }
    }
    return 0;
}

