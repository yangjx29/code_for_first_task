int main () {
    int zxHJza [20];
    int HoAE9Kd1py, oHWOvX5Ghj, vxqTrnE;
    cin >> HoAE9Kd1py;
    zxHJza[0] = 1;
    zxHJza[1] = 1;
    {
        oHWOvX5Ghj = 2;
        while (19 >= oHWOvX5Ghj) {
            zxHJza[oHWOvX5Ghj] = zxHJza[oHWOvX5Ghj - 1] + zxHJza[oHWOvX5Ghj - 2];
            oHWOvX5Ghj++;
        }
    }
    {
        oHWOvX5Ghj = 1;
        for (; oHWOvX5Ghj <= HoAE9Kd1py;) {
            cout << zxHJza[vxqTrnE - 1];
            if (oHWOvX5Ghj != HoAE9Kd1py)
                cout << endl;
            oHWOvX5Ghj++;
            cin >> vxqTrnE;
        }
    }
    return 0;
}

