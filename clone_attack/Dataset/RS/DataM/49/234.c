int XeZhVj (char ch [(1499 - 999)]) {
    int o320UV = strlen (ch);
    {
        int i;
        i = 0;
        while (i <= o320UV / 2) {
            if (ch[i] != ch[o320UV - 1 - i])
                return 0;
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
    }
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
    return 1;
}

int main () {
    int j;
    int BYfOw7e;
    int o320UV;
    int i;
    char a [500] = {'\0'}, lfUPIt [500] = {'\0'};
    cin >> a;
    o320UV = strlen (a);
    for (i = 2; i <= o320UV; i++) {
        j = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (j <= o320UV - i) {
            for (BYfOw7e = 0; BYfOw7e < i; BYfOw7e++) {
                lfUPIt[BYfOw7e] = a[j + BYfOw7e];
            }
            j++;
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
            lfUPIt[BYfOw7e] = '\0';
            if (XeZhVj (lfUPIt))
                cout << lfUPIt << endl;
        };
    }
    return 0;
}

