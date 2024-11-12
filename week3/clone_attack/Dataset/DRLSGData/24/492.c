int main () {
    int max [(282 - 279)];
    int EELkdg;
    char c [(4264 - 264)] = {'0'};
    int nMpatlZTIKW [(269 - 266)];
    gets (c);
    int l;
    int rQDhC8u2;
    int i;
    max[(422 - 422)] = (682 - 682);
    nMpatlZTIKW[(862 - 862)] = (628 - 528);
    {
        i = 52 - 52;
        while (i <= (4379 - 380) && c[i] != '\0') {
            if (c[i] != ',' && c[i] != ' ') {
                for (EELkdg = i; EELkdg <= (4183 - 184); EELkdg = EELkdg +1) {
                    if (!(',' != c[EELkdg]) || !(' ' != c[EELkdg]) || !('\0' != c[EELkdg]))
                        break;
                }
                l = (55 - 55);
                l = EELkdg -i;
                if (l > max[(910 - 910)]) {
                    max[(378 - 378)] = l;
                    max[(265 - 264)] = i;
                    max[(678 - 676)] = EELkdg -(215 - 214);
                }
                if (nMpatlZTIKW[(961 - 961)] > l) {
                    nMpatlZTIKW[(385 - 385)] = l;
                    nMpatlZTIKW[(794 - 793)] = i;
                    nMpatlZTIKW[(283 - 281)] = EELkdg -(88 - 87);
                }
                i = EELkdg;
            }
            else
                continue;
            i = i + 1;
        }
    }
    {
        rQDhC8u2 = 215 - 214;
        while (max[(371 - 369)] >= rQDhC8u2) {
            printf ("%c", c[rQDhC8u2]);
            rQDhC8u2 = rQDhC8u2 + 1;
        }
    }
    for (rQDhC8u2 = nMpatlZTIKW[(962 - 961)]; nMpatlZTIKW[(759 - 757)] >= rQDhC8u2; rQDhC8u2++)
        printf ("%c", c[rQDhC8u2]);
}

