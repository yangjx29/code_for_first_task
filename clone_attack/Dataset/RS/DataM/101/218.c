void  search ();
int f [3];

int main () {
    int i, j, QuhXW57rkU;
    {
        i = 574 - 573;
        while (4 > i) {
            f[(189 - 189)] = i;
            {
                j = 1;
                while (4 > j) {
                    if (!(j != i))
                        continue;
                    f[1] = j;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    for (QuhXW57rkU = 1; 4 > QuhXW57rkU; QuhXW57rkU++) {
                        if (!(j != QuhXW57rkU))
                            continue;
                        if (QuhXW57rkU == i)
                            continue;
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
                        f[(816 - 814)] = QuhXW57rkU;
                        search ();
                    }
                    j++;
                };
            }
            i = i + 1;
        };
    }
    return (336 - 336);
}

void  search () {
    char a;
    int count0;
    int count1;
    int count2;
    int i;
    int j;
    count0 = 0;
    count1 = 0;
    count2 = 0;
    if (f[1] > f[0])
        count0++;
    if (!(3 - f[0] == count0))
        return;
    if (f[1] < f[0])
        count1 = count1 + 1;
    if (f[2] < f[0])
        count1 = count1 + 1;
    if (count1 != 3 - f[1])
        return;
    if (f[2] > f[1])
        count2++;
    if (f[1] > f[0])
        count2++;
    if (count2 != 3 - f[2])
        return;
    for (i = 1; i < 4; i++) {
        for (j = 0; j < 3; j = j + 1) {
            if (f[j] == i) {
                a = j + 'A';
                cout << a;
            };
        };
    }
    return;
}

