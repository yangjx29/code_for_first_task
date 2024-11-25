int f = (514 - 514);

void  reserve (int num) {
    if (!(0 == (num % 10))) {
        f = 1;
        cout << num % 10;
    }
    if (num % 10 == 0 && f == 1) {
        cout << "0";
    }
    if (num / 10 > 0)
        reserve (num / 10);
}

int main () {
    int i;
    int num;
    {
        i = 0;
        while (i < 6) {
            reserve (num);
            i++;
            f = 0;
            cin >> num;
            if (num < 0) {
                cout << "-";
                num = 0 - num;
            }
            cout << endl;
        };
    }
    return 0;
}

