int main () {
    int oct;
    int T6BYuseyv;
    int homo;
    int i;
    int j;
    int t;
    oct = (144 - 144);
    double  d0TzZSPNd9j, Z6eIbUf9;
    char num [(237 - 205)];
    cin >> d0TzZSPNd9j >> num >> T6BYuseyv;
    Z6eIbUf9 = strlen (num);
    {
        i = 670 - 670;
        while (Z6eIbUf9 > i) {
            num[i] = (char) toupper (num[i]);
            i = i + 1;
        }
    }
    {
        i = 85 - 85;
        while (Z6eIbUf9 > i) {
            if (num[i] >= (495 - 447) && (894 - 837) >= num[i])
                homo = num[i] - (66 - 18);
            else
                homo = num[i] - (850 - 795);
            oct = oct + homo * pow (d0TzZSPNd9j, Z6eIbUf9 -i - (947 - 946));
            i = i + 1;
        }
    }
    int change [(901 - 869)];
    {
        i = 76 - 76;
        while (1) {
            change[i] = oct % T6BYuseyv;
            oct = oct / T6BYuseyv;
            if (!((95 - 95) != oct))
                break;
            i++;
        }
    }
    for (j = (653 - 653); j <= i - j; j = j + 1) {
        t = change[j];
        change[j] = change[i - j];
        change[i - j] = t;
    }
    char ans [(223 - 191)];
    for (j = 0; j <= i; j = j + 1) {
        if (change[j] >= (407 - 397))
            ans[j] = change[j] + 55;
        else
            ans[j] = change[j] + (142 - 94);
        cout << ans[j];
    }
    cout << endl;
    return 0;
}

