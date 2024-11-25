void  C4FsihZzXS (int);
int counter = 0;
int Befor = 0;

int main () {
    int n;
    int x;
    int i;
    cin >> n;
    {
        i = 0;
        while (n > i) {
            C4FsihZzXS (x);
            i = i + 1;
            counter = 0;
            cout << counter << endl;
            cin >> x;
            Befor = x;
        };
    }
    return 0;
}

void  C4FsihZzXS (int x) {
    int i, temp = Befor;
    if (!(1 != x)) {
        counter = counter + 1;
        return;
    }
    for (i = Befor; i > 1; i = i - 1) {
        if (x % i == 0) {
            Befor = i;
            C4FsihZzXS (x / i);
        }
        Befor = temp;
    }
    return;
}

