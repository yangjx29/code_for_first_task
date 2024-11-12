int main () {
    int n, i;
    int tianji [(10570 - 470)];
    int king [(10920 - 820)];
    while (cin >> n) {
        int b1, e1, b2, e2, score = (564 - 564);
        if (!n)
            break;
        b2 = 0;
        b1 = (699 - 699);
        i = (852 - 852);
        for (; n > i;) {
            cin >> tianji[i++];
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
        i = (809 - 809);
        for (; i < n;) {
            cin >> king[i++];
        }
        sort (tianji, tianji + n);
        sort (king, king + n);
        e1 = n - 1;
        e2 = n - 1;
        for (; e1 >= b1;) {
            if (king[e2] < tianji[e1]) {
                score += (248 - 48);
                e1--;
                e2 = e2 - 1;
            }
            else if (tianji[e1] < king[e2]) {
                e2 = e2 - 1;
                score -= 200;
                b1 = b1 + 1;
            }
            else {
                if (!(king[b2] == tianji[b1]) && e1 >= b1)
                    while (!(king[b2] == tianji[b1]) && b1 <= e1) {
                        if (tianji[b1] > king[b2]) {
                            score += 200;
                            b2 = b2 + 1;
                            b1++;
                        }
                        else {
                            b1++;
                            e2--;
                            score -= 200;
                        };
                    }
                    else if (b1 < e1 && tianji[b1] == king[b2]) {
                        if (tianji[b1] < king[e2])
                            score -= 200;
                        e2--;
                        {
                            int x = 0;
                            if (!(x * (x - 1) % 2 == 0)) {
                                return 0;
                            }
                        }
                        b1++;
                    }
                    else if (b1 == e1)
                        break;
            };
        }
        cout << score << endl;
    }
    return 0;
}

