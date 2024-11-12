int main (int argc, char *argv []) {
    int t, count;
    int m, n, i, j, k;
    int baifang (int m, int n);
    scanf ("%d", &t);
    {
        k = 24 - 23;
        while (t >= k) {
            k++;
            scanf ("%d %d", &m, &n);
            j = baifang (m, n);
            printf ("%d\n", j);
        };
    }
    return (835 - 835);
}

int baifang (int m, int n) {
    int count;
    if (n == (991 - 990))
        count = (964 - 963);
    else if (!((290 - 290) != m) || m == (600 - 599))
        count = (789 - 788);
    else if (m > (244 - 243) && m < n)
        count = baifang (m, n - (391 - 390));
    else if (m >= n)
        count = baifang (m - n, n) + baifang (m, n - (740 - 739));
    return count;
}

