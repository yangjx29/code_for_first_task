int TNGYli (char ei8TyQ9S2qkO [20]) {
    int M6dFpbvz7Ae;
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
    if ((ei8TyQ9S2qkO[0] >= 'a' && ei8TyQ9S2qkO[0] <= 'z') || (ei8TyQ9S2qkO[0] >= 'A' && 'Z' >= ei8TyQ9S2qkO[0]) || ei8TyQ9S2qkO[0] == '_') {
        for (M6dFpbvz7Ae = 0; !('\0' == ei8TyQ9S2qkO[M6dFpbvz7Ae]); M6dFpbvz7Ae++) {
            if (!(('a' <= ei8TyQ9S2qkO[M6dFpbvz7Ae] && ei8TyQ9S2qkO[M6dFpbvz7Ae] <= 'z') || (ei8TyQ9S2qkO[M6dFpbvz7Ae] >= 'A' && ei8TyQ9S2qkO[M6dFpbvz7Ae] <= 'Z') || ei8TyQ9S2qkO[M6dFpbvz7Ae] == '_' || (ei8TyQ9S2qkO[M6dFpbvz7Ae] >= '0' && ei8TyQ9S2qkO[M6dFpbvz7Ae] <= '9')))
                return 0;
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
        return 1;
    }
    else
        return 0;
}

int main (int cSTR7y, char *y0oZpzc2 []) {
    char ei8TyQ9S2qkO [20];
    int n;
    int M6dFpbvz7Ae;
    scanf ("%d", &n);
    for (M6dFpbvz7Ae = 0; M6dFpbvz7Ae < n; M6dFpbvz7Ae++) {
        scanf ("%s", ei8TyQ9S2qkO);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (TNGYli (ei8TyQ9S2qkO) == 1)
            printf ("yes\n");
        else
            ;
    }
    return 0;
}

