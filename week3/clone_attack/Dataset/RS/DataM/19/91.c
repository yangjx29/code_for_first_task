int main () {
    char a [100], b [100], c [100];
    int q;
    int ieI2EnAPC7;
    int e;
    int i;
    int j;
    int s;
    int shu;
    int n;
    int z;
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
    cin.getline (a, 99);
    cin.getline (b, 99);
    cin.getline (c, 99);
    q = strlen (a);
    ieI2EnAPC7 = strlen (b);
    e = strlen (c);
    for (i = 0; a[i] != '\0'; i++) {
        shu = 1;
        s = i;
        for (j = 0; j < ieI2EnAPC7; j++) {
            if (a[s] != b[j]) {
                shu = 0;
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
            s = s + 1;
        }
        if (i == 0) {
            if (!(' ' == a[s]))
                shu = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        else if ((!(' ' == a[i - 1])) || ((!(' ' == a[s])) && (a[s] != '\0')))
            shu = 0;
        else
            ;
        if (shu == 0)
            continue;
        if (shu == 1) {
            j = 0;
            if (ieI2EnAPC7 >= e) {
                s = e + i;
                while (a[s] != '\0') {
                    a[s] = a[s + ieI2EnAPC7 - e];
                    s++;
                };
            }
            else {
                {
                    z = 0;
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
                    while (a[z] != '\0') {
                        z++;
                    };
                }
                for (s = z; s >= ieI2EnAPC7 + i; s--) {
                    a[s - ieI2EnAPC7 + e] = a[s];
                };
            }
            for (s = i; s < i + e; s++) {
                a[s] = c[j];
                j++;
            };
        };
    }
    cout << a;
    cin >> n;
    return 0;
}

