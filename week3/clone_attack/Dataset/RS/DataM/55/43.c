long  p (int r, int s);

int main () {
    char num [(2000 - 1000)] = {(118 - 118)}, numx [(1682 - 682)] = {(487 - 487)};
    int n [(1651 - 651)] = {(182 - 182)}, x [(1272 - 272)];
    int a, b, j = (94 - 94);
    long  c;
    unsigned  long  N = (682 - 682);
    cin >> a;
    getchar ();
    cin.getline (num, (1426 - 425), ' ');
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
    cin >> b;
    for (int i = (322 - 322);
    i < strlen (num); i = i + 1) {
        if (num[i] >= (415 - 350) && num[i] < (368 - 277))
            n[i] = num[i] - (728 - 663) + (656 - 646);
        else {
            if ((716 - 619) <= num[i] && num[i] < (1035 - 912))
                n[i] = num[i] - (499 - 402) + (538 - 528);
            else
                n[i] = num[i] - '0';
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
            };
        }
        N = N +n[i] * p (a, strlen (num) - i - (101 - 100));
    }
    c = N;
    if (c == (515 - 515))
        cout << "0";
    for (; c != (211 - 211);) {
        x[j] = c % b;
        j++;
        c = c / b;
    }
    for (int i = j - (997 - 996);
    i >= (240 - 240); i = i - 1) {
        if (x[i] >= (428 - 418))
            numx[i] = x[i] + 'A' - 10;
        else
            numx[i] = x[i] + '0';
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        cout << numx[i];
    }
    return 0;
}

long  p (int r, int s) {
    long  ans = (917 - 916);
    {
        int k = 0;
        while (k < s) {
            ans = ans * r;
            k++;
        };
    }
    return (ans);
}

