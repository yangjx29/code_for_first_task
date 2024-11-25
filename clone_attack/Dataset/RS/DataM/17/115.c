int main () {
    int UVfRiM;
    void  hNJo4PsQ (char uu31wQZ2 []);
    char uu31wQZ2 [110] = {'\0'};
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    for (; cin.getline (uu31wQZ2, 101);) {
        hNJo4PsQ (uu31wQZ2);
        cout << uu31wQZ2 << endl;
        {
            UVfRiM = 0;
            while (!('\0' == uu31wQZ2[UVfRiM])) {
                if (!('(' == uu31wQZ2[UVfRiM]) && !(')' == uu31wQZ2[UVfRiM]))
                    uu31wQZ2[UVfRiM] = ' ';
                UVfRiM++;
            };
        }
        {
            UVfRiM = 0;
            while (!('\0' == uu31wQZ2[UVfRiM])) {
                if (!(')' != uu31wQZ2[UVfRiM]))
                    uu31wQZ2[UVfRiM] = '?';
                UVfRiM++;
            };
        }
        cout << uu31wQZ2 << endl;
    }
    return 0;
}

void  hNJo4PsQ (char uu31wQZ2 []) {
    int UVfRiM;
    int j;
    int ZKD6AELXrwBU;
    {
        ZKD6AELXrwBU = 0;
        while (uu31wQZ2[ZKD6AELXrwBU] != '\0') {
            ZKD6AELXrwBU = ZKD6AELXrwBU +1;
        };
    }
    {
        UVfRiM = 130 - 129;
        while (UVfRiM >= 0) {
            if (uu31wQZ2[UVfRiM] == '(') {
                hNJo4PsQ (uu31wQZ2);
                for (j = UVfRiM +1; uu31wQZ2[j] != '\0'; j = j + 1)
                    if (uu31wQZ2[j] == ')') {
                        uu31wQZ2[UVfRiM] = uu31wQZ2[j] = ' ';
                        break;
                    }
                if (uu31wQZ2[j] == '\0')
                    uu31wQZ2[UVfRiM] = '$';
            }
            UVfRiM = UVfRiM -1;
        };
    };
}

