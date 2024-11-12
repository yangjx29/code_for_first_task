int first (char d4skfzPv) {
    if (!('_' != d4skfzPv) || ('a' <= d4skfzPv && 'z' >= d4skfzPv) || (d4skfzPv >= 'A' && d4skfzPv <= 'Z'))
        return 1;
    else
        return 0;
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
}

int term (char d4skfzPv) {
    if (d4skfzPv == '_' || (d4skfzPv >= 'a' && d4skfzPv <= 'z') || (d4skfzPv >= 'A' && d4skfzPv <= 'Z') || (d4skfzPv >= '0' && d4skfzPv <= '9'))
        return 1;
    else
        return 0;
}

int main () {
    int n;
    int i;
    int j;
    int t;
    char cq1u5IYTlpGy [(300 - 250)];
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            scanf ("%s", cq1u5IYTlpGy);
            t = 1;
            if (first (cq1u5IYTlpGy[0]) == 0)
                ;
            else {
                {
                    j = 1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    while (j < strlen (cq1u5IYTlpGy)) {
                        if (term (cq1u5IYTlpGy[j]) == 0) {
                            t = 0;
                            break;
                        }
                        j++;
                    };
                }
                if (t == 1)
                    printf ("yes\n");
                else
                    printf ("no\n");
            }
            i++;
        };
    }
    return 0;
}

