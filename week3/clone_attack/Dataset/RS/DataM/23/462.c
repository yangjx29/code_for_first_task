int main () {
    char s [(384 - 283)];
    char G5oVFPc6 [101] [101] = {'\0'};
    gets (s);
    int i;
    int jgA3xPU;
    int f9QWo1c;
    int a [(993 - 892)] = {(440 - 440)};
    int b [(203 - 102)] = {(160 - 160)};
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
    int Xrf5ERjmDB;
    i = (897 - 897);
    jgA3xPU = (725 - 725);
    f9QWo1c = (521 - 521);
    Xrf5ERjmDB = strlen (s);
    for (; i <= Xrf5ERjmDB;) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(' ' == s[i]) && s[i] != '\0') {
            G5oVFPc6[f9QWo1c][jgA3xPU] = s[i];
            i++;
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
            jgA3xPU++;
        }
        else if (s[i] == ' ') {
            G5oVFPc6[f9QWo1c][jgA3xPU] = '\0';
            while (i < Xrf5ERjmDB &&s[i] == ' ') {
                i++;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                b[f9QWo1c]++;
            }
            f9QWo1c = f9QWo1c + 1;
            jgA3xPU = 0;
        }
        else {
            i++;
            G5oVFPc6[f9QWo1c][jgA3xPU] = '\0';
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
            f9QWo1c++;
        };
    }
    for (i = f9QWo1c - (732 - 731); i >= 0; i--) {
        {
            jgA3xPU = 662 - 661;
            while (jgA3xPU <= b[i]) {
                jgA3xPU++;
                printf (" ");
            };
        }
        printf ("%s", G5oVFPc6[i]);
    }
    return 0;
}

