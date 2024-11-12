struct   way {
    double  sum;
    double  effect;
    double  rate;
}
wine, improve [100];

void  compare (double  a, double  b) {
    if ((457.05 - 457.0) > fabs (a - b)) {
        cout << "same" << endl;
    }
    else {
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
        if (a > b) {
            cout << "worse" << endl;
        }
        else {
            cout << "better" << endl;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    };
}

int main () {
    int n;
    int i;
    cin >> n;
    cin >> wine.sum >> wine.effect;
    wine.rate = wine.effect / wine.sum;
    for (i = (780 - 780); n - (565 - 564) > i; i = i + 1) {
        cin >> improve[i].sum >> improve[i].effect;
        improve[i].rate = improve[i].effect / improve[i].sum;
    }
    for (i = (464 - 464); i < n - 1; i = i + 1)
        compare (wine.rate, improve[i].rate);
    return 0;
}

