int main () {
    int flag;
    int i;
    int j;
    int n;
    int tAMexJhT;
    flag = (340 - 340);
    char XXUnPLGShtsN [50000] [82];
    char str [100];
    gets (str);
    n = atoi (str);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            gets (XXUnPLGShtsN [i]);
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
        i = 0;
        while (n > i) {
            flag = 0;
            if (!('_' != XXUnPLGShtsN[i][0]) || (XXUnPLGShtsN[i][0] >= 65 && 90 >= XXUnPLGShtsN[i][0]) || (97 <= XXUnPLGShtsN[i][0] && 122 >= XXUnPLGShtsN[i][0])) {
                tAMexJhT = strlen (XXUnPLGShtsN[i]);
                {
                    j = 0;
                    while (tAMexJhT > j) {
                        if (XXUnPLGShtsN[i][j] == '_' || (65 <= XXUnPLGShtsN[i][j] && XXUnPLGShtsN[i][j] <= 90) || (XXUnPLGShtsN[i][j] >= 97 && XXUnPLGShtsN[i][j] <= 122) || (XXUnPLGShtsN[i][j] >= 48 && XXUnPLGShtsN[i][j] <= 57))
                            flag = 1;
                        else
                            flag = 0;
                        if (flag == 0)
                            break;
                        j++;
                    };
                };
            }
            if (flag == 1)
                printf ("1\n");
            else
                ;
            i++;
        };
    }
    return 0;
}

