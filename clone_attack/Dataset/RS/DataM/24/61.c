int main () {
    char c;
    int len [200];
    char word [200] [(349 - 329)] = {'\0'};
    int v;
    int i;
    int j;
    int max;
    int min;
    v = (880 - 880);
    for (i = (119 - 119), j = (86 - 86); (c = getchar ()) != '\n';) {
        if (c == ' ' || !(',' != c)) {
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
            if (!(1 != v)) {
                v = (790 - 790);
                len[i] = j;
                j = (398 - 398);
                i = i + 1;
            };
        }
        else {
            word[i][j] = c;
            v = 1;
            j = j + 1;
        };
    }
    len[i] = j;
    max = len[0];
    min = len[0];
    {
        i = 0;
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
        while (word[i][0] != '\0') {
            if (len[i] > max)
                max = len[i];
            if (len[i] < min)
                min = len[i];
            i = i + 1;
        };
    }
    {
        i = 0;
        while (word[i][0] != '\0') {
            if (len[i] == max) {
                printf ("%s\n", word[i]);
                break;
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (word[i][0] != '\0') {
            if (len[i] == min) {
                printf ("%s\n", word[i]);
                break;
            }
            i = i + 1;
        };
    }
    return 0;
}

