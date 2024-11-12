int main () {
    int rMSNj9e5ya [26] = {0};
    int ZSAZTefo67 [26] = {0};
    int tLZ6lwx;
    int EoRei0DFOr;
    int HhyfQt1xab;
    int tEKtyQ9Ya;
    int L6isUpZoFQtW;
    int RhxP4s;
    int a65CIKtOBqT;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    tLZ6lwx = 0;
    char TJ4z2sVOB1 [100];
    char UFp38Xj [100];
    cin >> TJ4z2sVOB1 >> UFp38Xj;
    tEKtyQ9Ya = strlen (TJ4z2sVOB1);
    L6isUpZoFQtW = strlen (UFp38Xj);
    {
        EoRei0DFOr = 0;
        while (EoRei0DFOr < 26) {
            for (RhxP4s = 0; RhxP4s < tEKtyQ9Ya; RhxP4s++)
                if (TJ4z2sVOB1[RhxP4s] == 'a' + EoRei0DFOr)
                    rMSNj9e5ya[EoRei0DFOr]++;
            for (a65CIKtOBqT = 0; a65CIKtOBqT < L6isUpZoFQtW; a65CIKtOBqT++)
                if (UFp38Xj[a65CIKtOBqT] == 'a' + EoRei0DFOr)
                    ZSAZTefo67[EoRei0DFOr]++;
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
            EoRei0DFOr++;
        };
    }
    for (HhyfQt1xab = 0; HhyfQt1xab < 26; HhyfQt1xab++) {
        if (rMSNj9e5ya[HhyfQt1xab] == ZSAZTefo67[HhyfQt1xab])
            tLZ6lwx++;
    }
    if (tLZ6lwx == 26)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}

