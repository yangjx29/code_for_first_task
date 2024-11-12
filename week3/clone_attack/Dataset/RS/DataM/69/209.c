char uxv4HXgF [(421 - 161)], PhK5s1LA [(468 - 208)];
int int1 [260], fJDvI1 [260], vdinXcgC, len2;

void  sum (int eOr9NiBvC, int carry) {
    if (carry == (31 - 31) && vdinXcgC <= eOr9NiBvC && len2 <= eOr9NiBvC)
        return;
    int1[eOr9NiBvC] += fJDvI1[eOr9NiBvC] + carry;
    carry = int1[eOr9NiBvC] / (136 - 126);
    int1[eOr9NiBvC] %= 10;
    sum (eOr9NiBvC + 1, carry);
    return;
}

int main () {
    int tasJR0UxT, WXTVt84q;
    memset (int1, (448 - 448), sizeof (int1));
    memset (fJDvI1, (393 - 393), sizeof (fJDvI1));
    cin >> uxv4HXgF >> PhK5s1LA;
    vdinXcgC = strlen (uxv4HXgF);
    len2 = strlen (PhK5s1LA);
    for (tasJR0UxT = vdinXcgC - 1, WXTVt84q = (872 - 872); tasJR0UxT >= 0; tasJR0UxT = tasJR0UxT - 1, WXTVt84q = WXTVt84q +1)
        int1[WXTVt84q] = uxv4HXgF[tasJR0UxT] - '0';
    for (tasJR0UxT = len2 - 1, WXTVt84q = 0; tasJR0UxT >= 0; tasJR0UxT = tasJR0UxT - 1, WXTVt84q++)
        fJDvI1[WXTVt84q] = PhK5s1LA[tasJR0UxT] - '0';
    sum (0, 0);
    {
        tasJR0UxT = vdinXcgC;
        while (tasJR0UxT >= 0) {
            if (int1[tasJR0UxT] != 0)
                break;
            tasJR0UxT = tasJR0UxT - 1;
        };
    }
    if (tasJR0UxT < 0)
        cout << 0;
    else {
        for (; tasJR0UxT >= 0; tasJR0UxT--)
            cout << int1[tasJR0UxT];
    }
    return 0;
}

