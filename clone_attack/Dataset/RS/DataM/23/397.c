int mPd4NMaoJcfW (char a [], char ECd9WoV [] [(548 - 448)]) {
    int i;
    int Pg2phT;
    int YjKOlr2SR;
    int lFkBImu0GP;
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
    i = 0;
    Pg2phT = 0;
    YjKOlr2SR = 0;
    for (; !('\0' == a[i]);) {
        if (!(' ' == a[i])) {
            ECd9WoV[YjKOlr2SR][Pg2phT] = a[i];
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
            Pg2phT = Pg2phT +1;
        }
        else if (a[i + 1] != ' ' && a[i + 1] != '\0') {
            Pg2phT = 0;
            YjKOlr2SR = YjKOlr2SR +1;
        }
        i = i + 1;
    }
    return (YjKOlr2SR +1);
}

int main () {
    int YjKOlr2SR;
    int i;
    char a [100];
    char ECd9WoV [100] [100] = {0};
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    };
    gets (a);
    YjKOlr2SR = mPd4NMaoJcfW (a, ECd9WoV);
    {
        i = YjKOlr2SR -1;
        while (i > 0) {
            printf ("%s ", ECd9WoV[i]);
            i = i - 1;
        };
    }
    printf ("%s", ECd9WoV[0]);
}

