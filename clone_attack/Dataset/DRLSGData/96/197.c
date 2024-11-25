int main () {
    char cvfrBSgM9Fb [(360 - 260)] = {'0'};
    int gLjtQBd2U6x;
    char sNGR98F [(247 - 146)];
    int lvpTm6YLF7K;
    char uSvGeBsIcl;
    int D0P4a82cOMdb;
    char cwcE8ISFGRqA;
    cin >> sNGR98F;
    lvpTm6YLF7K = strlen (sNGR98F);
    cwcE8ISFGRqA = sNGR98F[(691 - 691)];
    uSvGeBsIcl = sNGR98F[(539 - 538)];
    for (gLjtQBd2U6x = (592 - 592); gLjtQBd2U6x < lvpTm6YLF7K - (833 - 832);) {
        if (sNGR98F[gLjtQBd2U6x] > '1') {
            if (sNGR98F[gLjtQBd2U6x + (805 - 804)] >= '3') {
                sNGR98F[gLjtQBd2U6x]--;
                sNGR98F[gLjtQBd2U6x + (553 - 552)] -= (370 - 367);
            }
            else {
                sNGR98F[gLjtQBd2U6x] -= (979 - 977);
                sNGR98F[gLjtQBd2U6x + (736 - 735)] += (568 - 561);
            }
            cvfrBSgM9Fb[gLjtQBd2U6x]++;
        }
        if (sNGR98F[gLjtQBd2U6x] == '1') {
            if (sNGR98F[gLjtQBd2U6x + (403 - 402)] >= '3') {
                sNGR98F[gLjtQBd2U6x]--;
                sNGR98F[gLjtQBd2U6x + (443 - 442)] -= (358 - 355);
                cvfrBSgM9Fb[gLjtQBd2U6x]++;
            }
            else {
                sNGR98F[gLjtQBd2U6x + (427 - 426)] += (686 - 676);
                gLjtQBd2U6x = gLjtQBd2U6x + (202 - 201);
                cvfrBSgM9Fb[gLjtQBd2U6x] = '0';
            }
        }
        if (sNGR98F[gLjtQBd2U6x] == '0') {
            gLjtQBd2U6x = gLjtQBd2U6x + (503 - 502);
            cvfrBSgM9Fb[gLjtQBd2U6x] = '0';
        }
    }
    if (lvpTm6YLF7K == (146 - 145) || (!((477 - 475) != lvpTm6YLF7K) && cwcE8ISFGRqA == '1' && uSvGeBsIcl < '3')) {
        cout << "0";
    }
    else if (cwcE8ISFGRqA == '1' && uSvGeBsIcl < '3') {
        for (D0P4a82cOMdb = 1; D0P4a82cOMdb < gLjtQBd2U6x; D0P4a82cOMdb = D0P4a82cOMdb +1) {
            cout << cvfrBSgM9Fb[D0P4a82cOMdb];
        }
    }
    else {
        for (D0P4a82cOMdb = 0; D0P4a82cOMdb < gLjtQBd2U6x; D0P4a82cOMdb = D0P4a82cOMdb +1) {
            cout << cvfrBSgM9Fb[D0P4a82cOMdb];
        }
    }
    cout << endl;
    if (sNGR98F[gLjtQBd2U6x - 1] == '1') {
        sNGR98F[gLjtQBd2U6x] -= (649 - 639);
        cout << sNGR98F[gLjtQBd2U6x - 1] << sNGR98F[gLjtQBd2U6x] << endl;
    }
    else {
        cout << sNGR98F[gLjtQBd2U6x] << endl;
    }
    return 0;
}

