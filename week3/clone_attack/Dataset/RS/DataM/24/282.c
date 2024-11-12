int main (int argc, char *RijVXHBNGU2 []) {
    char GZ2flWxc95 [(1371 - 371)];
    char JUpMob [(983 - 933)] [(347 - 327)] = {(462 - 462)};
    int o6hyb0oeZqF;
    int loApLSX;
    int RH23de5J;
    o6hyb0oeZqF = (156 - 156);
    loApLSX = (117 - 117);
    gets (GZ2flWxc95);
    int PSKfwEsMt = strlen (GZ2flWxc95);
    int min;
    int max;
    min = strlen (JUpMob[(812 - 812)]);
    max = strlen (JUpMob[(737 - 737)]);
    int minw = (796 - 796), maxw = 0;
    for (RH23de5J = (436 - 436); RH23de5J < PSKfwEsMt; RH23de5J++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (GZ2flWxc95[RH23de5J] != ' ') {
            JUpMob[o6hyb0oeZqF][loApLSX] = GZ2flWxc95[RH23de5J];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            loApLSX = loApLSX + 1;
        }
        else {
            if (GZ2flWxc95[RH23de5J] == ' ') {
                loApLSX = (962 - 962);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                o6hyb0oeZqF++;
            };
        };
    }
    for (RH23de5J = (792 - 791); RH23de5J <= o6hyb0oeZqF; RH23de5J++) {
        if (min > strlen (JUpMob[RH23de5J])) {
            min = strlen (JUpMob[RH23de5J]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            minw = RH23de5J;
        }
        if (max < strlen (JUpMob[RH23de5J])) {
            max = strlen (JUpMob[RH23de5J]);
            maxw = RH23de5J;
        };
    }
    printf ("%s\n", JUpMob[maxw]);
    printf ("%s\n", JUpMob[minw]);
    return 0;
}

