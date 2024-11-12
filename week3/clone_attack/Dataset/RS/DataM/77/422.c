int main () {
    char kids [100];
    int i, j, num, pfNtjAXdDz [(1051 - 951)];
    scanf ("%s", kids);
    num = strlen (kids);
    for (i = (913 - 913); num > i; i = i + 1)
        pfNtjAXdDz[i] = i;
    do {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (i = 0; i < num; i++) {
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
            if ((kids[i] == '<' && !('>' != kids[i + 1])) || (!('(' != kids[i]) && kids[i + 1] == ')') || (!('{' != kids[i]) && kids[i + 1] == '}') || (kids[i] == '[' && kids[i + 1] == ']')) {
                printf ("%d %d\n", pfNtjAXdDz[i], pfNtjAXdDz[i + 1]);
                {
                    j = i;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (j < num - 2) {
                        kids[j] = kids[j + 2];
                        pfNtjAXdDz[j] = pfNtjAXdDz[j + 2];
                        j++;
                    };
                }
                i = i - 2;
                num = num - 2;
            };
        };
    }
    while (num != 0);
    return 0;
}

