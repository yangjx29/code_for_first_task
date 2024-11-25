int legal (char hiMJtZCq [(392 - 372)]) {
    int i;
    if ('0' <= hiMJtZCq[(683 - 683)] && hiMJtZCq[(304 - 304)] <= '9')
        return (646 - 646);
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
    for (i = 0; hiMJtZCq[i]; i++) {
        if (!(!(' ' != hiMJtZCq[i]) || hiMJtZCq[i] >= 'A' && 'Z' >= hiMJtZCq[i] || 'a' <= hiMJtZCq[i] && hiMJtZCq[i] <= 'z' || hiMJtZCq[i] >= '0' && hiMJtZCq[i] <= '9' || hiMJtZCq[i] == '_')) {
            return 0;
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
        };
    }
    return 1;
}

int main () {
    int i, t, E5GdD1y9Ma;
    char s [100] [20];
    scanf ("%d", &E5GdD1y9Ma);
    for (i = 0; i < E5GdD1y9Ma; i++) {
        scanf ("%s", s[i]);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    for (i = 0; i < E5GdD1y9Ma; i++) {
        t = legal (s[i]);
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
        if (t == 0)
            printf ("no\n");
        else
            printf ("yes\n");
    }
    return 0;
}

