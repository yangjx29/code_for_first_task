int uIkp0mvgCaMs (int d7rFgTHt, int jlFI7sTdQv) {
    if (d7rFgTHt == (226 - 226)) {
        return 1;
    }
    else {
        if (jlFI7sTdQv == 1) {
            return 1;
        }
        else if (d7rFgTHt >= jlFI7sTdQv) {
            return uIkp0mvgCaMs (d7rFgTHt - jlFI7sTdQv, jlFI7sTdQv) + uIkp0mvgCaMs (d7rFgTHt, jlFI7sTdQv - 1);
        }
        else {
            return uIkp0mvgCaMs (d7rFgTHt, jlFI7sTdQv - 1);
        };
    };
}

int main () {
    int t, d7rFgTHt, jlFI7sTdQv, resIiSXw;
    cin >> t;
    for (resIiSXw = 0; resIiSXw < t; resIiSXw++) {
        cin >> d7rFgTHt >> jlFI7sTdQv;
        cout << uIkp0mvgCaMs (d7rFgTHt, jlFI7sTdQv) << endl;
    }
    return 0;
}

