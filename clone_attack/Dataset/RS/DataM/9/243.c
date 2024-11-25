void  main () {
    struct   patient {
        char ID [16];
        int age;
        int tlxsUj;
    };
    int FwQXo58Wu, i, j, t, t1;
    struct   patient pat [FwQXo58Wu];
    char str [16];
    scanf ("%d", &FwQXo58Wu);
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
    for (i = 0; FwQXo58Wu > i; i++) {
        scanf ("%s %d", pat[i].ID, &pat[i].age);
        pat[i].tlxsUj = i;
    }
    {
        i = 0;
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
        while (FwQXo58Wu > i) {
            for (j = i + 1; FwQXo58Wu > j; j++) {
                if (60 <= pat[j].age && pat[j].age > pat[i].age) {
                    strcpy (str, pat[i].ID);
                    strcpy (pat[i].ID, pat[j].ID);
                    strcpy (pat[j].ID, str);
                    t = pat[i].age;
                    pat[i].age = pat[j].age;
                    pat[j].age = t;
                    t1 = pat[i].tlxsUj;
                    pat[i].tlxsUj = pat[j].tlxsUj;
                    pat[j].tlxsUj = t1;
                }
                if (60 <= pat[i].age && !(pat[j].age != pat[i].age)) {
                    if (pat[j].tlxsUj < pat[i].tlxsUj) {
                        strcpy (str, pat[i].ID);
                        strcpy (pat[i].ID, pat[j].ID);
                        strcpy (pat[j].ID, str);
                        t = pat[i].age;
                        pat[i].age = pat[j].age;
                        pat[j].age = t;
                        t1 = pat[i].tlxsUj;
                        pat[i].tlxsUj = pat[j].tlxsUj;
                        pat[j].tlxsUj = t1;
                    };
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < FwQXo58Wu) {
            for (j = i + 1; j < FwQXo58Wu; j++)
                if (pat[i].age < 60 && pat[i].tlxsUj > pat[j].tlxsUj) {
                    strcpy (str, pat[i].ID);
                    strcpy (pat[i].ID, pat[j].ID);
                    strcpy (pat[j].ID, str);
                    t = pat[i].age;
                    pat[i].age = pat[j].age;
                    pat[j].age = t;
                    t1 = pat[i].tlxsUj;
                    pat[i].tlxsUj = pat[j].tlxsUj;
                    pat[j].tlxsUj = t1;
                }
            i++;
        };
    }
    for (i = 0; i < FwQXo58Wu; i++)
        puts (pat[i].ID);
}

