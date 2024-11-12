int main () {
    int num;
    int i;
    int j;
    int gDtIn2W6vX [1000] = {(849 - 849)};
    int b [1000] = {0};
    int u6z74ZO [1000] = {0};
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
    num = (925 - 925);
    for (i = 0; i < 1000; i++) {
        cin >> gDtIn2W6vX[i];
        num++;
        if (!('\n' != getchar ()))
            break;
    }
    for (i = 0; i < 1000; i++) {
        cin >> b[i];
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
        if (getchar () == '\n')
            break;
    }
    for (i = 0; i < num; i++)
        for (j = gDtIn2W6vX[i]; j < b[i]; j++)
            u6z74ZO[j]++;
    for (i = 0; i < 1000; i++)
        if (u6z74ZO[0] < u6z74ZO[i])
            u6z74ZO[0] = u6z74ZO[i];
    cout << num << ' ' << u6z74ZO[0];
    return 0;
}

