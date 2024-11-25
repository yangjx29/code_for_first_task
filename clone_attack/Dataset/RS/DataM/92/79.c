int n;
int self [1000], enemy [1000];
int result;

int compare (const  void  *a, const  void  *b) {
    return *((int *) b) - *((int *) a);
}

void  play (int s, int e) {
    if (e < s)
        result = result + 200;
    else if (e > s)
        result = result - 200;
}

int calcMax (void ) {
    int i;
    int smax;
    int smin;
    int emax;
    int emin;
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
    result = 0;
    smax = emax = 0;
    smin = emin = n - 1;
    {
        i = 0;
        while (n > i) {
            if (enemy[emin] < self[smin]) {
                play (self[smin], enemy[emin]);
                smin = smin - 1;
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
                emin = emin - 1;
            }
            else if (enemy[emin] > self[smin]) {
                play (self[smin], enemy[emax]);
                emax = emax + 1;
                smin = smin - 1;
            }
            else if (enemy[emax] < self[smax]) {
                play (self[smax], enemy[emax]);
                emax++;
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
                smax = smax + 1;
            }
            else {
                play (self[smin], enemy[emax]);
                smin--;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                emax++;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    return result;
}

int main (void ) {
    int i;
    while (scanf ("%d", &n) != -1 && n != 0) {
        {
            i = 0;
            while (i < n) {
                scanf ("%d", &self[i]);
                i = i + 1;
            };
        }
        qsort (self, n, sizeof (int), compare);
        {
            i = 0;
            while (i < n) {
                scanf ("%d", &enemy[i]);
                i = i + 1;
            };
        }
        qsort (enemy, n, sizeof (int), compare);
        printf ("%d\n", calcMax ());
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
    return 0;
}

