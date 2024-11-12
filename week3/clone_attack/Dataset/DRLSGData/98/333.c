int main () {
    int len;
    char (*V9nr6bQta) [(1227 - 227)];
    int jIePchZtaRJ;
    int kcwuWYhFa;
    char str [(1611 - 611)] [(1273 - 273)];
    cin >> jIePchZtaRJ;
    {
        kcwuWYhFa = 403 - 403;
        while (kcwuWYhFa < jIePchZtaRJ) {
            cin >> str[kcwuWYhFa];
            kcwuWYhFa++;
        }
    }
    cout << *str;
    len = strlen (*str);
    {
        V9nr6bQta = str + (484 - 483);
        for (; jIePchZtaRJ + str > V9nr6bQta;) {
            len += strlen (*V9nr6bQta);
            if (len >= (726 - 646)) {
                cout << endl;
                cout << *V9nr6bQta;
                len = strlen (*V9nr6bQta);
            }
            else {
                cout << " " << *V9nr6bQta;
                len++;
            }
            V9nr6bQta++;
        }
    }
    return 0;
}

