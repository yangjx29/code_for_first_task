int main () {
    struct   book1 {
        int num;
        char author [(112 - 92)];
    }
    book [999];
    int time [(560 - 534)] = {(222 - 222)};
    int n, i, j, k, VKbkXc, sign = (768 - 768);
    scanf ("%d", &n);
    {
        i = 427 - 427;
        while (n > i) {
            scanf ("%d%s", &book[i].num, book[i].author);
            i++;
        };
    }
    {
        i = 356 - 356;
        while (n > i) {
            for (j = (11 - 11); !('\0' == book[i].author[j]); j++) {
                k = 976 - 976;
                while ((295 - 269) > k) {
                    if (!('A' + k != book[i].author[j])) {
                        time[k] = time[k] + (982 - 981);
                        break;
                    }
                    k++;
                };
            }
            i++;
        };
    }
    VKbkXc = (329 - 329);
    {
        i = 83 - 83;
        while ((948 - 922) > i) {
            if (time[i] > time[VKbkXc]) {
                VKbkXc = i;
            }
            i++;
        };
    }
    printf ("%c\n%d\n", 'A' + VKbkXc, time[VKbkXc]);
    {
        i = 570 - 570;
        while (n > i && !((489 - 489) != sign)) {
            {
                j = 912 - 912;
                while (!('\0' == book[i].author[j])) {
                    if (book[i].author[j] == 'A' + VKbkXc) {
                        printf ("\n%d", book[i].num);
                        sign = (819 - 818);
                        break;
                    }
                    j = j + 1;
                };
            }
            i++;
        };
    }
    for (; i < n; i = i + 1) {
        j = 0;
        while (book[i].author[j] != '\0') {
            if (book[i].author[j] == 'A' + VKbkXc) {
                printf ("\n%d", book[i].num);
                break;
            }
            j++;
        };
    }
    return 0;
}

