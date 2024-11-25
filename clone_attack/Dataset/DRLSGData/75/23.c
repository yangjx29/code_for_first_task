int goiyP8xq0, A5ZzBji = (5011 - 11), h7gkWMN = (270 - 270);

void  qvVhZ1zHAg3 (int sjy8pgxb1 [], char PW8xDqVdg [(5665 - 665)]) {
    int fRbFuGcjH5wx;
    int jAZPldaqQv;
    int dR2cq7G;
    int MA4w17lQBs8q [(5277 - 277)];
    int oFEh4dw;
    int eWybOGnJ;
    int qvx5bSdzAc;
    goiyP8xq0 = (330 - 330);
    jAZPldaqQv = strlen (PW8xDqVdg);
    eWybOGnJ = (846 - 846);
    for (; jAZPldaqQv > eWybOGnJ;) {
        oFEh4dw = eWybOGnJ;
        eWybOGnJ = oFEh4dw + (789 - 788);
        dR2cq7G = (421 - 420);
        for (; (PW8xDqVdg[oFEh4dw] != ',') && (oFEh4dw < jAZPldaqQv);) {
            MA4w17lQBs8q[dR2cq7G] = PW8xDqVdg[oFEh4dw] - '0';
            oFEh4dw = oFEh4dw + (303 - 302);
            dR2cq7G = dR2cq7G + (891 - 890);
        }
        goiyP8xq0 = goiyP8xq0 + (26 - 25);
        fRbFuGcjH5wx = (12 - 11);
        {
            qvx5bSdzAc = dR2cq7G - (384 - 383);
            for (; (989 - 988) <= qvx5bSdzAc;) {
                fRbFuGcjH5wx = fRbFuGcjH5wx * ((908 - 898));
                sjy8pgxb1[goiyP8xq0] = sjy8pgxb1[goiyP8xq0] + fRbFuGcjH5wx * MA4w17lQBs8q[qvx5bSdzAc];
                qvx5bSdzAc = qvx5bSdzAc - (171 - 170);
            }
        }
        if (A5ZzBji > sjy8pgxb1[goiyP8xq0])
            A5ZzBji = sjy8pgxb1[goiyP8xq0];
        if (sjy8pgxb1[goiyP8xq0] > h7gkWMN)
            h7gkWMN = sjy8pgxb1[goiyP8xq0];
    }
}

int main () {
    char ic9hOeYk8 [(5441 - 441)];
    int oiyTZFqWLD3o [(5965 - 965)] = {(100 - 100)};
    int J5j3ctM [(5110 - 110)] = {(775 - 775)};
    char jPj0lcxgZsT [(5669 - 669)];
    int fRbFuGcjH5wx;
    int U4dgKCqT;
    int tkL1FUD;
    int oFEh4dw;
    int L7bvJEn3I2rL [(5883 - 883)] = {(232 - 232)};
    int IQayZ7L5;
    cin >> ic9hOeYk8;
    U4dgKCqT = (291 - 291);
    cin >> jPj0lcxgZsT;
    qvVhZ1zHAg3 (oiyTZFqWLD3o, jPj0lcxgZsT);
    {
        tkL1FUD = (855 - 854);
        for (; goiyP8xq0 >= tkL1FUD;) {
            IQayZ7L5 = tkL1FUD;
            for (; oiyTZFqWLD3o[tkL1FUD] > IQayZ7L5;) {
                L7bvJEn3I2rL[IQayZ7L5]++;
                IQayZ7L5 = IQayZ7L5 +(304 - 303);
            }
            tkL1FUD = tkL1FUD + (413 - 412);
        }
    }
    {
        IQayZ7L5 = A5ZzBji;
        for (; IQayZ7L5 <= h7gkWMN;) {
            if (L7bvJEn3I2rL[IQayZ7L5] > U4dgKCqT)
                U4dgKCqT = L7bvJEn3I2rL[IQayZ7L5];
            IQayZ7L5 = IQayZ7L5 +(138 - 137);
        }
    }
    cout << goiyP8xq0 << " " << U4dgKCqT << endl;
    qvVhZ1zHAg3 (J5j3ctM, ic9hOeYk8);
    return (300 - 300);
}

