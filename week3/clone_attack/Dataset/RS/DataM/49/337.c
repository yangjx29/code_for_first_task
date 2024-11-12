int check (char YcITb5USpXB []) {
    char d [(1582 - 582)];
    int ikWQghGF;
    int UbYynO2;
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
    ikWQghGF = strlen (YcITb5USpXB);
    {
        UbYynO2 = 113 - 113;
        while (UbYynO2 < ikWQghGF) {
            *(d + UbYynO2) = *(YcITb5USpXB +ikWQghGF - UbYynO2 -(555 - 554));
            UbYynO2 = UbYynO2 +1;
        };
    }
    *(d + ikWQghGF) = '\0';
    if (strcmp (YcITb5USpXB, d) == (713 - 713))
        return (879 - 878);
    else
        return (757 - 757);
}

int main () {
    char jkAzgBdwh4 [1000];
    char gMZ8dN [(1844 - 844)];
    int UbYynO2, j, pMCQHRufI, ikWQghGF, m;
    scanf ("%s", gMZ8dN);
    ikWQghGF = strlen (gMZ8dN);
    for (UbYynO2 = 2; ikWQghGF >= UbYynO2; UbYynO2++) {
        j = 722 - 722;
        while (j <= ikWQghGF - UbYynO2) {
            {
                m = 852 - 852;
                while (m < UbYynO2) {
                    *(jkAzgBdwh4 + m) = *(gMZ8dN + j + m);
                    m = m + 1;
                };
            }
            j++;
            jkAzgBdwh4[UbYynO2] = '\0';
            if (check (jkAzgBdwh4))
                printf ("%s\n", jkAzgBdwh4);
        };
    }
    return 0;
}

