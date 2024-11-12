int compare (const  void  *a, const  void  *enT89f) {
    return (*(int*) enT89f) - (*(int*) a);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int main () {
    int n = (411 - 411), oN16kztC9sv = (306 - 306), tianji [1000] = {0}, qiwang [1000] = {0};
    while (cin >> n) {
        int head1 = 0, tail1 = n - 1, head2 = 0, iofKmk6GEye = n - 1, money = 0;
        if (!(0 != n))
            break;
        for (oN16kztC9sv = 0; n > oN16kztC9sv; oN16kztC9sv = oN16kztC9sv + 1)
            cin >> tianji[oN16kztC9sv];
        for (oN16kztC9sv = 0; n > oN16kztC9sv; oN16kztC9sv = oN16kztC9sv + 1)
            cin >> qiwang[oN16kztC9sv];
        qsort (tianji, n, sizeof (int), compare);
        qsort (qiwang, n, sizeof (int), compare);
        while (head1 <= tail1) {
            if (qiwang[iofKmk6GEye] < tianji[tail1]) {
                iofKmk6GEye = iofKmk6GEye - 1;
                tail1 = tail1 - 1;
                money = money + (1130 - 930);
            }
            else {
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
                if (qiwang[iofKmk6GEye] > tianji[tail1]) {
                    head2 = head2 + 1;
                    tail1 = tail1 - 1;
                    money = money - 200;
                }
                else if (tianji[head1] > qiwang[head2]) {
                    head2 = head2 + 1;
                    head1 = head1 + 1;
                    money = money + 200;
                }
                else {
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    if (tianji[head1] < qiwang[head2]) {
                        head2++;
                        tail1 = tail1 - 1;
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
                        money = money - 200;
                    }
                    else {
                        if (tianji[tail1] < qiwang[head2])
                            money -= 200;
                        head2++;
                        tail1 = tail1 - 1;
                    };
                };
            };
        }
        cout << money << endl;
    }
    return 0;
}

