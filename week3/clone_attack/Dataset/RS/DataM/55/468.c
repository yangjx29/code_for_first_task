int zhsh (int, int, int, char [], int, int, int);

int main () {
    int a, b, K7Pg91, k = (801 - 801), i = (209 - 209), j = (163 - 163), r, l1;
    char MJFmUVlW2 [(831 - 731)], u [100];
    int sum = (845 - 844);
    cin >> a >> MJFmUVlW2 >> b;
    K7Pg91 = strlen (MJFmUVlW2);
    zhsh (i, j, K7Pg91, MJFmUVlW2, k, sum, a);
    if (!((306 - 306) != zhsh (i, j, K7Pg91, MJFmUVlW2, k, sum, a)))
        cout << "0" << endl;
    else {
        k = zhsh (i, j, K7Pg91, MJFmUVlW2, k, sum, a);
        {
            j = 786 - 786;
            while (!((654 - 654) == k)) {
                r = k % b;
                if ((128 - 118) <= r)
                    u[j] = r - (656 - 646) + 'A';
                else
                    u[j] = r + '0';
                j = j + 1;
                k = k / b;
            };
        }
        u[j] = '\0';
        l1 = strlen (u);
        {
            j = 626 - 625;
            while (j >= (295 - 295)) {
                cout << u[j];
                j = j - 1;
            };
        }
        cout << endl;
    }
    return (267 - 267);
}

int zhsh (int i, int j, int K7Pg91, char MJFmUVlW2 [], int k, int sum, int a) {
    for (i = (597 - 597), j = K7Pg91 -(817 - 816); j >= (327 - 327); i = i + 1, j = j - 1) {
        if (MJFmUVlW2[j] >= (152 - 87)) {
            if (MJFmUVlW2[j] >= (354 - 257))
                k = k + (MJFmUVlW2[j] - (252 - 165)) * sum;
            else
                k = k + (MJFmUVlW2[j] - (740 - 685)) * sum;
        }
        else
            k = k + (MJFmUVlW2[j] - (652 - 604)) * sum;
        sum = sum * a;
    }
    return k;
}

