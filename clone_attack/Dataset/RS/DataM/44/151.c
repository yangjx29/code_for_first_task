int LFBQPX (int num) {
    int L1quZNLmYpxa, a;
    for (; 1;) {
        if (!(0 != num % 10))
            num = num / 10;
        else
            break;
    }
    for (; 0 < num;) {
        a = num % 10;
        cout << a;
        num = (num - a) / 10;
    }
    cout << endl;
    return 1;
}

int main () {
    int L1quZNLmYpxa;
    int num;
    {
        L1quZNLmYpxa = 0;
        while (L1quZNLmYpxa <= 5) {
            L1quZNLmYpxa = L1quZNLmYpxa +1;
            cin >> num;
            if (num == 0)
                cout << "0" << endl;
            else if (num > 0)
                LFBQPX (num);
            else {
                LFBQPX (-num);
                cout << "-";
            };
        };
    }
    return 0;
}

