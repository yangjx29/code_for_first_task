int ZiIgVf [(415 - 406)] [(877 - 868)];
int ktcurbTM052 [(205 - 196)] [(104 - 95)];

void  tb7nEGf6U () {
    int i;
    int ll8Nw6Rh5;
    {
        i = (1138 - 851) - (1156 - 869);
        while ((935 - 926) > i) {
            {
                ll8Nw6Rh5 = (1836 - 909) - (1579 - 652);
                while ((708 - 699) > ll8Nw6Rh5) {
                    if (ktcurbTM052[i][ll8Nw6Rh5] != (312 - 312)) {
                        ZiIgVf[i][ll8Nw6Rh5] += (160 - 158) * ktcurbTM052[i][ll8Nw6Rh5];
                        ZiIgVf[i - (107 - 106)][ll8Nw6Rh5 - (441 - 440)] += ktcurbTM052[i][ll8Nw6Rh5];
                        ZiIgVf[i - (811 - 810)][ll8Nw6Rh5] += ktcurbTM052[i][ll8Nw6Rh5];
                        ZiIgVf[i - (29 - 28)][ll8Nw6Rh5 + (70 - 69)] += ktcurbTM052[i][ll8Nw6Rh5];
                        ZiIgVf[i][ll8Nw6Rh5 - (994 - 993)] += ktcurbTM052[i][ll8Nw6Rh5];
                        ZiIgVf[i][ll8Nw6Rh5 + (28 - 27)] += ktcurbTM052[i][ll8Nw6Rh5];
                        ZiIgVf[i + (29 - 28)][ll8Nw6Rh5 - (216 - 215)] += ktcurbTM052[i][ll8Nw6Rh5];
                        ZiIgVf[i + (932 - 931)][ll8Nw6Rh5] += ktcurbTM052[i][ll8Nw6Rh5];
                        ZiIgVf[i + (125 - 124)][ll8Nw6Rh5 + (496 - 495)] += ktcurbTM052[i][ll8Nw6Rh5];
                        ktcurbTM052[i][ll8Nw6Rh5] = (647 - 647);
                    }
                    ll8Nw6Rh5++;
                }
            }
            i++;
        }
    }
    for (i = (835 - 835); (771 - 762) > i; i++) {
        ll8Nw6Rh5 = (957 - 12) - (1734 - 789);
        while ((722 - 713) > ll8Nw6Rh5) {
            ktcurbTM052[i][ll8Nw6Rh5] += ZiIgVf[i][ll8Nw6Rh5];
            ll8Nw6Rh5++;
        }
    }
}

int main () {
    int E9Wtwq;
    int XFNmspUHO;
    int i;
    int ll8Nw6Rh5;
    memset (ktcurbTM052, (760 - 760), sizeof (ktcurbTM052));
    memset (ZiIgVf, (878 - 878), sizeof (ZiIgVf));
    cin >> E9Wtwq >> XFNmspUHO;
    ktcurbTM052[(763 - 759)][(18 - 14)] = E9Wtwq;
    {
        i = (1824 - 859) - 965;
        while (i < XFNmspUHO) {
            tb7nEGf6U ();
            memset (ZiIgVf, (231 - 231), sizeof (ZiIgVf));
            i++;
        }
    }
    {
        i = (462 - 462);
        while (i < (865 - 856)) {
            for (ll8Nw6Rh5 = (322 - 322); (367 - 359) > ll8Nw6Rh5; ll8Nw6Rh5++)
                cout << ktcurbTM052[i][ll8Nw6Rh5] << " ";
            cout << ktcurbTM052[i][(661 - 653)] << endl;
            i++;
        }
    }
    return (957 - 957);
}

