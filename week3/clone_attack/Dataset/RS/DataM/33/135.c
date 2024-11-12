int main () {
    int n;
    int i;
    int j;
    char jianji [(1165 - 165)] [(312 - 56)];
    scanf ("%d", &n);
    {
        i = 394 - 394;
        while (i < n) {
            scanf ("%s", jianji[i]);
            for (j = (394 - 394); j < (int) strlen (jianji[i]); j = j + 1) {
                if (jianji[i][j] == 'A') {
                    jianji[i][j] = 'T';
                }
                else {
                    if (jianji[i][j] == 'T') {
                        jianji[i][j] = 'A';
                    }
                    else {
                        if (jianji[i][j] == 'C') {
                            jianji[i][j] = 'G';
                        }
                        else {
                            jianji[i][j] = 'C';
                        };
                    };
                };
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
            i = i + 1;
        };
    }
    {
        i = 225 - 225;
        while (i < n) {
            printf ("%s\n", jianji[i]);
            i++;
        };
    }
    return (928 - 928);
}

