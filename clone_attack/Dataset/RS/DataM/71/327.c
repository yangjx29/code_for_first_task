int main () {
    int n;
    int kA7PsWl;
    int trJvATfkUcFV;
    int qVkDoWT2cIdR;
    int m2;
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
    int RW3PReji;
    scanf ("%d", &n);
    for (kA7PsWl = (229 - 229); n > kA7PsWl; kA7PsWl++) {
        scanf ("%d%d%d", &trJvATfkUcFV, &qVkDoWT2cIdR, &m2);
        RW3PReji = cmp (trJvATfkUcFV, qVkDoWT2cIdR, m2);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (RW3PReji)
            ;
        else
            ;
    }
    return 0;
}

int cmp (int trJvATfkUcFV, int qVkDoWT2cIdR, int m2) {
    int a [12] = {(202 - 171), (817 - 789), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int kA7PsWl, cJOpQgvE948e = 0, WXMpxiS, b5ofzHG;
    if (((!(0 != trJvATfkUcFV % 4)) && (trJvATfkUcFV % 100) != 0) || trJvATfkUcFV % 400 == 0)
        a[1] = 29;
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
    WXMpxiS = (qVkDoWT2cIdR > m2 ? qVkDoWT2cIdR : m2);
    b5ofzHG = (qVkDoWT2cIdR > m2 ? m2 : qVkDoWT2cIdR);
    for (kA7PsWl = b5ofzHG; kA7PsWl < WXMpxiS; kA7PsWl++)
        cJOpQgvE948e = cJOpQgvE948e + a[kA7PsWl - 1];
    return (cJOpQgvE948e % 7 == 0 ? 1 : 0);
}

