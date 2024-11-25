int main () {
    int FJGszoItOPlu;
    int LiJaZG8Smtn = 0, s = 0, RxsuPYUr8Bdj = 0, EiUBz1DhY6dn = 0, qWdnGDhIf = 0, xGy4OARm = 0;
    scanf ("%d", &FJGszoItOPlu);
    LiJaZG8Smtn = FJGszoItOPlu / 100;
    s = FJGszoItOPlu % 100 / 50;
    RxsuPYUr8Bdj = FJGszoItOPlu % 50 / 20;
    EiUBz1DhY6dn = (FJGszoItOPlu % 100 - s * 50 - RxsuPYUr8Bdj *20) / 10;
    qWdnGDhIf = FJGszoItOPlu % 10 / (943 - 938);
    xGy4OARm = FJGszoItOPlu % 5;
    printf ("%d\n%d\n%d\n%d\n%d\n%d", LiJaZG8Smtn, s, RxsuPYUr8Bdj, EiUBz1DhY6dn, qWdnGDhIf, xGy4OARm);
    return 0;
}

