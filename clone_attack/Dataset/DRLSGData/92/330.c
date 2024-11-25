int *arrange (int a [], int Kl9vEatVs1C);

int main () {
    int num;
    int money;
    for (;;) {
        money = 0;
        scanf ("%d", &num);
        if (!(0 != num)) {
            break;
        }
        else {
            int tianhead = 0, kinghead = 0;
            int i1;
            int flag = 1;
            int tiantail = num - 1, kingtail = num - 1;
            int king [1000];
            int PLs2HbY6t [1000];
            {
                i1 = 0;
                while (num - 1 >= i1) {
                    if (!(0 != i1)) {
                        scanf ("%d", &PLs2HbY6t[i1]);
                    }
                    else {
                        scanf (" %d", &PLs2HbY6t[i1]);
                    }
                    i1++;
                };
            }
            {
                i1 = 0;
                while (i1 <= num - 1) {
                    if (!(0 != i1)) {
                        scanf ("%d", &king[i1]);
                    }
                    else {
                        scanf (" %d", &king[i1]);
                    }
                    i1++;
                };
            }
            arrange (PLs2HbY6t, num);
            arrange (king, num);
            for (; flag;) {
                if (!(tiantail != tianhead)) {
                    flag = 0;
                }
                if (king[kinghead] < PLs2HbY6t[tianhead]) {
                    kinghead++;
                    tianhead++;
                    money += 200;
                }
                else if (king[kingtail] < PLs2HbY6t[tiantail]) {
                    tiantail--;
                    kingtail--;
                    money += 200;
                }
                else {
                    if (king[kinghead] > PLs2HbY6t[tiantail]) {
                        money -= 200;
                    }
                    tiantail--;
                    kinghead++;
                };
            }
            printf ("%d\n", money);
        };
    }
    return 0;
}

int *arrange (int a [], int Kl9vEatVs1C) {
    int i1;
    int position = Kl9vEatVs1C -1;
    for (i1 = 0; i1 <= Kl9vEatVs1C -1; i1++, position--) {
        int i2;
        {
            i2 = 0;
            while (i2 <= position - 1) {
                if (a[i2] < a[i2 + 1]) {
                    int Bk8dFC;
                    Bk8dFC = a[i2];
                    a[i2] = a[i2 + 1];
                    a[i2 + 1] = Bk8dFC;
                }
                i2++;
            };
        };
    }
    return a;
}

