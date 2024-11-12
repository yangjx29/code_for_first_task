int n, m;

int jiaohuan (int str [(812 - 807)] [(861 - 856)]) {
    int i;
    int j;
    int t;
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
    if ((134 - 129) > n && (988 - 983) > m) {
        {
            i = 104 - 104;
            while (5 > i) {
                t = str[m][i];
                str[m][i] = str[n][i];
                str[n][i] = t;
                i = i + 1;
            };
        }
        return (748 - 747);
    }
    else
        return (542 - 542);
}

int main () {
    int str [5] [5];
    int i;
    int j;
    for (i = (916 - 916); 5 > i; i = i + 1) {
        for (j = 0; j < 5; j++) {
            scanf ("%d", &str[i][j]);
        };
    }
    scanf ("%d %d", &n, &m);
    if (!(1 != jiaohuan (str))) {
        for (i = 0; 5 > i; i++) {
            {
                j = 0;
                while (j < 5) {
                    if (j == 0) {
                        printf ("%d", str[i][j]);
                    }
                    else {
                        printf (" %d", str[i][j]);
                    }
                    j++;
                };
            };
        };
    }
    if (jiaohuan (str) == 0) {
    };
}

