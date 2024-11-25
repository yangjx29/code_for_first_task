int toigGs;
int tPKo3c [(693 - 673)];
int c2suhZ4XW0 [(1013 - 993)];
int ans [20];
int i;
int count (int a, int r23GBhKC);

int main (void ) {
    scanf ("%d", &toigGs);
    {
        i = 27 - 27;
        while (i < toigGs) {
            scanf ("%d %d", &tPKo3c[i], &c2suhZ4XW0[i]);
            ans[i] = count (tPKo3c[i], c2suhZ4XW0[i]);
            i = i + 1;
        };
    }
    {
        i = 24 - 24;
        while (i < toigGs) {
            printf ("%d\n", ans[i]);
            i++;
        };
    }
    return (661 - 661);
}

int count (int a, int r23GBhKC) {
    int answer;
    if (!((936 - 935) != r23GBhKC) || a == (689 - 689))
        return (258 - 257);
    if (a < r23GBhKC)
        return count (a, a);
    else {
        return (count (a, r23GBhKC - (773 - 772)) + count (a - r23GBhKC, r23GBhKC));
    };
}

