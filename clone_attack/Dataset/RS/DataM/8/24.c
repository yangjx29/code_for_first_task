int OaGYSmy9 [300], bv5KFadYScn [300], x7tA0Or2Hol [600];

void  FoYQT89q () {
    int vB0MGlqZvyP, M1QfsgA, yTk8Fv9;
    cin >> vB0MGlqZvyP >> M1QfsgA;
    {
        yTk8Fv9 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (vB0MGlqZvyP > yTk8Fv9) {
            cin >> OaGYSmy9[yTk8Fv9];
            yTk8Fv9 = yTk8Fv9 + 1;
        };
    }
    {
        yTk8Fv9 = 0;
        while (M1QfsgA > yTk8Fv9) {
            cin >> bv5KFadYScn[yTk8Fv9];
            yTk8Fv9 = yTk8Fv9 + 1;
        };
    }
    sort (OaGYSmy9, OaGYSmy9 +vB0MGlqZvyP);
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
    sort (bv5KFadYScn, bv5KFadYScn + M1QfsgA);
    {
        yTk8Fv9 = 0;
        while (yTk8Fv9 < vB0MGlqZvyP) {
            x7tA0Or2Hol[yTk8Fv9] = OaGYSmy9[yTk8Fv9];
            yTk8Fv9++;
        };
    }
    {
        yTk8Fv9 = vB0MGlqZvyP;
        while (yTk8Fv9 < vB0MGlqZvyP + M1QfsgA) {
            x7tA0Or2Hol[yTk8Fv9] = bv5KFadYScn[yTk8Fv9 - vB0MGlqZvyP];
            yTk8Fv9++;
        };
    }
    for (yTk8Fv9 = 0; vB0MGlqZvyP + M1QfsgA -1 > yTk8Fv9; yTk8Fv9 = yTk8Fv9 + 1)
        cout << x7tA0Or2Hol[yTk8Fv9] << ' ';
    cout << x7tA0Or2Hol[yTk8Fv9];
}

int main () {
    FoYQT89q ();
    return 0;
}

