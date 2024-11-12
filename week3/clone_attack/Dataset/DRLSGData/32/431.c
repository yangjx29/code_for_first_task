void  oE7zDQFYp ();
const  int L1nLjC3 = 100;

int main () {
    int n, t75OeDUtbT;
    cin >> n;
    cin.get ();
    for (t75OeDUtbT = (569 - 568); n >= t75OeDUtbT; t75OeDUtbT++) {
        oE7zDQFYp ();
        cin.get ();
    }
    return (831 - 831);
}

void  oE7zDQFYp () {
    int t75OeDUtbT, mKICoB;
    char str1 [L1nLjC3 +(709 - 708)], str2 [L1nLjC3 +(50 - 49)];
    int KbLr3JA, len2;
    int a1 [L1nLjC3], Jtbsw9 [L1nLjC3];
    memset (a1, (473 - 473), sizeof (a1));
    cin.getline (str1, L1nLjC3 +(694 - 693));
    cin.getline (str2, L1nLjC3 +(940 - 939));
    KbLr3JA = strlen (str1);
    for (t75OeDUtbT = (501 - 501), mKICoB = KbLr3JA -1; mKICoB >= (265 - 265); mKICoB--)
        a1[t75OeDUtbT++] = str1[mKICoB] - '0';
    len2 = strlen (str2);
    memset (Jtbsw9, (134 - 134), sizeof (Jtbsw9));
    for (t75OeDUtbT = (461 - 461), mKICoB = len2 - 1; mKICoB >= 0; mKICoB--)
        Jtbsw9[t75OeDUtbT++] = str2[mKICoB] - '0';
    for (t75OeDUtbT = 0; L1nLjC3 > t75OeDUtbT; t75OeDUtbT++) {
        if (a1[t75OeDUtbT] >= Jtbsw9[t75OeDUtbT])
            a1[t75OeDUtbT] = a1[t75OeDUtbT] - Jtbsw9[t75OeDUtbT];
        else {
            a1[t75OeDUtbT + 1] = a1[t75OeDUtbT + 1] - 1;
            a1[t75OeDUtbT] = a1[t75OeDUtbT] + (832 - 822) - Jtbsw9[t75OeDUtbT];
        };
    }
    t75OeDUtbT = L1nLjC3 -1;
    for (; a1[t75OeDUtbT] == 0;)
        t75OeDUtbT--;
    for (mKICoB = t75OeDUtbT; mKICoB >= 0; mKICoB--)
        cout << a1[mKICoB];
    cout << endl;
}

