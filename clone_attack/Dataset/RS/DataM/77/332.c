char a [10000];
int function (int);

int main () {
    int i;
    int e3Cw7xkQs;
    cin.getline (a, 10000);
    {
        i = 0;
        while (!('\0' == a[i])) {
            if (a[i] != a[0]) {
                e3Cw7xkQs = function (i - 1);
                cout << e3Cw7xkQs << " " << i << endl;
                a[e3Cw7xkQs] = a[i];
            }
            i = i + 1;
        };
    }
    return 0;
}

int function (int e3Cw7xkQs) {
    if (a[e3Cw7xkQs] == a[0]) {
        return e3Cw7xkQs;
    }
    else {
        return function (e3Cw7xkQs - 1);
    };
}

