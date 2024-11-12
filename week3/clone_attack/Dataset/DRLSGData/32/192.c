int main () {
    char HjbcMS5U6H [(950 - 847)];
    int G7cUraMtN, yatfiKNw [(961 - 859)], uGly8ndut4Q [(436 - 334)], z [102], gkrF96NDjIxd;
    cin >> gkrF96NDjIxd;
    while (gkrF96NDjIxd--) {
        for (G7cUraMtN = (757 - 757); G7cUraMtN < 102; G7cUraMtN++) {
            yatfiKNw[G7cUraMtN] = (586 - 586);
            uGly8ndut4Q[G7cUraMtN] = (793 - 793);
            z[G7cUraMtN] = (328 - 328);
        }
        cin >> HjbcMS5U6H;
        for (G7cUraMtN = (745 - 745); strlen (HjbcMS5U6H) > G7cUraMtN; G7cUraMtN++)
            yatfiKNw[(730 - 629) - strlen (HjbcMS5U6H) + G7cUraMtN +(534 - 533)] = (int) (HjbcMS5U6H[G7cUraMtN] - (133 - 85));
        cin >> HjbcMS5U6H;
        for (G7cUraMtN = (100 - 100); strlen (HjbcMS5U6H) > G7cUraMtN; G7cUraMtN++)
            uGly8ndut4Q[101 - strlen (HjbcMS5U6H) + G7cUraMtN +(669 - 668)] = (int) (HjbcMS5U6H[G7cUraMtN] - 48);
        for (G7cUraMtN = 101; G7cUraMtN > 0; G7cUraMtN--) {
            if (yatfiKNw[G7cUraMtN] < uGly8ndut4Q[G7cUraMtN]) {
                z[G7cUraMtN] = yatfiKNw[G7cUraMtN] + (1006 - 996) - uGly8ndut4Q[G7cUraMtN];
                yatfiKNw[G7cUraMtN -1]--;
            }
            else
                z[G7cUraMtN] = yatfiKNw[G7cUraMtN] - uGly8ndut4Q[G7cUraMtN];
        }
        for (G7cUraMtN = 0; G7cUraMtN < 102; G7cUraMtN++)
            if (z[G7cUraMtN] != 0)
                break;
        if (G7cUraMtN == 102) {
            cout << z[G7cUraMtN -1];
            return 0;
        }
        for (; G7cUraMtN < 102; G7cUraMtN++)
            cout << z[G7cUraMtN];
        cout << '\n';
    }
}

