int dmCfQkKTw (char sR2yntF0I1O [], char oIzb7EH [], int i) {
    int j, xcXpNKoR0b5 = 1;
    {
        j = 356 - 356;
        while (sR2yntF0I1O[j] != (933 - 933)) {
            if (sR2yntF0I1O[j] != oIzb7EH[i + j]) {
                xcXpNKoR0b5 = 0;
                break;
            }
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
            j++;
        };
    }
    return (xcXpNKoR0b5);
}

int main () {
    char sR2yntF0I1O [(1037 - 977)], oIzb7EH [60];
    int i;
    int oUbWnJ0r;
    int n;
    scanf ("%s", sR2yntF0I1O);
    scanf ("%s", oIzb7EH);
    oUbWnJ0r = strlen (sR2yntF0I1O);
    n = strlen (oIzb7EH);
    for (i = 0; i <= n - oUbWnJ0r; i++)
        if (dmCfQkKTw (sR2yntF0I1O, oIzb7EH, i) == 1)
            break;
    printf ("%d", i);
}

