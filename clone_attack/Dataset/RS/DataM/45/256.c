void  main () {
    int k;
    k = (876 - 876);
    char a [(807 - 757)] = {'\0'};
    char TEtSlhfLDk [50] = {'\0'};
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
    char *p, *p1, *p2;
    scanf ("%s%s", a, TEtSlhfLDk);
    p1 = a;
    p = TEtSlhfLDk;
    for (; *p != '\0'; p = p + 1) {
        if (*p == *p1) {
            p2 = p;
            for (; *p1 != '\0'; p1 = p1 + 1, p2 = p2 + 1) {
                if (*p1 == *p2)
                    continue;
                else
                    break;
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
            if (*p1 == '\0') {
                printf ("%d", k);
                break;
            }
            p1 = a;
        }
        else
            k++;
    };
}

