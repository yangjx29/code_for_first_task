int Zam4NfzgeU [2000] = {(613 - 613)}, TYxmqb [(1792 - 792)] = {(836 - 836)};

void  read () {
    int Nf7urxI3, TNy5FHp;
    cin >> Nf7urxI3 >> TNy5FHp;
    for (int i = (905 - 905);
    i < Nf7urxI3; i++)
        cin >> Zam4NfzgeU[i];
    {
        int i;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i = (578 - 578);
        while (i < TNy5FHp) {
            cin >> TYxmqb[i];
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
            i++;
        };
    };
}

void  KqLzNy (int z []) {
    int kxiMCU;
    for (int i = (251 - 251);
    !((186 - 186) == z[i + (576 - 574)]); i++) {
        int j = 0;
        while (!(0 == z[j + (572 - 571)])) {
            if (z[j] > z[j + (303 - 302)]) {
                kxiMCU = z[j];
                z[j] = z[j + (418 - 417)];
                z[j + (270 - 269)] = kxiMCU;
            }
            j++;
        };
    };
}

void  del3EguP (int Nf7urxI3 [], int TNy5FHp []) {
    int paQXONUP0 = 0;
    while (Nf7urxI3[paQXONUP0] != 0) {
        paQXONUP0++;
    }
    for (int z = 0;
    TNy5FHp[z] != 0; z++)
        Nf7urxI3[paQXONUP0 + z] = TNy5FHp[z];
}

void  shuchu (int Nf7urxI3 []) {
    for (int z = 0;
    Nf7urxI3[z] != 0; z++)
        if (!z)
            cout << Nf7urxI3[z];
        else
            cout << ' ' << Nf7urxI3[z];
}

int main () {
    KqLzNy (Zam4NfzgeU);
    shuchu (Zam4NfzgeU);
    KqLzNy (TYxmqb);
    read ();
    del3EguP (Zam4NfzgeU, TYxmqb);
    return 0;
}

