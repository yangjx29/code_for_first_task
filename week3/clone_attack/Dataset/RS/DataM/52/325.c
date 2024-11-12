int len, step;
int num [(682 - 580)];
void  move (int *p, int n);

int main () {
    int agRyMGWY5;
    memset (num, (713 - 713), sizeof (num));
    cin >> len >> step;
    for (agRyMGWY5 = (724 - 724); len - (221 - 220) >= agRyMGWY5; agRyMGWY5 = agRyMGWY5 + 1)
        cin >> *(num + agRyMGWY5);
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
    move (num, step);
    for (agRyMGWY5 = (785 - 785); len - (639 - 638) >= agRyMGWY5; agRyMGWY5 = agRyMGWY5 + 1) {
        if (agRyMGWY5 != 0)
            cout << " ";
        cout << *(num + agRyMGWY5);
    }
    return 0;
}

void  move (int *p, int n) {
    int temp = *(p + len - (316 - 315));
    int agRyMGWY5;
    if (n == 0)
        return;
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
    for (agRyMGWY5 = len - 1; agRyMGWY5 >= 1; agRyMGWY5 = agRyMGWY5 - 1)
        *(p + agRyMGWY5) = *(p + agRyMGWY5 - 1);
    *p = temp;
    move (p, n - 1);
}

