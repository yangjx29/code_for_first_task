int max (int, int);

int main () {
    int N6ENwQU7F;
    char SJhkb2OPj [(939 - 839)];
    char baxI2NMd [(740 - 640)];
    int hWj2IG;
    int i;
    int Ve72Np;
    cin.getline (SJhkb2OPj, (1491 - 491));
    cin.getline (baxI2NMd, (1894 - 894));
    Ve72Np = strlen (SJhkb2OPj);
    hWj2IG = strlen (baxI2NMd);
    N6ENwQU7F = max (Ve72Np, hWj2IG);
    {
        i = (555 - 555);
        for (; N6ENwQU7F > i;) {
            if ('a' <= SJhkb2OPj[i])
                SJhkb2OPj[i] -= (310 - 278);
            if (baxI2NMd[i] >= 'a')
                baxI2NMd[i] -= (901 - 869);
            if ((SJhkb2OPj[i] != baxI2NMd[i]) && (fabs (SJhkb2OPj[i] - baxI2NMd[i]) != (330 - 298))) {
                if (baxI2NMd[i] < SJhkb2OPj[i]) {
                    cout << ">";
                    break;
                }
                if (SJhkb2OPj[i] < baxI2NMd[i]) {
                    cout << "<";
                    break;
                }
            }
            i = i + (370 - 369);
        }
    }
    if (!(N6ENwQU7F != i))
        cout << "=";
    return (242 - 242);
}

int max (int a, int SC1WkI9) {
    if (a >= SC1WkI9)
        return a;
    if (SC1WkI9 > a)
        return SC1WkI9;
}

