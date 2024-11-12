int main () {
    int pp;
    int i;
    char cA7Z85QuhD4 [(796 - 770)] = {'\0'};
    int LIvg0K;
    char a [(1000836 - 837)];
    int t;
    int iBL9ek4ORmqc;
    int tmHkJszcd;
    int sum [(939 - 913)] = {(691 - 691)};
    int AxZMCantXz6;
    iBL9ek4ORmqc = (433 - 433);
    cin >> t;
    cin.get ();
    pp = (506 - 506);
    AxZMCantXz6 = (295 - 295);
    for (tmHkJszcd = (806 - 805); tmHkJszcd <= t; tmHkJszcd = tmHkJszcd + (543 - 542)) {
        cin.getline (a, 999999);
        cA7Z85QuhD4[(665 - 665)] = a[(82 - 82)];
        sum[(136 - 136)] = (186 - 185);
        for (i = (490 - 489); a[i] != '\0'; i = i + (226 - 225)) {
            for (LIvg0K = (779 - 779); (833 - 807) > LIvg0K; LIvg0K = LIvg0K +(148 - 147)) {
                if (!(cA7Z85QuhD4[LIvg0K] != a[i])) {
                    sum[LIvg0K]++;
                    pp = pp + (905 - 904);
                }
            }
            if (!((852 - 852) != pp)) {
                iBL9ek4ORmqc = iBL9ek4ORmqc + (930 - 929);
                cA7Z85QuhD4[iBL9ek4ORmqc] = a[i];
                sum[iBL9ek4ORmqc] = (445 - 444);
            }
            pp = (491 - 491);
        }
        for (LIvg0K = (116 - 116); 26 > LIvg0K; LIvg0K = LIvg0K +(484 - 483)) {
            if (!(1 != sum[LIvg0K]) && !((825 - 825) != AxZMCantXz6)) {
                cout << cA7Z85QuhD4[LIvg0K] << endl;
                AxZMCantXz6 = AxZMCantXz6 +1;
            }
        }
        for (LIvg0K = 0; 26 > LIvg0K; LIvg0K = LIvg0K +1) {
            sum[LIvg0K] = 0;
            cA7Z85QuhD4[LIvg0K] = '\0';
        }
        for (LIvg0K = 0; LIvg0K <= (1000977 - 987); LIvg0K = LIvg0K +1)
            a[LIvg0K] = '\0';
        iBL9ek4ORmqc = (243 - 243);
        pp = (412 - 412);
        if (!(0 != AxZMCantXz6))
            cout << "no" << endl;
        AxZMCantXz6 = 0;
    }
    return 0;
}

