int main () {
    int FjrIDv, bc, uODLUzkG95Z, k, c, j1, j2, jw = (265 - 265), p = (144 - 144);
    char a [251], b [251], j [260] = {'\0'}, l90X3jkrK [251] = {'\0'}, B [251] = {'\0'};
    gets (a);
    gets (b);
    FjrIDv = strlen (a);
    bc = strlen (b);
    if (bc < FjrIDv) {
        strcpy (l90X3jkrK, a);
        {
            uODLUzkG95Z = 0;
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
            while (FjrIDv -bc > uODLUzkG95Z) {
                B[uODLUzkG95Z] = '0';
                uODLUzkG95Z = uODLUzkG95Z + 1;
            };
        }
        B[uODLUzkG95Z] = '\0';
        c = FjrIDv;
        strcat (B, b);
    }
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
    if (bc > FjrIDv) {
        strcpy (B, b);
        c = bc;
        {
            uODLUzkG95Z = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            while (bc - FjrIDv > uODLUzkG95Z) {
                l90X3jkrK[uODLUzkG95Z] = '0';
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                uODLUzkG95Z = uODLUzkG95Z + 1;
            };
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        l90X3jkrK[uODLUzkG95Z] = '\0';
        strcat (l90X3jkrK, a);
    }
    if (!(bc != FjrIDv)) {
        strcpy (l90X3jkrK, a);
        strcpy (B, b);
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
        c = FjrIDv;
    }
    {
        k = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        uODLUzkG95Z = c - 1;
        while (0 <= uODLUzkG95Z) {
            j1 = l90X3jkrK[uODLUzkG95Z] - '0';
            j2 = B[uODLUzkG95Z] - '0';
            if (9 >= j1 + j2 + jw) {
                j[k] = j1 + j2 + jw + '0';
                jw = 0;
            }
            else {
                j[k] = j1 + j2 + jw - 10 + '0';
                jw = 1;
            }
            if (!(0 != uODLUzkG95Z) && jw == 1)
                j[k + 1] = '1';
            k++;
            uODLUzkG95Z = uODLUzkG95Z - 1;
        };
    }
    if (j[0] == '0' && j[1] == '\0')
        ;
    c = strlen (j);
    {
        uODLUzkG95Z = c - 1;
        while (uODLUzkG95Z >= 0) {
            if (j[uODLUzkG95Z] != '0' || p == 1) {
                p = 1;
                printf ("%c", j[uODLUzkG95Z]);
            }
            uODLUzkG95Z--;
        };
    }
    return 0;
}

