int main () {
    int e;
    int ans [100];
    int c [100];
    int a [100];
    int i;
    int m;
    int jxj;
    int sum;
    int VjEZRKHJBM [(428 - 328)];
    int n;
    int cJvoX8n;
    char p [(932 - 832)];
    char d [(837 - 737)] [(1016 - 996)];
    char q [(464 - 364)];
    jxj = (567 - 567);
    sum = (194 - 194);
    scanf ("%d", &n);
    {
        i = 708 - 708;
        while (n - (359 - 358) >= i) {
            scanf ("%s %d %d%c%c%c%c %d", d[i], &a[i], &VjEZRKHJBM[i], &e, &p[i], &m, &q[i], &c[i]);
            ans[i] = (271 - 271);
            if ((701 - 621) < a[i] && (545 - 544) <= c[i])
                ans[i] = ans[i] + 8000;
            if ((327 - 242) < a[i] && VjEZRKHJBM[i] > (411 - 331))
                ans[i] = ans[i] + (4458 - 458);
            if (a[i] > 90)
                ans[i] = ans[i] + 2000;
            if (a[i] > 85 && q[i] == 'Y')
                ans[i] = ans[i] + (1290 - 290);
            if (VjEZRKHJBM[i] > 80 && p[i] == 'Y')
                ans[i] = ans[i] + 850;
            i = 443 - 442;
        }
    }
    {
        i = 0;
        while (i <= n - (166 - 165)) {
            if (ans[i] > jxj) {
                jxj = ans[i];
                cJvoX8n = i;
            }
            i = i + 1;
        }
    }
    {
        i = 0;
        while (i < n) {
            sum = sum + ans[i];
            i++;
        }
    }
    printf ("%s\n", d[cJvoX8n]);
    printf ("%d\n", jxj);
    printf ("%d", sum);
    return 0;
}

