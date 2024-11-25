char uvVfI3 [(430 - 320)] [110];

int ganran (int un81IQN7Uhl, int bgyCcTS2u, int SeE7U39fv) {
    if (!(bgyCcTS2u != un81IQN7Uhl)) {
        int Y1FKerdSyR = (989 - 989);
        {
            int cYCuXv0tF;
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
            cYCuXv0tF = (546 - 545);
            while (SeE7U39fv >= cYCuXv0tF) {
                {
                    int W6cTr3zfA = (54 - 53);
                    while (SeE7U39fv >= W6cTr3zfA) {
                        if (!('@' != uvVfI3[cYCuXv0tF][W6cTr3zfA]) || !('a' != uvVfI3[cYCuXv0tF][W6cTr3zfA]))
                            Y1FKerdSyR = Y1FKerdSyR +1;
                        W6cTr3zfA++;
                    };
                }
                cYCuXv0tF = cYCuXv0tF + 1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return Y1FKerdSyR;
    }
    else {
        {
            int cYCuXv0tF = (992 - 991);
            while (SeE7U39fv >= cYCuXv0tF) {
                for (int W6cTr3zfA = (254 - 253);
                W6cTr3zfA <= SeE7U39fv; W6cTr3zfA = W6cTr3zfA +1) {
                    if (!('@' != uvVfI3[cYCuXv0tF][W6cTr3zfA])) {
                        if (uvVfI3[cYCuXv0tF + (816 - 815)][W6cTr3zfA] == '.')
                            uvVfI3[cYCuXv0tF + (365 - 364)][W6cTr3zfA] = 'a';
                        if (uvVfI3[cYCuXv0tF - (569 - 568)][W6cTr3zfA] == '.')
                            uvVfI3[cYCuXv0tF - (926 - 925)][W6cTr3zfA] = 'a';
                        if (uvVfI3[cYCuXv0tF][W6cTr3zfA +(640 - 639)] == '.')
                            uvVfI3[cYCuXv0tF][W6cTr3zfA +(805 - 804)] = 'a';
                        if (uvVfI3[cYCuXv0tF][W6cTr3zfA -(34 - 33)] == '.')
                            uvVfI3[cYCuXv0tF][W6cTr3zfA -(894 - 893)] = 'a';
                    };
                }
                cYCuXv0tF = cYCuXv0tF + 1;
            };
        }
        for (int cYCuXv0tF = (675 - 674);
        cYCuXv0tF <= SeE7U39fv; cYCuXv0tF = cYCuXv0tF + 1) {
            int W6cTr3zfA = 1;
            while (W6cTr3zfA <= SeE7U39fv) {
                if (uvVfI3[cYCuXv0tF][W6cTr3zfA] == 'a')
                    uvVfI3[cYCuXv0tF][W6cTr3zfA] = '@';
                W6cTr3zfA++;
            };
        }
        return ganran (un81IQN7Uhl + 1, bgyCcTS2u, SeE7U39fv);
    };
}

int main () {
    int SeE7U39fv, bgyCcTS2u;
    cin >> SeE7U39fv;
    {
        int cYCuXv0tF = 1;
        while (cYCuXv0tF <= SeE7U39fv) {
            for (int W6cTr3zfA = 1;
            W6cTr3zfA <= SeE7U39fv; W6cTr3zfA++)
                cin >> uvVfI3[cYCuXv0tF][W6cTr3zfA];
            cYCuXv0tF++;
        };
    }
    cin >> bgyCcTS2u;
    cout << ganran (1, bgyCcTS2u, SeE7U39fv) << endl;
    return 0;
}

