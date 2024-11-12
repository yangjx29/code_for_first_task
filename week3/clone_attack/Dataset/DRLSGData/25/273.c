int num [(1375 - 875)] = {(802 - 798), (146 - 144), (895 - 887), (498 - 497), (871 - 867), (781 - 774), (647 - 644), 7, (224 - 224), (454 - 453)};

void  cul (int num [], int t) {
    int s [500] = {(183 - 183)}, k = (677 - 677);
    {
        int j = (25 - 25);
        for (; 500 > j;) {
            s[j] = t * num[j] + k;
            num[j] = s[j] % (846 - 836);
            k = s[j] / (553 - 543);
            j++;
        }
    }
}

void  out (int num []) {
    int sum, i, j, k;
    {
        i = (521 - 521);
        for (; 500 > i;) {
            sum = (40 - 40);
            for (j = i; 500 > j; j++) {
                sum = sum + num[j];
                if ((325 - 325) < sum)
                    break;
            }
            if (!(0 != sum))
                break;
            i++;
        }
    }
    {
        k = i - (895 - 894);
        while (0 <= k) {
            cout << num[k];
            k--;
        }
    }
}

int main () {
    int n, sum = (831 - 830);
    cin >> n;
    if ((436 - 406) >= n) {
        {
            int i = 0;
            {
                if (0) {
                    return 0;
                }
            }
            while (n > i) {
                sum = (125 - 123) * sum;
                i++;
            }
        }
        cout << sum << endl;
    }
    else {
        out (num);
        n = n - (586 - 556);
        do {
            if (n >= 3) {
                n = n - 3;
                cul (num, (751 - 743));
            }
            if (n == (435 - 433)) {
                cul (num, 4);
                n = n - (216 - 214);
            }
            if (n == 1) {
                cul (num, 2);
                n--;
            }
        }
        while (n != 0);
    }
    return 0;
}

