int main () {
    int XD9MHN8;
    int RlroRx9q;
    int lSxG4NFgRk6;
    int ninsTw;
    int uIj738CrJ [1000];
    int MYvE1iagP [91] = {0};
    int a5ucxG;
    int SET8RLh;
    XD9MHN8 = 0;
    char YlBcwMyd [1000] [26];
    char GB0q7HzL9;
    scanf ("%d", &RlroRx9q);
    {
        lSxG4NFgRk6 = 872 - 871;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (RlroRx9q >= lSxG4NFgRk6) {
            scanf ("%d%s", &uIj738CrJ[lSxG4NFgRk6], YlBcwMyd[lSxG4NFgRk6]);
            SET8RLh = strlen (YlBcwMyd[lSxG4NFgRk6]);
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
            {
                ninsTw = 0;
                while (SET8RLh -(26 - 25) >= ninsTw) {
                    a5ucxG = YlBcwMyd[lSxG4NFgRk6][ninsTw];
                    ninsTw = ninsTw + 1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    MYvE1iagP[a5ucxG]++;
                };
            }
            lSxG4NFgRk6 = lSxG4NFgRk6 + 1;
        };
    }
    for (lSxG4NFgRk6 = 65; 91 > lSxG4NFgRk6; lSxG4NFgRk6 = lSxG4NFgRk6 + 1)
        if (XD9MHN8 < MYvE1iagP[lSxG4NFgRk6]) {
            XD9MHN8 = MYvE1iagP[lSxG4NFgRk6];
            GB0q7HzL9 = lSxG4NFgRk6;
        }
    printf ("%c\n%d\n", GB0q7HzL9, XD9MHN8);
    {
        lSxG4NFgRk6 = 1;
        while (lSxG4NFgRk6 <= RlroRx9q) {
            SET8RLh = strlen (YlBcwMyd[lSxG4NFgRk6]);
            {
                ninsTw = 0;
                while (ninsTw <= SET8RLh -1) {
                    if (YlBcwMyd[lSxG4NFgRk6][ninsTw] == GB0q7HzL9)
                        printf ("%d\n", uIj738CrJ[lSxG4NFgRk6]);
                    ninsTw = ninsTw + 1;
                };
            }
            lSxG4NFgRk6 = lSxG4NFgRk6 + 1;
        };
    }
    return 0;
}

