int main () {
    int p2D3ABmRKkpO;
    int i;
    int gUr8xeQN7H;
    p2D3ABmRKkpO = 0;
    char a [1000];
    char b [1000];
    char c;
    scanf ("%s %s", a, b);
    {
        i = 0;
        while (1000 > i) {
            if (a[i] == '\0')
                break;
            for (gUr8xeQN7H = i; gUr8xeQN7H < 1000; gUr8xeQN7H = gUr8xeQN7H + 1) {
                if (a[gUr8xeQN7H] == '\0')
                    break;
                else if (a[p2D3ABmRKkpO] < a[gUr8xeQN7H])
                    p2D3ABmRKkpO = gUr8xeQN7H;
                else
                    ;
            }
            c = a[i];
            a[i] = a[p2D3ABmRKkpO];
            a[p2D3ABmRKkpO] = c;
            p2D3ABmRKkpO = i + 1;
            i = i + 1;
        };
    }
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < 1000) {
            if (!('\0' != b[i]))
                break;
            {
                gUr8xeQN7H = i;
                while (gUr8xeQN7H < 1000) {
                    if (b[gUr8xeQN7H] == '\0')
                        break;
                    else if (b[gUr8xeQN7H] > b[p2D3ABmRKkpO])
                        p2D3ABmRKkpO = gUr8xeQN7H;
                    else
                        ;
                    gUr8xeQN7H = gUr8xeQN7H + 1;
                };
            }
            c = b[i];
            b[i] = b[p2D3ABmRKkpO];
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
            b[p2D3ABmRKkpO] = c;
            p2D3ABmRKkpO = i + 1;
            i++;
        };
    }
    if (strcmp (a, b) == 0)
        ;
    else
        ;
    return 0;
}

