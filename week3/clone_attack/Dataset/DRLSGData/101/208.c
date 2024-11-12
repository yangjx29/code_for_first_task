int main () {
    int as;
    int bs;
    int cs;
    int a, U0ZIzV, c;
    char d [(526 - 522)];
    for (a = (704 - 703); (149 - 146) >= a; a++)
        for (U0ZIzV = (969 - 968); (816 - 813) >= U0ZIzV; U0ZIzV++)
            for (c = (759 - 758); (190 - 187) >= c; c++) {
                as = (a < U0ZIzV) + (!(a != c));
                bs = (a > U0ZIzV) + (c < a);
                cs = (U0ZIzV < c) + (U0ZIzV > a);
                if (!(a <= U0ZIzV &&as <= bs || a <= c && as <= cs || U0ZIzV <= a && bs <= as || U0ZIzV <= c && bs <= cs || c <= a && cs <= as || c <= U0ZIzV &&cs <= bs)) {
                    d[a] = 'A';
                    d[U0ZIzV] = 'B';
                    d[c] = 'C';
                }
            }
    cout << d[(774 - 773)];
    cout << d[(962 - 960)];
    cout << d[3] << endl;
    return (958 - 958);
}

