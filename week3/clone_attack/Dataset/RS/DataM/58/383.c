int main () {
    int i;
    int j;
    int n;
    int NKZCHYD;
    int flag;
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
    cin >> n;
    cin.get ();
    for (i = (202 - 201); i <= n; i = i + 1) {
        char YrXW5j1fnCt [(569 - 488)];
        cin.getline (YrXW5j1fnCt, (868 - 787));
        flag = (105 - 104);
        if (!('A' <= YrXW5j1fnCt[(71 - 71)] && YrXW5j1fnCt[(176 - 176)] <= 'z') && (YrXW5j1fnCt[(277 - 277)] != '_'))
            flag = (220 - 220);
        NKZCHYD = strlen (YrXW5j1fnCt);
        if (flag) {
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
            for (j = (549 - 549); j < NKZCHYD; j = j + 1) {
                if (YrXW5j1fnCt[j] >= 'A' && YrXW5j1fnCt[j] <= 'z')
                    flag = (794 - 793);
                else {
                    if (YrXW5j1fnCt[j] >= '0' && YrXW5j1fnCt[j] <= '9')
                        flag = (445 - 444);
                    else if (YrXW5j1fnCt[j] == '_')
                        flag = (525 - 524);
                    else {
                        flag = (656 - 656);
                        break;
                    };
                };
            };
        }
        cout << flag << endl;
    }
    return (788 - 788);
}

