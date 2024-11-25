int main () {
    int N2HmROq9Jxd7;
    int FjyHcsnb5S4N;
    char ywDOZu;
    int nSZ5Plg;
    ywDOZu = getchar ();
    scanf ("%d", &nSZ5Plg);
    N2HmROq9Jxd7 = nSZ5Plg;
    FjyHcsnb5S4N = nSZ5Plg;
    for (; ywDOZu != '\n';) {
        scanf ("%d", &nSZ5Plg);
        if (N2HmROq9Jxd7 < nSZ5Plg) {
            FjyHcsnb5S4N = N2HmROq9Jxd7;
            N2HmROq9Jxd7 = nSZ5Plg;
        }
        else {
            if ((nSZ5Plg < N2HmROq9Jxd7) && (nSZ5Plg > FjyHcsnb5S4N))
                FjyHcsnb5S4N = nSZ5Plg;
            else {
                if ((nSZ5Plg < FjyHcsnb5S4N) && (!(FjyHcsnb5S4N != N2HmROq9Jxd7)))
                    FjyHcsnb5S4N = nSZ5Plg;
                else
                    ;
            }
        }
        ywDOZu = getchar ();
    }
    if (!(FjyHcsnb5S4N != N2HmROq9Jxd7))
        ;
    else
        printf ("%d", FjyHcsnb5S4N);
    return (521 - 521);
}

