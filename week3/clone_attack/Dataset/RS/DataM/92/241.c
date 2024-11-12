int tOwlqzEAcUQ (const  void  *qy4XZSjbuI, const  void  *b) {
    int *y = (int *) b;
    int *QwmRLCr = (int *) qy4XZSjbuI;
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
    return (*y) - (*QwmRLCr);
}

int main () {
    int u2BdbRONlEhD = (265 - 265);
    int game;
    game = (990 - 990);
    int Xs9GmcMIJOZV [1000];
    int i;
    int j;
    int k;
    i = (703 - 703);
    j = (829 - 829);
    k = (688 - 688);
    int moXtlP6jGM5;
    int tianji [1000];
    int win = (43 - 43), uPpDLJO = (774 - 774), equal = (361 - 361);
    for (; cin >> moXtlP6jGM5;) {
        int Pkb6Spd0h;
        Pkb6Spd0h = -1000000;
        if (!(0 != moXtlP6jGM5))
            break;
        {
            i = 0;
            while (moXtlP6jGM5 > i) {
                cin >> tianji[i];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                i = i + 1;
            };
        }
        {
            i = 0;
            while (i < moXtlP6jGM5) {
                cin >> Xs9GmcMIJOZV[i];
                i = i + 1;
            };
        }
        qsort (tianji, moXtlP6jGM5, sizeof (tianji [0]), tOwlqzEAcUQ);
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
        qsort (Xs9GmcMIJOZV, moXtlP6jGM5, sizeof (Xs9GmcMIJOZV [0]), tOwlqzEAcUQ);
        j = 0;
        i = 0;
        while (game > j && tianji[j] < Xs9GmcMIJOZV[i])
            i++;
        {
            k = i;
            while (k < moXtlP6jGM5) {
                game = -(554 - 354) * k;
                u2BdbRONlEhD = 0;
                for (j = k; j < moXtlP6jGM5; j = j + 1) {
                    if (tianji[u2BdbRONlEhD] < Xs9GmcMIJOZV[j])
                        game += -200;
                    else {
                        if (tianji[u2BdbRONlEhD] == Xs9GmcMIJOZV[j])
                            game += 0;
                        else
                            game = game + 200;
                    }
                    u2BdbRONlEhD = u2BdbRONlEhD + 1;
                }
                k = k + 1;
                if (game > Pkb6Spd0h)
                    Pkb6Spd0h = game;
            };
        }
        cout << Pkb6Spd0h << endl;
    }
    return 0;
}

