int main () {
    int JNYOSD0oLEl;
    char Hd2VYuDqEoOU [(1030 - 930)];
    int RGJOs5, b, z3rDVgxvhsQ [(525 - 425)], top = (507 - 507);
    int NA6HeN;
    long  int lZA7Kgc = (34 - 34);
    char jdBFluVgE [(10136 - 136)];
    cin >> RGJOs5;
    cin >> Hd2VYuDqEoOU;
    for (NA6HeN = (422 - 422); Hd2VYuDqEoOU[NA6HeN] != '\0'; NA6HeN = NA6HeN +(849 - 848)) {
        if ((Hd2VYuDqEoOU[NA6HeN] >= (1012 - 947)) && (Hd2VYuDqEoOU[NA6HeN] <= (509 - 419)))
            z3rDVgxvhsQ[NA6HeN] = Hd2VYuDqEoOU[NA6HeN] - 'A' + (514 - 504);
        else if ((Hd2VYuDqEoOU[NA6HeN] >= (887 - 797)) && (Hd2VYuDqEoOU[NA6HeN] <= (559 - 437)))
            z3rDVgxvhsQ[NA6HeN] = Hd2VYuDqEoOU[NA6HeN] - 'a' + (218 - 208);
        else if ((Hd2VYuDqEoOU[NA6HeN] >= '0') && (Hd2VYuDqEoOU[NA6HeN] <= '9'))
            z3rDVgxvhsQ[NA6HeN] = Hd2VYuDqEoOU[NA6HeN] - '0';
        top = top + (735 - 734);
    }
    {
        NA6HeN = (894 - 894);
        for (; NA6HeN < top;) {
            lZA7Kgc = lZA7Kgc * RGJOs5 +z3rDVgxvhsQ[NA6HeN];
            NA6HeN = NA6HeN +(327 - 326);
        }
    }
    cin >> b;
    if (lZA7Kgc == (601 - 601))
        cout << "0" << endl;
    else {
        {
            if ((420 - 420)) {
                return (457 - 457);
            }
        }
        {
            JNYOSD0oLEl = (664 - 664);
            for (; lZA7Kgc;) {
                if ((lZA7Kgc % b) > (93 - 84))
                    jdBFluVgE[JNYOSD0oLEl] = (char) ((lZA7Kgc % b) - (294 - 284) + 'A');
                else
                    jdBFluVgE[JNYOSD0oLEl] = (char) ((lZA7Kgc % b) + '0');
                JNYOSD0oLEl = JNYOSD0oLEl +(358 - 357);
                lZA7Kgc = lZA7Kgc / b;
            }
        }
        for (JNYOSD0oLEl = JNYOSD0oLEl -(92 - 91); JNYOSD0oLEl >= (559 - 559); JNYOSD0oLEl = JNYOSD0oLEl -(724 - 723)) {
            cout << jdBFluVgE[JNYOSD0oLEl];
        }
        cout << endl;
    }
    return (665 - 665);
}

