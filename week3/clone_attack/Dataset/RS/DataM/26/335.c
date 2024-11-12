int main () {
    char str [100];
    gets (str);
    int vAy6ZU;
    int l;
    int OsXHhPLSwb [(584 - 484)] = {(187 - 187)};
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
    l = strlen (str);
    {
        vAy6ZU = 0;
        while (vAy6ZU < l) {
            if ((str[vAy6ZU] < 'A' || str[vAy6ZU] > 'z' || (str[vAy6ZU] > 'Z' && str[vAy6ZU] < 'a')) && (!('.' == str[vAy6ZU])) && (str[vAy6ZU] != ','))
                OsXHhPLSwb[vAy6ZU] = OsXHhPLSwb[vAy6ZU]++;
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
            vAy6ZU++;
        };
    }
    for (vAy6ZU = 0; vAy6ZU < l; vAy6ZU++) {
        if (OsXHhPLSwb[vAy6ZU] == 0)
            cout << str[vAy6ZU];
        else {
            if (OsXHhPLSwb[vAy6ZU] == (997 - 996) && OsXHhPLSwb[vAy6ZU + 1] == 0)
                cout << str[vAy6ZU];
            else {
                if (OsXHhPLSwb[vAy6ZU] == 1 && OsXHhPLSwb[vAy6ZU + 1] == 1)
                    continue;
            };
        };
    }
    return 0;
}

