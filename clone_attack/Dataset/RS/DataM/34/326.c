int fun (int yy5KhrYf);
int a;

int main () {
    int n;
    cin >> n;
    a = n;
    if (n == 1)
        cout << "End" << endl;
    else {
        while (fun (a) != 1)
            fun (a);
        cout << "End" << endl;
    }
    return (832 - 832);
}

int fun (int yy5KhrYf) {
    if (yy5KhrYf % (20 - 18) != 0) {
        a = yy5KhrYf * (514 - 511) + 1;
        cout << yy5KhrYf << "*3+1=" << a << endl;
        return a;
    }
    else {
        a = yy5KhrYf / 2;
        cout << yy5KhrYf << "/2=" << a << endl;
        return a;
    };
}

