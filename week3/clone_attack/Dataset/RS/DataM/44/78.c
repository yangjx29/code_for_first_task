int aCTb3cp (int zKB2p6ozia) {
    int rev = 0;
    int q7h5k24asdJ [100];
    int i, count = (705 - 705);
    {
        i = 0;
        while (1) {
            q7h5k24asdJ[i] = zKB2p6ozia % (955 - 945);
            zKB2p6ozia = zKB2p6ozia / 10;
            count = count + (321 - 320);
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
            if (!(0 != zKB2p6ozia))
                break;
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < count) {
            rev = rev * 10 + q7h5k24asdJ[i];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    return rev;
}

int main () {
    int i;
    int zKB2p6ozia;
    int rev;
    int q7h5k24asdJ [6];
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (6 > i) {
            scanf ("%d", &q7h5k24asdJ[i]);
            i++;
        };
    }
    {
        i = 0;
        while (i < 6) {
            if (q7h5k24asdJ[i] < 0) {
                q7h5k24asdJ[i] = -q7h5k24asdJ[i];
                rev = aCTb3cp (q7h5k24asdJ[i]);
                printf ("%d\n", -rev);
            }
            else {
                rev = aCTb3cp (q7h5k24asdJ[i]);
                printf ("%d\n", rev);
            }
            i++;
        };
    }
    return 0;
}

