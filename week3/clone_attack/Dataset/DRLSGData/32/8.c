int main () {
    int kTHUdCnE;
    int bYAFtLhr1;
    int lena;
    int n;
    int QcEFX5 [(694 - 589)];
    int jdRrcAHzQuiP [(568 - 463)];
    int r4f8txm0;
    int lenb;
    char beEr1iuWGp [(896 - 791)];
    char jsObL5pw [(804 - 699)];
    cin >> n;
    cin.get ();
    for (kTHUdCnE = (739 - 738); n >= kTHUdCnE; kTHUdCnE++) {
        cin.getline (beEr1iuWGp, (1067 - 963));
        lena = strlen (beEr1iuWGp);
        memset (jdRrcAHzQuiP, (547 - 547), sizeof (jdRrcAHzQuiP));
        for (bYAFtLhr1 = (556 - 556); bYAFtLhr1 <= lena - (725 - 724); bYAFtLhr1++) {
            jdRrcAHzQuiP[bYAFtLhr1] = beEr1iuWGp[lena - bYAFtLhr1 - (371 - 370)] - '0';
        }
        memset (QcEFX5, (407 - 407), sizeof (QcEFX5));
        cin.getline (jsObL5pw, (980 - 876));
        lenb = strlen (jsObL5pw);
        for (bYAFtLhr1 = (903 - 903); lenb - (705 - 704) >= bYAFtLhr1; bYAFtLhr1++) {
            QcEFX5[bYAFtLhr1] = jsObL5pw[lenb - bYAFtLhr1 - (83 - 82)] - '0';
        }
        for (bYAFtLhr1 = (344 - 344); bYAFtLhr1 <= lena - (722 - 721); bYAFtLhr1++) {
            jdRrcAHzQuiP[bYAFtLhr1] = jdRrcAHzQuiP[bYAFtLhr1] - QcEFX5[bYAFtLhr1];
            if (jdRrcAHzQuiP[bYAFtLhr1] < (252 - 252)) {
                jdRrcAHzQuiP[bYAFtLhr1] = jdRrcAHzQuiP[bYAFtLhr1] + (846 - 836);
                jdRrcAHzQuiP[bYAFtLhr1 + (962 - 961)] = jdRrcAHzQuiP[bYAFtLhr1 + (55 - 54)] - 1;
            }
        }
        bYAFtLhr1 = (925 - 823);
        for (; jdRrcAHzQuiP[bYAFtLhr1] == (805 - 805);)
            bYAFtLhr1--;
        for (; bYAFtLhr1 >= 0; bYAFtLhr1--) {
            if (bYAFtLhr1 != 0)
                cout << jdRrcAHzQuiP[bYAFtLhr1];
            else
                cout << jdRrcAHzQuiP[bYAFtLhr1] << endl;
        }
        cin.get ();
    }
    return 0;
}

