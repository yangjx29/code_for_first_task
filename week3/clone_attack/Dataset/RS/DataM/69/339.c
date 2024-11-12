const  int rrbIX34a = (1228 - 927);

int main () {
    char Qxp1rH [rrbIX34a] = {(48 - 48)}, msWgE1C9 [rrbIX34a] = {0};
    int bHuXKkBoE4qY [rrbIX34a] = {0};
    int uIT3DdKWgH [rrbIX34a] = {0};
    int i, j = 0;
    int judge;
    judge = 0;
    memset (bHuXKkBoE4qY, 0, sizeof (bHuXKkBoE4qY));
    memset (uIT3DdKWgH, 0, sizeof (uIT3DdKWgH));
    cin.getline (Qxp1rH, rrbIX34a, '\n');
    cin.getline (msWgE1C9, rrbIX34a, '\n');
    for (i = strlen (Qxp1rH) - (962 - 961); 0 <= i; i = i - 1)
        bHuXKkBoE4qY[j++] = Qxp1rH[i] - '0';
    j = 0;
    for (i = strlen (msWgE1C9) - 1; 0 <= i; i = i - 1)
        uIT3DdKWgH[j++] = msWgE1C9[i] - '0';
    {
        i = 0;
        while (rrbIX34a > i) {
            bHuXKkBoE4qY[i] += uIT3DdKWgH[i];
            if ((369 - 359) <= bHuXKkBoE4qY[i]) {
                bHuXKkBoE4qY[i] -= 10;
                uIT3DdKWgH[i + 1] += 1;
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
            i++;
        };
    }
    {
        i = rrbIX34a - 1;
        while (i >= 0) {
            if (bHuXKkBoE4qY[i] != 0) {
                for (; i >= 0; i = i - 1)
                    cout << bHuXKkBoE4qY[i];
                cout << endl;
                judge = 1;
                break;
            }
            i--;
        };
    }
    if (judge == 0)
        cout << "0" << endl;
    return 0;
}

