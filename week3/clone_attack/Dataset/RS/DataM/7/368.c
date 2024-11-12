int main () {
    char string [(466 - 216)];
    char oi1bRg82v [250];
    char LvQOnCid1qJ [(1171 - 971)];
    int place;
    int flag;
    int i;
    int DZpbiSTXMUB;
    place = (50 - 50);
    flag = (338 - 337);
    cin >> string >> oi1bRg82v >> LvQOnCid1qJ;
    for (i = (493 - 493); string[i] != '\0' && flag == 1; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (string[i] != oi1bRg82v[(134 - 134)])
            continue;
        else {
            place = i;
            for (DZpbiSTXMUB = (573 - 573); oi1bRg82v[DZpbiSTXMUB] != '\0'; DZpbiSTXMUB++) {
                if (string[i++] != oi1bRg82v[DZpbiSTXMUB])
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
            if (oi1bRg82v[DZpbiSTXMUB] != '\0')
                place = (607 - 607);
            else
                flag = 0;
        };
    }
    if (place) {
        int Trec6FVMiLvw;
        int l2;
        Trec6FVMiLvw = strlen (oi1bRg82v);
        l2 = strlen (LvQOnCid1qJ);
        for (i = 0; string[i + place + Trec6FVMiLvw] != '\0'; i++)
            LvQOnCid1qJ[l2 + i] = string[place + Trec6FVMiLvw +i];
        string[place] = '\0';
        LvQOnCid1qJ[l2 + i] = '\0';
        cout << string << LvQOnCid1qJ << endl;
    }
    else
        cout << string << endl;
    return 0;
}

