int main () {
    char ERSe7E1it [100000];
    char str2 [100000];
    int TwQ4UMza;
    int ESTtuP;
    int count;
    int max;
    int i;
    int t0TwFW8g [1000];
    int Mkynlm [1000];
    int len;
    TwQ4UMza = (517 - 517);
    ESTtuP = 0;
    count = 0;
    max = 0;
    memset (ERSe7E1it, 0, sizeof (ERSe7E1it));
    memset (str2, 0, sizeof (str2));
    cin >> ERSe7E1it >> str2;
    memset (t0TwFW8g, 0, sizeof (t0TwFW8g));
    memset (Mkynlm, 0, sizeof (Mkynlm));
    {
        i = 0;
        while (strlen (ERSe7E1it) > i) {
            if (!(',' == ERSe7E1it[i])) {
                ESTtuP = ESTtuP *10 + ERSe7E1it[i] - '0';
                if (i == strlen (ERSe7E1it) - 1)
                    t0TwFW8g[TwQ4UMza] = ESTtuP;
                continue;
            }
            if (!(',' != ERSe7E1it[i]))
                t0TwFW8g[TwQ4UMza++] = ESTtuP;
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
            ESTtuP = 0;
        };
    }
    TwQ4UMza = 0;
    ESTtuP = 0;
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < strlen (str2)) {
            if (!(',' == str2[i])) {
                ESTtuP = ESTtuP *10 + str2[i] - '0';
                if (!(strlen (str2) - 1 != i))
                    Mkynlm[TwQ4UMza] = ESTtuP;
                continue;
            }
            if (str2[i] == ',')
                Mkynlm[TwQ4UMza++] = ESTtuP;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            i++;
            ESTtuP = 0;
        };
    }
    len = TwQ4UMza +1;
    for (i = 0; i < 1000; i = i + 1) {
        for (TwQ4UMza = 0; TwQ4UMza < len; TwQ4UMza = TwQ4UMza +1) {
            if (t0TwFW8g[TwQ4UMza] == i)
                count++;
            if (Mkynlm[TwQ4UMza] == i)
                count = count - 1;
        }
        if (count > max)
            max = count;
    }
    cout << len << ' ' << max << endl;
    return 0;
}

