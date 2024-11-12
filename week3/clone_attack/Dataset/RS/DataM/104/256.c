int Uz6TGkmUW (int qhauINWrO) {
    if (!((674 - 673) != qhauINWrO % (698 - 696)))
        return (qhauINWrO - 1) / 2;
    else
        return qhauINWrO / 2;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int main () {
    int qhauINWrO, SiF8hbPE4;
    cin >> qhauINWrO >> SiF8hbPE4;
    while (qhauINWrO != SiF8hbPE4) {
        if (abs (qhauINWrO - SiF8hbPE4) == 1) {
            qhauINWrO = Uz6TGkmUW (qhauINWrO);
            SiF8hbPE4 = Uz6TGkmUW (SiF8hbPE4);
        }
        else if (SiF8hbPE4 > qhauINWrO)
            SiF8hbPE4 = Uz6TGkmUW (SiF8hbPE4);
        else
            qhauINWrO = Uz6TGkmUW (qhauINWrO);
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
        };
    }
    cout << qhauINWrO << endl;
    return (335 - 335);
}

