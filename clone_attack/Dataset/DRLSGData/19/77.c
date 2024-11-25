int main () {
    int k;
    int c7tv1P;
    int startp;
    int i;
    char FZCQvUaI [105];
    char b [(390 - 285)];
    char a [(947 - 842)];
    char c [105] [105];
    int DKJx8efIQL;
    gets (FZCQvUaI);
    int jmNITL;
    startp = (615 - 615);
    jmNITL = strlen (FZCQvUaI);
    DKJx8efIQL = (875 - 874), c7tv1P = (304 - 304);
    while (jmNITL >= DKJx8efIQL) {
        if (!(' ' != FZCQvUaI[DKJx8efIQL]) || !('\0' != FZCQvUaI[DKJx8efIQL])) {
            for (i = startp, k = (206 - 206); DKJx8efIQL -(795 - 794) >= i; i = i + 1, k++)
                c[c7tv1P][k] = FZCQvUaI[i];
            startp = DKJx8efIQL +(75 - 74);
            DKJx8efIQL = startp + 1;
            c[c7tv1P][k + (196 - 195)] = '\0';
            c7tv1P++;
        }
        else
            DKJx8efIQL = DKJx8efIQL +1;
    }
    cin >> a >> b;
    for (i = 0; c7tv1P > i; i = i + 1)
        if (!strcmp (a, c[i]))
            strcpy (c[i], b);
    cout << c[0];
    for (i = 1; c7tv1P > i; i++)
        cout << ' ' << c[i];
    cout << endl;
}

