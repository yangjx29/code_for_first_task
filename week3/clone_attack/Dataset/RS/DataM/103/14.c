int main () {
    int i2;
    int i1;
    int jishu;
    jishu = 0;
    char tmp;
    int WDwFvHZy3Q6T [1000] = {0};
    char samechar [1000];
    char str [1000];
    scanf ("%s", str);
    {
        int i = 0;
        for (; str[i] != '\0';) {
            if (str[i] >= 'a' && str[i] <= 'z') {
                str[i] = str[i] - 'a' + 'A';
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
            i++;
        };
    }
    tmp = str[0];
    {
        i1 = 0;
        while (str[i1] != '\0') {
            if (tmp == str[i1]) {
                samechar[jishu] = tmp;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                WDwFvHZy3Q6T[jishu]++;
            }
            else {
                jishu = jishu + 1;
                tmp = str[i1];
                samechar[jishu] = tmp;
                WDwFvHZy3Q6T[jishu]++;
            }
            i1++;
        };
    }
    for (i2 = 0; i2 <= jishu; i2++) {
        printf ("(%c,%d)", samechar[i2], WDwFvHZy3Q6T[i2]);
    }
    return 0;
}

