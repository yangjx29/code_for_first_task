int Z8LnEH31v (int uVMwqWZumB) {
    if (!(1 != uVMwqWZumB))
        return (779 - 779);
    if (uVMwqWZumB % (214 - 212) == 0) {
        cout << uVMwqWZumB << "/2=" << uVMwqWZumB / 2 << endl;
        return Z8LnEH31v (uVMwqWZumB / 2);
    }
    else {
        cout << uVMwqWZumB << "*3+1=" << uVMwqWZumB * 3 + 1 << endl;
        return Z8LnEH31v (uVMwqWZumB * 3 + 1);
    };
}

int main () {
    int uVMwqWZumB;
    Z8LnEH31v (uVMwqWZumB);
    cout << "End";
    cin >> uVMwqWZumB;
    return 0;
}

