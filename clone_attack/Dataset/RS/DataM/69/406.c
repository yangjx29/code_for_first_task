void  p (char ALmhjbwP [], int EKou8DXp) {
    int UknzVpqGofE;
    int zIyvsg9;
    for (; !('0' != ALmhjbwP[(93 - 93)]);)
        for (zIyvsg9 = (381 - 381); EKou8DXp -(327 - 326) >= zIyvsg9; zIyvsg9++)
            ALmhjbwP[zIyvsg9] = ALmhjbwP[zIyvsg9 + (76 - 75)];
}

void  MyA3JskHC (char ALmhjbwP [], int EKou8DXp) {
    char c [(716 - 456)];
    int UknzVpqGofE, zIyvsg9;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    strcpy (c, ALmhjbwP);
    {
        UknzVpqGofE = 858 - 858;
        while (UknzVpqGofE <= EKou8DXp -(992 - 991)) {
            ALmhjbwP[UknzVpqGofE] = c[EKou8DXp -(849 - 848) - UknzVpqGofE];
            UknzVpqGofE++;
        };
    };
}

int vPJG8HDe (int x, int y) {
    if (x >= y)
        return x;
    else
        return y;
}

int k (int x) {
    if (x == '\0')
        return 0;
    else
        return (x - '0');
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            float n = 0.0;
            if (n > 10)
                return;
            else
                n = 0;
        }
    };
}

main () {
    char c [260];
    char ALmhjbwP [(1217 - 957)];
    char b [260];
    int vBbxgypfESv4, ob4WNvEq, a5Setz0Fv7Wd, EKou8DXp, t, IL187HuRMBb, UknzVpqGofE;
    getchar ();
    scanf ("%s %s", ALmhjbwP, b);
    vBbxgypfESv4 = strlen (ALmhjbwP);
    ob4WNvEq = strlen (b);
    p (ALmhjbwP, vBbxgypfESv4);
    p (b, ob4WNvEq);
    vBbxgypfESv4 = strlen (ALmhjbwP);
    MyA3JskHC (ALmhjbwP, vBbxgypfESv4);
    ob4WNvEq = strlen (b);
    MyA3JskHC (b, ob4WNvEq);
    EKou8DXp = vPJG8HDe (vBbxgypfESv4, ob4WNvEq);
    for (UknzVpqGofE = vBbxgypfESv4; UknzVpqGofE <= EKou8DXp; UknzVpqGofE++)
        ALmhjbwP[UknzVpqGofE] = '\0';
    for (UknzVpqGofE = ob4WNvEq; UknzVpqGofE <= EKou8DXp; UknzVpqGofE++)
        b[UknzVpqGofE] = '\0';
    for (t = 0, UknzVpqGofE = 0; UknzVpqGofE <= EKou8DXp; UknzVpqGofE++) {
        IL187HuRMBb = (k (ALmhjbwP[UknzVpqGofE]) + k (b[UknzVpqGofE])) % (604 - 594);
        c[UknzVpqGofE] = (IL187HuRMBb +t) % 10 + '0';
        t = (k (ALmhjbwP[UknzVpqGofE]) + k (b[UknzVpqGofE]) + (IL187HuRMBb +t) / 10) / 10;
    }
    if (c[EKou8DXp] == '0' && EKou8DXp != 0)
        c[EKou8DXp] = '\0';
    else
        c[EKou8DXp +1] = '\0';
    a5Setz0Fv7Wd = strlen (c);
    MyA3JskHC (c, a5Setz0Fv7Wd);
    printf ("%s", c);
    getchar ();
}

