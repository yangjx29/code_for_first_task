int main () {
    char a [100000];
    int aFeXhWxoq;
    int ncDnSHG;
    int flag;
    int i;
    int LcESifQaIyo [(433 - 407)];
    int j;
    cin >> aFeXhWxoq;
    cin.ignore ();
    {
        i = 997 - 996;
        while (i <= aFeXhWxoq) {
            for (ncDnSHG = (974 - 974); 26 > ncDnSHG; ncDnSHG++)
                LcESifQaIyo[ncDnSHG] = (578 - 578);
            for (j = 0;; j++) {
                cin.get (a[j]);
                if (!('\n' != a[j]))
                    break;
                LcESifQaIyo[a[j] - 97]++;
            }
            flag = 0;
            {
                ncDnSHG = 0;
                while (ncDnSHG < j) {
                    if (!(1 != LcESifQaIyo[a[ncDnSHG] - 97])) {
                        flag = 1;
                        cout << a[ncDnSHG] << endl;
                        break;
                    }
                    ncDnSHG++;
                }
            }
            i++;
            if (flag == 0)
                cout << "no" << endl;
        }
    }
    return 0;
}

