int main () {
    char str [101];
    int OXtwLli2Y;
    int W10F2fJHt7qR;
    int j;
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
    OXtwLli2Y = 99;
    gets (str);
    for (; OXtwLli2Y >= 0;) {
        W10F2fJHt7qR = strlen (str);
        if (str[OXtwLli2Y] == ' ') {
            j = OXtwLli2Y +1;
            for (; j < W10F2fJHt7qR;) {
                printf ("%c", str[j]);
                j = j + 1;
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
            str[OXtwLli2Y] = '\0';
            printf (" ");
        }
        if (OXtwLli2Y == 0)
            puts (str);
        OXtwLli2Y = OXtwLli2Y -1;
    }
    return 0;
}

