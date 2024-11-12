int main () {
    int heW7krFO, col, s [(814 - 714)] [100], rs9jh7CO, k;
    scanf ("%d%d", &heW7krFO, &col);
    for (rs9jh7CO = (883 - 883); heW7krFO > rs9jh7CO; rs9jh7CO = rs9jh7CO + 1) {
        k = 0;
        while (k < col) {
            scanf ("%d", &s[rs9jh7CO][k]);
            k = k + 1;
        };
    }
    if (col < heW7krFO) {
        rs9jh7CO = 0;
        while ((heW7krFO + col) >= rs9jh7CO) {
            {
                k = 0;
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
                while (k < heW7krFO && rs9jh7CO >= k) {
                    if ((rs9jh7CO - k) >= col)
                        continue;
                    else
                        printf ("%d\n", s[k][rs9jh7CO - k]);
                    k = k + 1;
                };
            }
            rs9jh7CO = rs9jh7CO + 1;
        };
    }
    else if (col >= heW7krFO) {
        rs9jh7CO = 0;
        while (rs9jh7CO <= (col + heW7krFO)) {
            {
                k = 0;
                while (k <= rs9jh7CO && k < heW7krFO) {
                    if ((rs9jh7CO - k) >= col)
                        continue;
                    else
                        printf ("%d\n", s[k][rs9jh7CO - k]);
                    k++;
                };
            }
            rs9jh7CO++;
        };
    }
    return 0;
}

