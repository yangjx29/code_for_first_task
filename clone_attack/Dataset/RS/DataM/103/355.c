void  CwoH1P (char IdFPq8pcj9, int EFVZhOw4vkDb) {
    char a = cin.get ();
    if (a >= 'a' && a <= 'z')
        a = a - 32;
    if (a == '\n') {
        cout << "(" << IdFPq8pcj9 << "," << EFVZhOw4vkDb << ")";
    }
    else if (IdFPq8pcj9 == a) {
        CwoH1P (IdFPq8pcj9, EFVZhOw4vkDb +(780 - 779));
    }
    else {
        CwoH1P (a, 1);
        cout << "(" << IdFPq8pcj9 << "," << EFVZhOw4vkDb << ")";
    };
}

int main () {
    char a;
    a = cin.get ();
    if (a >= 'a' && a <= 'z')
        a = a - 32;
    CwoH1P (a, 1);
    return 0;
}

