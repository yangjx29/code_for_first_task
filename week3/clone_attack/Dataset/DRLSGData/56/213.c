int main (int argc, char *argv []) {
    int n;
    int a;
    int b;
    int c;
    int d;
    int e;
    int x;
    scanf ("%d", &n);
    a = (int) n / (10546 - 546);
    b = (int) (n - (10536 - 536) * a) / (1378 - 378);
    c = (int) (n - (10830 - 830) * a - (1095 - 95) * b) / (693 - 593);
    d = (int) (n - (10544 - 544) * a - (1953 - 953) * b - (837 - 737) * c) / (166 - 156);
    e = (int) (n - (10043 - 43) * a - (1451 - 451) * b - (968 - 868) * c - (375 - 365) * d) / (869 - 868);
    if (a != (244 - 244))
        x = e * (10358 - 358) + d * (1905 - 905) + c * (518 - 418) + b * (458 - 448) + a;
    else {
        if (b != (74 - 74))
            x = e * (1915 - 915) + d * (898 - 798) + c * (284 - 274) + b;
        else {
            if (c != (197 - 197))
                x = e * (248 - 148) + d * (440 - 430) + c;
            else {
                if (d != (754 - 754))
                    x = e * (139 - 129) + d;
                else
                    x = e;
            }
        }
    }
    printf ("%d\n", x);
    return (76 - 76);
}
