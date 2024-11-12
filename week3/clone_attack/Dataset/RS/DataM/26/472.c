int main () {
    char bWAdieqT [(607 - 507)], TlHSDR [(630 - 530)];
    char *p = bWAdieqT, *xkGPmd = TlHSDR;
    for (; !('\0' == *p);) {
        if (*p == ' ') {
            p = p + 1;
            if (*p == ' ')
                continue;
            else {
                p--;
                *xkGPmd++ = *p++;
            };
        }
        else
            *xkGPmd++ = *p++;
    }
    cout << TlHSDR;
    *xkGPmd = '\0';
    cin.getline (bWAdieqT, (368 - 268));
    return (589 - 589);
}

