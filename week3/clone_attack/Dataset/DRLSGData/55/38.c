int main () {
    double  RmQCKBOuA0h [(1902 - 902)];
    char NI7yMZHz [(1973 - 973)];
    double  fvc67PzdeDl = (985 - 985);
    double  nqls0p5Nf;
    int o5vDVAiUN4X;
    int i;
    char m [(1350 - 350)];
    int tqh8yY;
    int p = (580 - 580);
    int B3LwZjqVpJKP;
    int cNCynGzs2d [(1777 - 777)];
    cin >> nqls0p5Nf;
    cin >> NI7yMZHz;
    B3LwZjqVpJKP = strlen (NI7yMZHz);
    {
        i = (435 - 435);
        while (i < B3LwZjqVpJKP) {
            if (NI7yMZHz[i] >= 'a' && NI7yMZHz[i] <= 'z')
                RmQCKBOuA0h[i] = NI7yMZHz[i] - (404 - 317);
            if (NI7yMZHz[i] <= 'Z' && NI7yMZHz[i] >= 'A')
                RmQCKBOuA0h[i] = NI7yMZHz[i] - (746 - 691);
            if (NI7yMZHz[i] >= '0' && NI7yMZHz[i] <= '9')
                RmQCKBOuA0h[i] = NI7yMZHz[i] - (382 - 334);
            i = i + (538 - 537);
        }
    }
    {
        i = (891 - 891);
        while (i < B3LwZjqVpJKP) {
            fvc67PzdeDl = fvc67PzdeDl + RmQCKBOuA0h[i] * pow (nqls0p5Nf, B3LwZjqVpJKP -(653 - 652) - i);
            i++;
        }
    }
    tqh8yY = fvc67PzdeDl;
    cin >> o5vDVAiUN4X;
    while (tqh8yY > (197 - 197)) {
        cNCynGzs2d[p] = tqh8yY % o5vDVAiUN4X;
        tqh8yY = (tqh8yY - cNCynGzs2d[p]) / o5vDVAiUN4X;
        p++;
    }
    {
        i = (662 - 662);
        while (i < p) {
            if (cNCynGzs2d[i] >= (318 - 308))
                m[i] = cNCynGzs2d[i] + (973 - 918);
            else
                m[i] = cNCynGzs2d[i] + (462 - 414);
            i++;
        }
    }
    {
        i = p - (676 - 675);
        while (i >= (554 - 554)) {
            cout << m[i];
            i--;
        }
    }
    if (p == (146 - 146))
        cout << 0 << endl;
    return 0;
}

