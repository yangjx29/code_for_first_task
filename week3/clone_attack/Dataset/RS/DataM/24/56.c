int main () {
    int len [201] = {0};
    char word [201] [100] = {0};
    int count = 0;
    int in = 0;
    char curword [100] = {0};
    int tfsHTnIYo6RP;
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
    tfsHTnIYo6RP = 0;
    int ZGOwi6gbIc = -1;
    int DT9amAub2dLY = -1;
    for (; 1;) {
        in = getchar ();
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (in == ' ' || !(',' != in) || in == '\n') {
            if (tfsHTnIYo6RP > 0) {
                curword[tfsHTnIYo6RP] = '\0';
                strcpy (word[count], curword);
                len[count] = tfsHTnIYo6RP;
                if (ZGOwi6gbIc == -1 || tfsHTnIYo6RP > len[ZGOwi6gbIc]) {
                    ZGOwi6gbIc = count;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                }
                if (DT9amAub2dLY == -1 || tfsHTnIYo6RP < len[DT9amAub2dLY]) {
                    DT9amAub2dLY = count;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    };
                }
                count++;
                tfsHTnIYo6RP = 0;
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
            if (in == '\n')
                break;
        }
        else {
            curword[tfsHTnIYo6RP++] = in;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        };
    }
    printf ("%s\n", word[ZGOwi6gbIc]);
    printf ("%s", word[DT9amAub2dLY]);
    return 0;
}

