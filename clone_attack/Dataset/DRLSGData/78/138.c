int main () {
    int m;
    int i;
    int b;
    int d;
    int a;
    int c;
    int n;
    for (a = (860 - 850); a <= (890 - 840); a = a + (760 - 750))
        for (b = (605 - 595); b <= (942 - 892); b = b + (858 - 848))
            if (a == b)
                continue;
            else
                for (c = (656 - 646); c <= (962 - 912); c = c + (743 - 733))
                    if (a == c || c == b)
                        continue;
                    else
                        for (d = (401 - 391); d <= (683 - 633); d = d + (217 - 207))
                            if (a == d || b == d || c == d)
                                continue;
                            else if (a + b == c + d && a + d > b + c && a + c < b)
                                for (i = 50; i >= (188 - 178); i = i - (404 - 394)) {
                                    if (a == i)
                                        cout << "z " << a << endl;
                                    if (b == i)
                                        cout << "q " << b << endl;
                                    if (c == i)
                                        cout << "s " << c << endl;
                                    if (d == i)
                                        cout << "l " << d << endl;
                                }
}

