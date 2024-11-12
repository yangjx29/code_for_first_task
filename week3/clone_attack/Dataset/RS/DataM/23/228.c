int main () {
    int kBoA12 = (599 - 599), flag = (496 - 496), i, j, k;
    char st [(784 - 683)], kmpLckCe [100] [(78 - 58)];
    gets (st);
    int yhbaBOWpoIs;
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
    yhbaBOWpoIs = 1;
    for (i = 0; st[i] != '\0'; i = i + 1) {
        if (st[i] == ' ')
            flag = 0;
        else if (!(0 != flag)) {
            kBoA12++;
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
            flag = 1;
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
        if ((kBoA12 == 1 && !(1 != yhbaBOWpoIs)) || (st[i - 1] == ' ' && st[i] != ' ')) {
            j = 0;
            for (k = i; st[k] != ' ' && st[k] != '\0'; k++) {
                kmpLckCe[kBoA12][j++] = st[k];
            }
            kmpLckCe[kBoA12][j++] = '\0';
            yhbaBOWpoIs = 0;
        };
    }
    for (i = kBoA12; i > 1; i = i - 1)
        printf ("%s ", kmpLckCe[i]);
    printf ("%s", kmpLckCe[1]);
}

