int main () {
    int roWDTmf6 [500];
    int n;
    int UwWme7OFI [500];
    scanf ("%d", &n);
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
    UwWme7OFI[0] = 0;
    {
        int m2QzSwG1B = 0;
        while (n > m2QzSwG1B) {
            scanf ("%d", &roWDTmf6[m2QzSwG1B]);
            m2QzSwG1B = m2QzSwG1B + 1;
        };
    }
    for (int Ku4bzv = 1;
    n >= Ku4bzv; Ku4bzv = Ku4bzv +1) {
        UwWme7OFI[Ku4bzv] = 10000;
        {
            int TYZsA6hE3g = 0;
            while (TYZsA6hE3g < n) {
                if (!(1 != roWDTmf6[TYZsA6hE3g] % 2) && UwWme7OFI[Ku4bzv -1] < roWDTmf6[TYZsA6hE3g] && roWDTmf6[TYZsA6hE3g] < UwWme7OFI[Ku4bzv])
                    UwWme7OFI[Ku4bzv] = roWDTmf6[TYZsA6hE3g];
                TYZsA6hE3g++;
            };
        }
        if (Ku4bzv == 1)
            printf ("%d", UwWme7OFI[Ku4bzv]);
        else if (UwWme7OFI[Ku4bzv] != 10000)
            printf (",%d", UwWme7OFI[Ku4bzv]);
    }
    return 0;
}

