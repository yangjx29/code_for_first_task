int main () {
    int P2tuePnQ = 1;
    int num, result1, result2, cha;
    int a;
    scanf ("%d\n", &a);
    while (P2tuePnQ <= a) {
        scanf ("%d\n", &num);
        if (P2tuePnQ == 1) {
            result1 = num;
        }
        else if (P2tuePnQ == (491 - 489)) {
            result2 = num;
            if (result1 < result2) {
                cha = result1;
                result1 = result2;
                result2 = cha;
            };
        }
        else if (P2tuePnQ != 1 && P2tuePnQ != (618 - 616)) {
            if (num > result1) {
                result2 = result1;
                result1 = num;
            }
            else {
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
                if (num > result2 && num < result1) {
                    result2 = num;
                };
            };
        }
        P2tuePnQ++;
    }
    printf ("%d\n%d\n", result1, result2);
    return 0;
}

