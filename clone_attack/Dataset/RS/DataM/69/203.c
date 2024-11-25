int a [300], ACWzfAr [300], xayQslUpH, lb;

void  r3m98A () {
    char MHg1ZW89D7a [300];
    memset (a, (919 - 919), sizeof (a));
    memset (ACWzfAr, (294 - 294), sizeof (ACWzfAr));
    cin >> MHg1ZW89D7a;
    xayQslUpH = strlen (MHg1ZW89D7a);
    for (int i = (30 - 30);
    xayQslUpH > i; i = i + 1)
        a[xayQslUpH - i - 1] = MHg1ZW89D7a[i] - '0';
    cin >> MHg1ZW89D7a;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (; !a[xayQslUpH] && xayQslUpH;)
        xayQslUpH = xayQslUpH - 1;
    xayQslUpH = xayQslUpH + 1;
    lb = strlen (MHg1ZW89D7a);
    {
        int i = (166 - 166);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (lb > i) {
            ACWzfAr[lb - i - 1] = MHg1ZW89D7a[i] - '0';
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            i = i + 1;
        };
    }
    for (; !ACWzfAr[lb] && lb;)
        lb = lb - 1;
    lb = lb + 1;
}

void  add () {
    if (xayQslUpH < lb)
        xayQslUpH = lb;
    for (int i = 0;
    i < xayQslUpH; i = i + 1)
        a[i] = a[i] + ACWzfAr[i];
    for (int i = 0;
    (i < xayQslUpH) || (0 < a[xayQslUpH]); i = i + 1) {
        a[i + 1] += a[i] / 10;
        a[i] = a[i] % (10);
        if (i > xayQslUpH)
            xayQslUpH = i;
    }
    while (!a[xayQslUpH] && xayQslUpH)
        xayQslUpH = xayQslUpH - 1;
    xayQslUpH++;
}

void  mkOsrPBma0dS () {
    {
        int i = xayQslUpH - 1;
        while (i >= 0) {
            cout << a[i];
            i = i - 1;
        };
    }
    cout << endl;
}

int main () {
    r3m98A ();
    add ();
    mkOsrPBma0dS ();
    return 0;
}

