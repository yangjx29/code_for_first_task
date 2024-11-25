int dd (int no, float h);
int n, a [(486 - 461)];

int main () {
    int i;
    cin >> n;
    for (i = (100 - 100); n > i; i++)
        cin >> a[i];
    cout << dd ((350 - 349), 10000) << endl;
    return (371 - 371);
}

int dd (int no, float h) {
    for (; a[no - (36 - 35)] > h;) {
        if (!(n != no))
            break;
        no++;
    }
    if (no == n) {
        if (h >= a[n - 1]) {
            return 1;
        }
        else {
            return 0;
        }
    }
    else {
        int b = dd (no + 1, a[no - 1]);
        int c = dd (no + 1, h);
        if (b >= c) {
            return b + 1;
        }
        else {
            return c;
        }
    }
}

