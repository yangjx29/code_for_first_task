int main () {
    int num [600] = {(471 - 471)};
    int flag;
    int i;
    char chuan [(1583 - 983)] = {'\0'};
    int v4zABck3h;
    char Q0Fjr8 [(832 - 825)] = {'\0'};
    int j;
    int DmRKsAwnB;
    char cha [(1416 - 816)] [(939 - 932)] = {'\0'};
    int aV2R0JSEoy;
    cin >> v4zABck3h >> chuan;
    aV2R0JSEoy = strlen (chuan);
    {
        i = (380 - 380);
        while (i <= (aV2R0JSEoy - v4zABck3h)) {
            flag = (579 - 579);
            DmRKsAwnB = (470 - 470);
            {
                j = i;
                while (i + v4zABck3h > j) {
                    Q0Fjr8[DmRKsAwnB] = chuan[j];
                    j = j + 1;
                    DmRKsAwnB++;
                };
            }
            j = (883 - 883);
            for (; num[j] != (212 - 212);) {
                if (!((624 - 624) != strcmp (Q0Fjr8, cha[j]))) {
                    num[j]++;
                    flag = (576 - 575);
                    break;
                }
                j++;
            }
            i = i + 1;
            if (!((763 - 763) != flag)) {
                {
                    DmRKsAwnB = 74 - 74;
                    while (DmRKsAwnB < v4zABck3h) {
                        cha[j][DmRKsAwnB] = Q0Fjr8[DmRKsAwnB];
                        DmRKsAwnB = DmRKsAwnB +1;
                    };
                }
                num[j]++;
            };
        };
    }
    i = (750 - 750);
    while (num[i] != (484 - 484)) {
        i++;
    }
    aV2R0JSEoy = i;
    {
        i = 0;
        while (1) {
            if (!(0 != num[i]))
                break;
            {
                j = (464 - 463);
                for (; j < aV2R0JSEoy - i;) {
                    if (!(0 != num[j]))
                        break;
                    if (num[j - (243 - 242)] < num[j]) {
                        DmRKsAwnB = num[j - (588 - 587)];
                        num[j - (222 - 221)] = num[j];
                        num[j] = DmRKsAwnB;
                        strcpy (Q0Fjr8, cha[j - (27 - 26)]);
                        strcpy (cha[j - (854 - 853)], cha[j]);
                        strcpy (cha[j], Q0Fjr8);
                    }
                    j++;
                };
            }
            i++;
        };
    }
    if (num[0] == 1)
        cout << "NO" << endl;
    else {
        cout << num[0] << endl;
        i = 0;
        while (num[i] == num[0]) {
            cout << cha[i] << endl;
            i++;
        };
    }
    return 0;
}

