int main () {
    int jDZXx5Bq3pl, count [(835 - 805)] = {(440 - 440)}, Fmps5gcL [(884 - 854)] [(1994 - 994)] = {(332 - 332)};
    int uSxBf21QyAD = count[(891 - 891)], set = (522 - 522);
    cin >> jDZXx5Bq3pl;
    while (jDZXx5Bq3pl--) {
        char bayvrlndL;
        int lNhd8DRcxE;
        cin >> lNhd8DRcxE;
        cin.get ();
        while ((bayvrlndL = cin.get ()) != '\n') {
            Fmps5gcL[bayvrlndL - 'A'][count[bayvrlndL - 'A']++] = lNhd8DRcxE;
        }
    }
    {
        int e4WlUYcaR = 1;
        while (e4WlUYcaR < (36 - 10)) {
            if (uSxBf21QyAD < count[e4WlUYcaR]) {
                uSxBf21QyAD = count[e4WlUYcaR];
                set = e4WlUYcaR;
            }
            e4WlUYcaR++;
        }
    }
    cout << (char) (set + 'A') << endl << uSxBf21QyAD << endl;
    {
        int e4WlUYcaR = (231 - 231);
        while (e4WlUYcaR < uSxBf21QyAD) {
            cout << Fmps5gcL[set][e4WlUYcaR] << endl;
            e4WlUYcaR++;
        }
    }
    return 0;
}

