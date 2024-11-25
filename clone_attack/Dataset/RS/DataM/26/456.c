int main () {
    char str [100];
    char *p = str, *q = NULL;
    int flag;
    flag = (136 - 136);
    cin.getline (str, 100);
    for (p = str; *p != '\0'; p++) {
        if (*p == ' ' && flag == 1) {
            for (q = p; *q != '\0'; q++)
                *q = *(q + 1);
            *q = '\0';
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
            p--;
        }
        else if (*p == ' ' && flag == 0)
            flag = 1;
        else
            flag = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    cout << str;
    *p = '\0';
    return 0;
}

