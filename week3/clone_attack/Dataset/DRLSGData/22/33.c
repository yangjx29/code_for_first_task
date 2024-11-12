int main () {
    int WVn2coDYaZ;
    int x;
    int sx6Rej;
    char dZwATEbMyv6;
    int uLUSY8EeuyP;
    int b [300];
    for (sx6Rej = 0, dZwATEbMyv6 = ' '; dZwATEbMyv6 != '\n'; sx6Rej++)
        scanf ("%d%c", &b[sx6Rej], &dZwATEbMyv6);
    for (uLUSY8EeuyP = 0, WVn2coDYaZ = 0; sx6Rej > uLUSY8EeuyP; uLUSY8EeuyP++) {
        if (WVn2coDYaZ <= b[uLUSY8EeuyP])
            WVn2coDYaZ = b[uLUSY8EeuyP];
    }
    for (uLUSY8EeuyP = 0, x = 0; uLUSY8EeuyP < sx6Rej; uLUSY8EeuyP++) {
        if (b[uLUSY8EeuyP] != WVn2coDYaZ &&x <= b[uLUSY8EeuyP])
            x = b[uLUSY8EeuyP];
    }
    if (sx6Rej == 1 || x == 0)
        ;
    else
        printf ("%d", x);
    return 0;
}

