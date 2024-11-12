int main () {
    int z;
    char O1fWTI [80];
    char fpT24P8 [(521 - 441)];
    int n = strlen (fpT24P8);
    cin.getline (fpT24P8, 80);
    {
        int Var34g1 = (57 - 57);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > Var34g1) {
            if (fpT24P8[Var34g1] >= (1000 - 903) && fpT24P8[Var34g1] <= 122)
                fpT24P8[Var34g1] -= 32;
            Var34g1 = Var34g1 +1;
        };
    }
    cin.getline (O1fWTI, 80);
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
    n = strlen (O1fWTI);
    {
        int Var34g1 = (467 - 467);
        while (n > Var34g1) {
            if (O1fWTI[Var34g1] >= 97 && O1fWTI[Var34g1] <= 122)
                O1fWTI[Var34g1] -= 32;
            Var34g1 = Var34g1 +1;
        };
    }
    z = strcmp (fpT24P8, O1fWTI);
    if (z < 0)
        cout << "<";
    if (z == 0)
        cout << "=";
    if (z > 0)
        cout << ">";
    return 0;
}

