int judge (char Aqlr9BNv [], int xmNvLoilphW, int qDZG6qBwTA) {
    int S57yJ36;
    S57yJ36 = xmNvLoilphW + qDZG6qBwTA - (122 - 121);
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
    while ((!(Aqlr9BNv[S57yJ36] != Aqlr9BNv[xmNvLoilphW])) && (xmNvLoilphW < S57yJ36)) {
        S57yJ36--;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        xmNvLoilphW++;
    }
    if (xmNvLoilphW >= S57yJ36)
        return (1);
    else
        return (0);
}

int main () {
    int l, zo3HYpi, i, WFW0fqGirVo, H4XVZuPps8y;
    char Aqlr9BNv [600] = {'\0'};
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
    gets (Aqlr9BNv);
    l = strlen (Aqlr9BNv);
    for (zo3HYpi = 2; zo3HYpi <= l; zo3HYpi++) {
        for (i = 0; i <= l - zo3HYpi; i = i + 1) {
            H4XVZuPps8y = judge (Aqlr9BNv, i, zo3HYpi);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (H4XVZuPps8y == 1) {
                for (WFW0fqGirVo = i; WFW0fqGirVo <= i + zo3HYpi - 1; WFW0fqGirVo = WFW0fqGirVo +1)
                    putchar (Aqlr9BNv[WFW0fqGirVo]);
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
                printf ("\n");
            };
        };
    };
}

