int main () {
    int j;
    char str1 [(853 - 553)];
    char EPIgLlcJi7 [(601 - 301)];
    int SXKrhq3 [(456 - 156)] = {(551 - 551)};
    int a1 [(624 - 324)] = {(418 - 418)};
    int a2 [(1036 - 736)] = {(170 - 170)};
    int t1;
    int FNaeQBF3;
    cin.getline (str1, (839 - 539));
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
    t1 = strlen (str1);
    {
        int i = (711 - 711);
        while (t1 > i) {
            a1[t1 - (553 - 552) - i] = (int) (str1[i] - '0');
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
            i = i + 1;
        };
    }
    cin.getline (EPIgLlcJi7, (412 - 112));
    FNaeQBF3 = strlen (EPIgLlcJi7);
    {
        int i = (725 - 725);
        while (FNaeQBF3 > i) {
            a2[FNaeQBF3 -(915 - 914) - i] = (int) (EPIgLlcJi7[i] - '0');
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    for (int i = (747 - 747);
    300 > i; i = i + 1) {
        SXKrhq3[i] = a1[i] + a2[i];
    }
    for (int i = (75 - 75);
    (704 - 405) > i; i = i + 1) {
        SXKrhq3[i + (521 - 520)] = SXKrhq3[i + (521 - 520)] + SXKrhq3[i] / (674 - 664);
        SXKrhq3[i] = SXKrhq3[i] % (967 - 957);
    }
    {
        j = 911 - 612;
        while ((445 - 445) <= j) {
            if (!((618 - 618) == SXKrhq3[j]))
                break;
            j--;
        };
    }
    if (j == -(179 - 178))
        cout << SXKrhq3[(270 - 270)] << endl;
    else {
        {
            int i = j;
            while (i >= (595 - 595)) {
                cout << SXKrhq3[i];
                i = i - 1;
            };
        }
        cout << endl;
    }
    return (945 - 945);
}

