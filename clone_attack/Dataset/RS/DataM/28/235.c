int main () {
    char sent [1000];
    char Fs01lHzBbh [300] [200];
    int i;
    int WK8LAJ4;
    int XZ6euzIMk;
    int xCPBi4;
    i = 0;
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
    WK8LAJ4 = 0;
    XZ6euzIMk = 0;
    gets (sent);
    xCPBi4 = strlen (sent);
    for (i = 0; i < xCPBi4; i = i + 1) {
        if ((sent[i] == ' ' && sent[i + 1] != ' ') || sent[i] == '\0') {
            Fs01lHzBbh[WK8LAJ4][XZ6euzIMk] = '\0';
            WK8LAJ4++;
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
            XZ6euzIMk = 0;
        }
        else {
            if (sent[i] != ' ') {
                Fs01lHzBbh[WK8LAJ4][XZ6euzIMk] = sent[i];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                XZ6euzIMk++;
            };
        };
    }
    Fs01lHzBbh[WK8LAJ4][XZ6euzIMk] = '\0';
    {
        i = 0;
        while (i < WK8LAJ4) {
            printf ("%d,", strlen (Fs01lHzBbh[i]));
            i = i + 1;
        };
    }
    printf ("%d", strlen (Fs01lHzBbh[WK8LAJ4]));
    return 0;
}

