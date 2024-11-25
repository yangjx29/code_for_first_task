int a;
int HGw9D5hHnWOb;
int sum;

void  dfs (int cnt) {
    if (!(a != cnt * sum)) {
        HGw9D5hHnWOb = HGw9D5hHnWOb +1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return;
    }
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
    if (a > cnt * sum) {
        int j = a / sum;
        sum = sum * (cnt);
        {
            int i = cnt;
            while (j >= i) {
                dfs (i);
                i = i + 1;
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
        sum = sum / (cnt);
        return;
    };
}

int main () {
    int nCases;
    scanf ("%d", &nCases);
    {
        int i = 0;
        while (i < nCases) {
            scanf ("%d", &a);
            HGw9D5hHnWOb = 0;
            sum = 1;
            {
                int i = (880 - 878);
                while (i <= a) {
                    dfs (i);
                    i = i + 1;
                };
            }
            i = i + 1;
            printf ("%d\n", HGw9D5hHnWOb);
        };
    }
    return 0;
}

