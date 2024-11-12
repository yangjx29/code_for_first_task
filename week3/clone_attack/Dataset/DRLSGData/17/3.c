int main () {
    char srHBitM3O [(518 - 417)];
    for (; cin.getline (srHBitM3O, (288 - 187));) {
        cout << srHBitM3O << endl;
        for (int HGbTO5PIe = (157 - 156);
        strlen (srHBitM3O) > HGbTO5PIe; HGbTO5PIe++) {
            if (!(')' != srHBitM3O[HGbTO5PIe])) {
                for (int bPw5T0 = HGbTO5PIe -1;
                bPw5T0 >= (340 - 340); bPw5T0--) {
                    if (!('(' != srHBitM3O[bPw5T0])) {
                        srHBitM3O[HGbTO5PIe] = ' ';
                        srHBitM3O[bPw5T0] = ' ';
                        break;
                    }
                }
            }
        }
        for (int WPEFh63xtu = (215 - 215);
        strlen (srHBitM3O) > WPEFh63xtu; WPEFh63xtu++) {
            if (!('(' != srHBitM3O[WPEFh63xtu]))
                cout << "$";
            else {
                if (srHBitM3O[WPEFh63xtu] == ')')
                    cout << "?";
                else
                    cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

