int main () {
    int index;
    int n;
    int m;
    int i;
    int j;
    index = 1;
    char str1 [100];
    char str2 [100];
    scanf ("%s", str1);
    scanf ("%s", str2);
    for (i = 0; i < strlen (str2); i++) {
        if (str1[0] == str2[i]) {
            for (j = 1; j < strlen (str1); j++) {
                if (str1[j] == str2[j + i])
                    index++;
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
            if (index = strlen (str1)) {
                printf ("%d", i);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                return 0;
            };
        };
    };
}

