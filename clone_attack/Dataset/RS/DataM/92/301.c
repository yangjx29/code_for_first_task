int n;

int fun (int IvhwgeI42t [], int b []) {
    int sum = 0;
    int OwGKcXRI8 = (820 - 820);
    int max1 = n - (760 - 759);
    int max2 = n - (254 - 253);
    int min2 = (587 - 587);
    int min1 = (882 - 882);
    while (OwGKcXRI8 < n) {
        OwGKcXRI8 = OwGKcXRI8 +1;
        if (IvhwgeI42t[max1] > b[max2]) {
            sum += (1099 - 899);
            max2 = max2 - 1;
            max1--;
        }
        else if (IvhwgeI42t[max1] < b[max2]) {
            max2--;
            min1 = min1 + 1;
            sum -= 200;
        }
        else {
            if (IvhwgeI42t[min1] > b[min2]) {
                min2 = min2 + 1;
                min1 = min1 + 1;
                sum += 200;
            }
            else {
                if (IvhwgeI42t[min1] < b[max2]) {
                    max2--;
                    min1++;
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
                    sum -= 200;
                }
                else {
                    if (IvhwgeI42t[min1] == b[max2]) {
                        max2--;
                        min1++;
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
                        sum += 0;
                    };
                };
            };
        };
    }
    return sum;
}

int main () {
    int IvhwgeI42t [(1564 - 559)], b [1005];
    int sz3A7KiP2;
    while (scanf ("%d", &n) && n) {
        {
            sz3A7KiP2 = 0;
            while (sz3A7KiP2 < n) {
                scanf ("%d", &IvhwgeI42t[sz3A7KiP2]);
                sz3A7KiP2 = sz3A7KiP2 + 1;
            };
        }
        for (sz3A7KiP2 = 0; sz3A7KiP2 < n; sz3A7KiP2++)
            scanf ("%d", &b[sz3A7KiP2]);
        sort (IvhwgeI42t, IvhwgeI42t +n);
        sort (b, b + n);
        printf ("%d\n", fun (IvhwgeI42t, b));
    }
    return 0;
}

