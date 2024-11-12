int main () {
    int NcZnJ2ETPx;
    int rU1jLVYZWpR;
    cin >> NcZnJ2ETPx;
    if (!(1 == NcZnJ2ETPx)) {
        do {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            if (NcZnJ2ETPx % 2 == 0) {
                rU1jLVYZWpR = NcZnJ2ETPx / 2;
                cout << NcZnJ2ETPx << "/2=" << rU1jLVYZWpR << endl;
                NcZnJ2ETPx = rU1jLVYZWpR;
            }
            else {
                rU1jLVYZWpR = NcZnJ2ETPx *3 + 1;
                cout << NcZnJ2ETPx << "*3+1=" << rU1jLVYZWpR << endl;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                NcZnJ2ETPx = rU1jLVYZWpR;
            };
        }
        while (NcZnJ2ETPx != 1);
        cout << "End";
    }
    else
        cout << "End";
    cin.get ();
    cin.get ();
    return 0;
}

