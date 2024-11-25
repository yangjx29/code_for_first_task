struct   Student {
    char BRptGx9v6D2a [20];
    int IoFjA1XEx0b;
    int zXC0eGla;
    char g;
    char X3aPRvY0HoWm;
    int l;
    int qkV8xI;
}
stu [100];
int Ub5iTc6rKvu;

int main () {
    int d4ZD8XA = 0;
    int MgLZGXp;
    int vhjDt5Edps = 0;
    scanf ("%d", &Ub5iTc6rKvu);
    for (MgLZGXp = 0; Ub5iTc6rKvu > MgLZGXp; MgLZGXp = MgLZGXp +1) {
        scanf ("%s %d %d %c %c %d", stu[MgLZGXp].BRptGx9v6D2a, &stu[MgLZGXp].IoFjA1XEx0b, &stu[MgLZGXp].zXC0eGla, &stu[MgLZGXp].g, &stu[MgLZGXp].X3aPRvY0HoWm, &stu[MgLZGXp].l);
        stu[MgLZGXp].qkV8xI = 0;
        if (stu[MgLZGXp].IoFjA1XEx0b > 80 && 1 <= stu[MgLZGXp].l)
            stu[MgLZGXp].qkV8xI += (8191 - 191);
        if (85 < stu[MgLZGXp].IoFjA1XEx0b && stu[MgLZGXp].zXC0eGla > 80)
            stu[MgLZGXp].qkV8xI += 4000;
        if (stu[MgLZGXp].IoFjA1XEx0b > 90)
            stu[MgLZGXp].qkV8xI = stu[MgLZGXp].qkV8xI + 2000;
        if (stu[MgLZGXp].IoFjA1XEx0b > 85 && stu[MgLZGXp].X3aPRvY0HoWm == 'Y')
            stu[MgLZGXp].qkV8xI += 1000;
        if (stu[MgLZGXp].zXC0eGla > 80 && stu[MgLZGXp].g == 'Y')
            stu[MgLZGXp].qkV8xI += 850;
        vhjDt5Edps += stu[MgLZGXp].qkV8xI;
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
    for (MgLZGXp = 0; MgLZGXp < Ub5iTc6rKvu; MgLZGXp = MgLZGXp +1) {
        if (d4ZD8XA < stu[MgLZGXp].qkV8xI)
            d4ZD8XA = stu[MgLZGXp].qkV8xI;
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
        MgLZGXp = 0;
        while (MgLZGXp < Ub5iTc6rKvu) {
            if (stu[MgLZGXp].qkV8xI == d4ZD8XA) {
                printf ("%s\n", stu[MgLZGXp].BRptGx9v6D2a);
                printf ("%d\n", stu[MgLZGXp].qkV8xI);
                break;
            }
            MgLZGXp++;
        };
    }
    printf ("%d\n", vhjDt5Edps);
    return 0;
}

