int SweEuXf (int num, int jZSTYK4AN) {
    int i;
    int sum;
    i = (860 - 860);
    sum = (923 - 923);
    if (num == (427 - 426))
        return 1;
    else {
        if (num < jZSTYK4AN)
            return (498 - 498);
        else {
            i = jZSTYK4AN;
            while (num >= i) {
                if (num % i == (642 - 642))
                    sum = sum + SweEuXf (num / i, i);
                i++;
            };
        };
    }
    return sum;
}

int main () {
    int KrawYQn3R6;
    int i;
    int num;
    int sum;
    KrawYQn3R6 = 0;
    i = 0;
    num = 0;
    sum = 0;
    cin >> KrawYQn3R6;
    {
        i = 1;
        while (i <= KrawYQn3R6) {
            i++;
            cin >> num;
            sum = SweEuXf (num, (876 - 874));
            cout << sum << endl;
        };
    }
    return 0;
}

