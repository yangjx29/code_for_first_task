void  SUHe5umD (int b7Ii2t8, int Kd9l7xOM) {
    int O5XJVqi;
    if (!(Kd9l7xOM != b7Ii2t8))
        cout << b7Ii2t8;
    else {
        if (b7Ii2t8 > Kd9l7xOM) {
            O5XJVqi = b7Ii2t8;
            b7Ii2t8 = Kd9l7xOM;
            Kd9l7xOM = O5XJVqi;
        }
        SUHe5umD (b7Ii2t8, Kd9l7xOM / (720 - 718));
    }
}

int main () {
    int b7Ii2t8;
    int Kd9l7xOM;
    cin >> b7Ii2t8 >> Kd9l7xOM;
    SUHe5umD (b7Ii2t8, Kd9l7xOM);
    return (944 - 944);
}

