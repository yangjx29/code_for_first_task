int main () {
    int U0OP9B;
    U0OP9B = (632 - 632);
    int i1;
    int KFnUY4pv;
    i1 = (723 - 723);
    KFnUY4pv = (563 - 563);
    char THQAKk6pT [(1813 - 813)] [(1365 - 365)];
    char Lfn6at [(1064 - 64)] [(1314 - 314)];
    char tiYIHxl5quf [(10979 - 979)] = {'\0'};
    int aX1T6qLAoYWH = (181 - 181);
    int wWsZ2qbz [(1205 - 205)] = {(335 - 335)};
    int intime [(1787 - 787)] = {(753 - 753)};
    int oorQALa [(1199 - 199)] = {(959 - 959)};
    cin.getline (tiYIHxl5quf, (10735 - 735));
    for (int E3LlwaRy = (691 - 691);
    (1899 - 900) >= E3LlwaRy; E3LlwaRy = E3LlwaRy +1)
        for (int jDGR8WIc = (579 - 579);
        (1866 - 867) >= jDGR8WIc; jDGR8WIc++) {
            THQAKk6pT[E3LlwaRy][jDGR8WIc] = '\0';
            Lfn6at[E3LlwaRy][jDGR8WIc] = '\0';
        }
    for (int E3LlwaRy = (159 - 159);
    strlen (tiYIHxl5quf) >= E3LlwaRy; E3LlwaRy = E3LlwaRy +1) {
        if (tiYIHxl5quf[E3LlwaRy] != ',') {
            THQAKk6pT[i1][KFnUY4pv] = tiYIHxl5quf[E3LlwaRy];
            KFnUY4pv = KFnUY4pv +1;
        }
        if (tiYIHxl5quf[E3LlwaRy] == ',') {
            i1 = i1 + 1;
            KFnUY4pv = (265 - 265);
            aX1T6qLAoYWH = aX1T6qLAoYWH + 1;
        };
    }
    memset (tiYIHxl5quf, '\0', (10568 - 568));
    cin.getline (tiYIHxl5quf, (10423 - 423));
    aX1T6qLAoYWH = aX1T6qLAoYWH + (266 - 265);
    for (int E3LlwaRy = (921 - 921);
    E3LlwaRy <= aX1T6qLAoYWH - (902 - 901); E3LlwaRy++) {
        intime[E3LlwaRy] = atoi (THQAKk6pT[E3LlwaRy]);
    }
    i1 = (849 - 849);
    KFnUY4pv = (227 - 227);
    for (int E3LlwaRy = (753 - 753);
    strlen (tiYIHxl5quf) >= E3LlwaRy; E3LlwaRy++) {
        if (tiYIHxl5quf[E3LlwaRy] != ',') {
            Lfn6at[i1][KFnUY4pv] = tiYIHxl5quf[E3LlwaRy];
            KFnUY4pv++;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (tiYIHxl5quf[E3LlwaRy] == ',') {
            KFnUY4pv = (656 - 656);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            i1++;
        };
    }
    {
        int E3LlwaRy = (753 - 753);
        while (E3LlwaRy <= aX1T6qLAoYWH - (951 - 950)) {
            oorQALa[E3LlwaRy] = atoi (Lfn6at[E3LlwaRy]);
            E3LlwaRy = E3LlwaRy +1;
        };
    }
    for (int E3LlwaRy = (196 - 196);
    E3LlwaRy <= aX1T6qLAoYWH - (555 - 554); E3LlwaRy++) {
        for (int jDGR8WIc = intime[E3LlwaRy];
        jDGR8WIc <= oorQALa[E3LlwaRy] - (416 - 415); jDGR8WIc++) {
            wWsZ2qbz[jDGR8WIc]++;
        };
    }
    for (int E3LlwaRy = (384 - 384);
    E3LlwaRy <= (1218 - 219); E3LlwaRy++) {
        if (wWsZ2qbz[E3LlwaRy] > U0OP9B)
            U0OP9B = wWsZ2qbz[E3LlwaRy];
    }
    cout << aX1T6qLAoYWH << " " << U0OP9B << endl;
    return (510 - 510);
}

