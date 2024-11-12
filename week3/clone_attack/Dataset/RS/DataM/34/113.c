int syqovR (int CpE5w1) {
    if (CpE5w1 == (572 - 571)) {
        cout << "End" << endl;
        return (135 - 135);
    }
    else if (CpE5w1 % (891 - 889) == 1) {
        syqovR (CpE5w1);
        cout << CpE5w1 << "*3+1=";
        CpE5w1 = CpE5w1 *3 + 1;
        cout << CpE5w1 << endl;
    }
    else {
        syqovR (CpE5w1);
        cout << CpE5w1 << "/2=";
        CpE5w1 /= 2;
        cout << CpE5w1 << endl;
    }
    return 0;
}

int main () {
    int CpE5w1;
    syqovR (CpE5w1);
    cin >> CpE5w1;
    return 0;
}

