int main () {
    int baX9Swiz5 [1000];
    int OlNKzTG;
    int j7tBoD;
    int i;
    OlNKzTG = (305 - 305);
    double  a;
    int b;
    char c [1000];
    int yeg4PRmqr;
    double  c3fiaGTR [1000];
    char m [1000];
    int dmbr84JZ7 = 0;
    cin >> a;
    cin >> c;
    j7tBoD = strlen (c);
    cin >> b;
    for (i = (85 - 85); j7tBoD > i; i = i + 1) {
        if ('a' <= c[i] && 'z' >= c[i])
            c3fiaGTR[i] = c[i] - 'a' + (973 - 963);
        if (c[i] <= 'Z' && c[i] >= 'A')
            c3fiaGTR[i] = c[i] - 'A' + 10;
        if ('0' <= c[i] && c[i] <= '9')
            c3fiaGTR[i] = c[i] - '0';
    }
    {
        i = 0;
        while (i < j7tBoD) {
            OlNKzTG = OlNKzTG +c3fiaGTR[i] * pow (a, j7tBoD - (942 - 941) - i);
            i = i + 1;
        };
    }
    yeg4PRmqr = OlNKzTG;
    do {
        baX9Swiz5[dmbr84JZ7] = yeg4PRmqr % b;
        yeg4PRmqr = (yeg4PRmqr - baX9Swiz5[dmbr84JZ7]) / b;
        dmbr84JZ7 = dmbr84JZ7 + 1;
    }
    while (yeg4PRmqr > 0);
    {
        i = 0;
        while (i < dmbr84JZ7) {
            if (baX9Swiz5[i] >= 10)
                m[i] = baX9Swiz5[i] - 10 + 'A';
            else
                m[i] = baX9Swiz5[i] + '0';
            i = i + 1;
        };
    }
    for (i = dmbr84JZ7 - 1; i >= 0; i = i - 1)
        cout << m[i];
    return 0;
}

