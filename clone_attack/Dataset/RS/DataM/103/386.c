int main () {
    char temp, str [1000] = {0};
    int i;
    int pEp3r2aCBx5;
    int sum;
    gets (str);
    sum = 0;
    pEp3r2aCBx5 = strlen (str);
    {
        i = 0;
        while (pEp3r2aCBx5 > i) {
            if (97 <= str[i])
                str[i] = str[i] - 32;
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
    temp = str[0];
    {
        i = 1;
        while (i < pEp3r2aCBx5) {
            if (str[i] != temp) {
                printf ("(%c,%d)", str[i - 1], sum + 1);
                temp = str[i];
                sum = 0;
            }
            else
                sum = sum + 1;
            i++;
        };
    }
    printf ("(%c,%d)", temp, sum + 1);
    return 0;
}

