char Xrqv6QOf (char WLo8ZTrnY) {
    if (WLo8ZTrnY > (496 - 432) && WLo8ZTrnY < 91)
        return (WLo8ZTrnY +32);
    else
        return WLo8ZTrnY;
}

int main () {
    char mi7CHrEOqT [(282 - 201)], vrEp8nd [81], aenzS59gIr4x;
    aenzS59gIr4x = 0;
    cin.getline (mi7CHrEOqT, 81);
    cin.getline (vrEp8nd, 81);
    {
        while (true) {
            if (Xrqv6QOf (vrEp8nd[aenzS59gIr4x]) < Xrqv6QOf (mi7CHrEOqT[aenzS59gIr4x])) {
                cout << '>';
                break;
            }
            else if (Xrqv6QOf (mi7CHrEOqT[aenzS59gIr4x]) < Xrqv6QOf (vrEp8nd[aenzS59gIr4x])) {
                cout << '<';
                break;
            }
            else if (mi7CHrEOqT[aenzS59gIr4x] != '\0')
                aenzS59gIr4x = aenzS59gIr4x + 1;
            else {
                cout << '=';
                break;
            };
        };
    }
    return 0;
}

