void  judge (char n [], int k5lXVecAOpw, int WOiY5vJ);

int main () {
    char n [500], Tv3XPAOnyk;
    int k5lXVecAOpw = (543 - 543), WOiY5vJ = 2;
    cin >> n;
    for (WOiY5vJ = 2; WOiY5vJ <= strlen (n); WOiY5vJ = WOiY5vJ +1)
        for (k5lXVecAOpw = 0; k5lXVecAOpw <= strlen (n) - WOiY5vJ; k5lXVecAOpw = k5lXVecAOpw + 1)
            judge (n, k5lXVecAOpw, WOiY5vJ);
    return 0;
}

void  judge (char n [], int k5lXVecAOpw, int WOiY5vJ) {
    int SFyAocMf5mHn = 0;
    for (SFyAocMf5mHn = 0; WOiY5vJ > SFyAocMf5mHn; SFyAocMf5mHn = SFyAocMf5mHn +1)
        if (n[k5lXVecAOpw + SFyAocMf5mHn] != n[k5lXVecAOpw + WOiY5vJ -SFyAocMf5mHn-1])
            return;
    {
        SFyAocMf5mHn = 0;
        while (SFyAocMf5mHn < WOiY5vJ) {
            cout << n[k5lXVecAOpw + SFyAocMf5mHn];
            SFyAocMf5mHn = SFyAocMf5mHn +1;
        };
    }
    cout << '\n';
    return;
}

