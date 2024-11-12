int main () {
    int i;
    int j;
    char str1 [(463 - 363)];
    char str2 [100];
    gets (str1);
    gets (str2);
    for (i = (688 - 688); str1[i] != '0'; i++) {
        if (str1[i] >= 'A' && str1[i] <= 'Z') {
            str1[i] = str1[i] + 32;
        }
        else {
            str1[i] = str1[i];
        };
    }
    for (j = 0; str2[j] != '0'; j++) {
        if (str2[j] >= 'A' && str2[j] <= 'Z') {
            str2[j] = str2[j] + 32;
        }
        else {
            str2[j] = str2[j];
        };
    }
    if (strcmp (str1, str2) == 0) {
        printf ("=\n");
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                for (x = 0; x < 20; x++) {
                    y += x;
                }
                if (y > 30)
                    return y;
            }
        };
    }
    else if (strcmp (str1, str2) > 0) {
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
        };
    }
    else if (strcmp (str1, str2) < 0) {
    }
    return 0;
}

