int main () {
    char l [1000];
    int i, BrWAtueQlI5i;
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
    scanf ("%s", l);
    BrWAtueQlI5i = (764 - 763);
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
        while (!('\0' == l[i])) {
            if (!(l[i + 1] != l[i]) || !(l[i + 1] - 'a' + 'A' != l[i]) || !(l[i + 1] - 'A' + 'a' != l[i])) {
                if (l[i] >= 'A' && 'Z' >= l[i]) {
                    if (!(l[i + 1] != l[i]) || l[i] == l[i + 1] - 'a' + 'A')
                        BrWAtueQlI5i = BrWAtueQlI5i +1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                }
                else {
                    if (l[i] == l[i + 1] || l[i] == l[i + 1] - 'A' + 'a')
                        BrWAtueQlI5i = BrWAtueQlI5i +1;
                };
            }
            else {
                if (l[i] >= 'A' && l[i] <= 'Z') {
                    printf ("(%c,%d)", l[i], BrWAtueQlI5i);
                    BrWAtueQlI5i = 1;
                }
                if (l[i] >= 'a' && l[i] <= 'z') {
                    l[i] = l[i] - 'a' + 'A';
                    printf ("(%c,%d)", l[i], BrWAtueQlI5i);
                    BrWAtueQlI5i = 1;
                };
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
            i++;
        };
    };
}

