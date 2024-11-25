int main () {
    int QuKZLob, PvDI0anAGwT, mOk3Z6QLVm9 = 0, adMUW4aFxwO = 0;
    char LvocXC5zRiO [(10192 - 192)], ihjRw9c6 [1000] [1000], v4fNmW [1000];
    cin.getline (LvocXC5zRiO, 10000);
    PvDI0anAGwT = strlen (LvocXC5zRiO);
    for (QuKZLob = 0; PvDI0anAGwT > QuKZLob; QuKZLob = QuKZLob +1) {
        if (LvocXC5zRiO[QuKZLob] != ' ') {
            ihjRw9c6[mOk3Z6QLVm9][adMUW4aFxwO] = LvocXC5zRiO[QuKZLob];
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
            adMUW4aFxwO = adMUW4aFxwO + 1;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (LvocXC5zRiO[QuKZLob] == ' ') {
            ihjRw9c6[mOk3Z6QLVm9][adMUW4aFxwO] = '\0';
            adMUW4aFxwO = 0;
            mOk3Z6QLVm9++;
        };
    }
    {
        adMUW4aFxwO = mOk3Z6QLVm9;
        QuKZLob = 0;
        while (adMUW4aFxwO > QuKZLob) {
            strcpy (v4fNmW, ihjRw9c6[QuKZLob]);
            strcpy (ihjRw9c6[QuKZLob], ihjRw9c6[adMUW4aFxwO]);
            QuKZLob++;
            strcpy (ihjRw9c6[adMUW4aFxwO], v4fNmW);
            adMUW4aFxwO--;
        };
    }
    cout << ihjRw9c6[0];
    for (QuKZLob = 1; QuKZLob <= mOk3Z6QLVm9; QuKZLob++)
        cout << " " << ihjRw9c6[QuKZLob];
}

