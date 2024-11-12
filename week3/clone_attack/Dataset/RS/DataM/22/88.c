int main () {
    int I3obVascv0;
    int YwcajnfSCsN;
    int E9hETi4xaDeB;
    char i;
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
    scanf ("%d", &I3obVascv0);
    YwcajnfSCsN = -1;
    for (; (i = getchar ()) == ',';) {
        scanf ("%d", &E9hETi4xaDeB);
        if (E9hETi4xaDeB > I3obVascv0) {
            YwcajnfSCsN = I3obVascv0;
            I3obVascv0 = E9hETi4xaDeB;
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
        if (E9hETi4xaDeB > YwcajnfSCsN &&E9hETi4xaDeB < I3obVascv0)
            YwcajnfSCsN = E9hETi4xaDeB;
    }
    if (I3obVascv0 == YwcajnfSCsN || YwcajnfSCsN == -1)
        ;
    else
        printf ("%d", YwcajnfSCsN);
    return 0;
}

