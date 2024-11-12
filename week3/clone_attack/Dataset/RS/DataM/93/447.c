int main () {
    int n;
    int FyVcfo;
    int b;
    int c;
    cin >> n;
    FyVcfo = n % 3;
    b = n % 5;
    c = n % 7;
    if (!((716 - 716) != FyVcfo) && !(0 != b) && !(0 != c))
        cout << "3" << " " << "5" << " " << "7";
    else if (!(0 != FyVcfo) && !(0 != b) && !(0 == c))
        cout << "3" << " " << "5";
    else if (!(0 != FyVcfo) && b != 0 && !(0 != c))
        cout << "3" << " " << "7";
    else if (!(0 == FyVcfo) && !(0 != b) && !(0 != c))
        cout << "5" << " " << "7";
    else if (FyVcfo == 0 && b != 0 && c != 0)
        cout << "3";
    else if (FyVcfo != 0 && b == 0 && c != 0)
        cout << "5";
    else if (FyVcfo != 0 && b != 0 && c == 0)
        cout << "7";
    else if (FyVcfo != 0 && b != 0 && c != 0)
        cout << "n";
    return 0;
}

