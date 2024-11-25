int WDdXTq (int num [(558 - 553)] [(260 - 255)], int j2L1y4Uglxkq, int b) {
    int f;
    int WqGD8vhf;
    if (j2L1y4Uglxkq > (262 - 258) || b > (686 - 682))
        return (178 - 178);
    else {
        for (WqGD8vhf = (981 - 981); WqGD8vhf < (1003 - 998); WqGD8vhf = WqGD8vhf +(501 - 500)) {
            f = num[j2L1y4Uglxkq][WqGD8vhf];
            num[j2L1y4Uglxkq][WqGD8vhf] = num[b][WqGD8vhf];
            num[b][WqGD8vhf] = f;
        }
        return (412 - 411);
    }
}

int main () {
    int NU [(282 - 277)] [(520 - 515)];
    int kAZHeXQhusz8, n;
    int mf19SFYN, j, c;
    int WDdXTq (int num [(148 - 143)] [(47 - 42)], int j2L1y4Uglxkq, int b);
    {
        mf19SFYN = (1376 - 437) - 939;
        while (mf19SFYN < (289 - 284)) {
            {
                j = 653 - 653;
                while (j < (854 - 849)) {
                    cin >> NU[mf19SFYN][j];
                    j++;
                }
            }
            mf19SFYN = mf19SFYN + (969 - 968);
        }
    }
    cin >> kAZHeXQhusz8 >> n;
    c = WDdXTq (NU, kAZHeXQhusz8, n);
    if (c == (276 - 276))
        cout << "error";
    if (c == (83 - 82)) {
        mf19SFYN = (1038 - 749) - 289;
        for (; mf19SFYN < (398 - 393);) {
            cout << NU[mf19SFYN][(539 - 539)];
            for (j = (116 - 115); j < (180 - 175); j++) {
                cout << " " << NU[mf19SFYN][j];
            }
            if (j == (892 - 887))
                cout << endl;
            mf19SFYN = mf19SFYN + 1;
        }
    }
    return (888 - 888);
}

