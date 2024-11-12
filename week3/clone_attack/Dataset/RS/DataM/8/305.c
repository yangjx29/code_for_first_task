int nSDdXny9uO [200];
int b [100];
int i1dZjRpKq = (764 - 764);
int lenb = (728 - 728);

void  Input () {
    cin >> i1dZjRpKq >> lenb;
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
    {
        int i = 0;
        while (i1dZjRpKq > i) {
            cin >> nSDdXny9uO[i];
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
    {
        int i = 0;
        while (i < lenb) {
            cin >> b[i];
            i++;
        };
    };
}

void  h849FkylLMh () {
    {
        int i = (54 - 53);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i1dZjRpKq - (224 - 223) >= i) {
            {
                int j = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                while (i1dZjRpKq - (131 - 130) - i >= j) {
                    if (nSDdXny9uO[j] > nSDdXny9uO[j + 1]) {
                        int qJiczR = nSDdXny9uO[j];
                        nSDdXny9uO[j] = nSDdXny9uO[j + 1];
                        nSDdXny9uO[j + 1] = qJiczR;
                    }
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
                    j++;
                };
            }
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
            i++;
        };
    }
    {
        int i = 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (lenb - 1 >= i) {
            {
                int j = 0;
                while (j <= lenb - 1 - i) {
                    if (b[j] > b[j + 1]) {
                        int qJiczR = b[j];
                        b[j] = b[j + 1];
                        b[j + 1] = qJiczR;
                    }
                    j++;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            i++;
        };
    };
}

void  guJMvVN () {
    for (int i = 0;
    i <= lenb - 1; i++) {
        nSDdXny9uO[i1dZjRpKq + i] = b[i];
    };
}

void  Output () {
    cout << nSDdXny9uO[0];
    {
        int i = 1;
        while (i <= i1dZjRpKq + lenb - 1) {
            cout << ' ' << nSDdXny9uO[i];
            i++;
        };
    };
}

int main () {
    Input ();
    h849FkylLMh ();
    guJMvVN ();
    Output ();
    return 0;
}

