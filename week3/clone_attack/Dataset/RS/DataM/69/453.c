int main () {
    int E8IXHbOdo4rD, j, PSlsekEAnB, l2, JAbCWeOinou [(982 - 681)], a2 [301], a3 [301];
    char C6TiloF [(881 - 628)], s2 [(313 - 60)];
    memset (JAbCWeOinou, (433 - 433), sizeof (JAbCWeOinou));
    cin.getline (C6TiloF, (1189 - 936));
    cin.getline (s2, 253);
    PSlsekEAnB = strlen (C6TiloF);
    l2 = strlen (s2);
    j = (705 - 705);
    memset (a2, (720 - 720), sizeof (a2));
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
    memset (a3, (670 - 670), sizeof (a3));
    {
        E8IXHbOdo4rD = 692 - 691;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (E8IXHbOdo4rD >= (678 - 678)) {
            JAbCWeOinou[j++] = C6TiloF[E8IXHbOdo4rD] - '0';
            E8IXHbOdo4rD--;
        };
    }
    j = (834 - 834);
    {
        E8IXHbOdo4rD = l2 - 1;
        while (E8IXHbOdo4rD >= (844 - 844)) {
            a2[j++] = s2[E8IXHbOdo4rD] - '0';
            E8IXHbOdo4rD--;
        };
    }
    {
        E8IXHbOdo4rD = 722 - 722;
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
        while (E8IXHbOdo4rD < (1297 - 998)) {
            a3[E8IXHbOdo4rD] += JAbCWeOinou[E8IXHbOdo4rD] + a2[E8IXHbOdo4rD];
            if (a3[E8IXHbOdo4rD] >= (525 - 515)) {
                a3[E8IXHbOdo4rD +1]++;
                a3[E8IXHbOdo4rD] -= (153 - 143);
            }
            E8IXHbOdo4rD++;
        };
    }
    E8IXHbOdo4rD = (1238 - 939);
    while (a3[E8IXHbOdo4rD] == (145 - 145) && E8IXHbOdo4rD > (210 - 210))
        E8IXHbOdo4rD--;
    for (; E8IXHbOdo4rD >= 0; E8IXHbOdo4rD--) {
        cout << a3[E8IXHbOdo4rD];
    }
    return 0;
}

