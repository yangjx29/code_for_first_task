int main () {
    char DUOpWcI [256];
    int dz1jPVK, ILTeuK7VZ, TLYP5p2K;
    cin >> dz1jPVK;
    {
        TLYP5p2K = 0;
        while (dz1jPVK > TLYP5p2K) {
            cin >> DUOpWcI;
            {
                ILTeuK7VZ = 0;
                while (strlen (DUOpWcI) > ILTeuK7VZ) {
                    switch (DUOpWcI[ILTeuK7VZ]) {
                    case 'A' :
                        cout << 'T';
                        break;
                    case 'T' :
                        cout << 'A';
                        break;
                    case 'G' :
                        cout << 'C';
                        break;
                    case 'C' :
                        cout << 'G';
                        break;
                    }
                    ILTeuK7VZ = ILTeuK7VZ +1;
                };
            }
            TLYP5p2K++;
            cout << endl;
        };
    }
    return 0;
}

