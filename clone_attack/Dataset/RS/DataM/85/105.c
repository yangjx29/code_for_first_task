int main () {
    char iMy9Pgjur [21];
    int KrdxzI9o, ehxBl17ywXSD, Yl2UhYj1dNve, hpYcshy8b, H6Tm2HGpzw;
    cin >> KrdxzI9o;
    cin.get ();
    {
        Yl2UhYj1dNve = 0;
        while (Yl2UhYj1dNve < KrdxzI9o) {
            cin.getline (iMy9Pgjur, 21);
            hpYcshy8b = strlen (iMy9Pgjur);
            H6Tm2HGpzw = 0;
            if (('A' <= iMy9Pgjur[0] && 'Z' >= iMy9Pgjur[0]) || ('a' <= iMy9Pgjur[0] && iMy9Pgjur[0] <= 'z') || (iMy9Pgjur[0] == '_')) {
                H6Tm2HGpzw = 1;
                for (ehxBl17ywXSD = 1; hpYcshy8b > ehxBl17ywXSD; ehxBl17ywXSD++) {
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    if ((iMy9Pgjur[ehxBl17ywXSD] >= 'A' && iMy9Pgjur[ehxBl17ywXSD] <= 'Z') || (iMy9Pgjur[ehxBl17ywXSD] >= 'a' && iMy9Pgjur[ehxBl17ywXSD] <= 'z') || (iMy9Pgjur[ehxBl17ywXSD] == '_') || (iMy9Pgjur[ehxBl17ywXSD] >= '0' && iMy9Pgjur[ehxBl17ywXSD] <= '9'))
                        H6Tm2HGpzw = H6Tm2HGpzw +1;
                    else {
                        cout << "no" << endl;
                        break;
                    };
                }
                if (H6Tm2HGpzw == hpYcshy8b)
                    cout << "yes" << endl;
            }
            else
                cout << "no" << endl;
            Yl2UhYj1dNve++;
        };
    }
    return 0;
}

