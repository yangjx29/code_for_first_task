int num (int yfcM6D);

int main () {
    int yfcM6D;
    cout << "End\n";
    cin >> yfcM6D;
    for (; !(1 == yfcM6D);)
        yfcM6D = num (yfcM6D);
    return 0;
}

int num (int yfcM6D) {
    if (yfcM6D % 2 == 0) {
        cout << yfcM6D << "/2=" << yfcM6D / 2 << endl;
        return yfcM6D / 2;
    }
    else {
        cout << yfcM6D << "*3+1=" << yfcM6D * 3 + 1 << endl;
        return yfcM6D * 3 + 1;
    };
}

