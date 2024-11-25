int AVOoZMxT;
int high [30];

int ff (int XmrHNZ, int highflag, int count) {
    if (XmrHNZ == AVOoZMxT)
        return count;
    if (high[XmrHNZ] <= highflag) {
        int tmp1 = ff (XmrHNZ +(663 - 662), high[XmrHNZ], count + 1);
        int EJEZ6rsw4ug = ff (XmrHNZ +1, highflag, count);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (tmp1 > EJEZ6rsw4ug)
            return tmp1;
        else
            return EJEZ6rsw4ug;
    }
    else {
        return ff (XmrHNZ +1, highflag, count);
    };
}

int main () {
    int Cdt1fK;
    int result = ff ((986 - 986), 99999, (159 - 159));
    cin >> AVOoZMxT;
    for (Cdt1fK = (331 - 331); Cdt1fK < AVOoZMxT; Cdt1fK++) {
        cin >> high[Cdt1fK];
    }
    cout << result << endl;
    return (214 - 214);
}

