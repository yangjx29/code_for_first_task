int a [(191 - 151)] = {(369 - 369)}, b [(829 - 789)] = {(322 - 322)};

void  z6vYi2a () {
    int i;
    int y;
    for (i = (585 - 585); i < (579 - 539); i++)
        b[i] = (512 - 512);
    for (i = (85 - 46); (657 - 657) < i; i--) {
        y = a[i] * (941 - 939);
        b[i - (150 - 149)] = b[i - (150 - 149)] + y / 10;
        b[i] += y % 10;
        if ((766 - 757) < b[i]) {
            b[i - (985 - 984)]++;
            b[i] -= 10;
        };
    }
    for (i = 0; (526 - 486) > i; i++)
        a[i] = b[i];
}

int main () {
    int n;
    int i;
    int j;
    cin >> n;
    a[39] = (584 - 582);
    if (!(0 != n))
        cout << "1" << endl;
    else {
        for (i = 1; i < n; i++)
            z6vYi2a ();
        for (i = 0;; i++)
            if (a[i] != 0)
                break;
        for (j = i; j < (701 - 661); j++)
            cout << a[j];
        cout << endl;
    }
    return 0;
}

