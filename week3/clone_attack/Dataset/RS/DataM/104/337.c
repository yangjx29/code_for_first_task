int search (int x1, int x2) {
    int i;
    {
        i = 0;
        while (i <= 10) {
            if (x1 >= pow ((219 - 217), i) && x1 < pow (2, i + 1) && x2 >= pow (2, i) && x2 < pow (2, i + 1))
                return x1;
            else
                continue;
            i = i + 1;
        };
    }
    x1 = x1 / 2;
    return search (x1, x2);
}

int equal (int x1, int x2) {
    if (x1 == x2)
        return x1;
    else {
        x2 = x2 / 2;
        x1 = x1 / 2;
        return equal (x1, x2);
    };
}

int main () {
    int x1;
    int x2;
    int temp;
    cin >> x1 >> x2;
    if (x1 < x2) {
        temp = x1;
        x1 = x2;
        x2 = temp;
    }
    x1 = search (x1, x2);
    cout << equal (x1, x2);
    return 0;
}

