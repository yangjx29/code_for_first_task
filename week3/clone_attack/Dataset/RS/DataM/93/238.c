int main () {
    int VUNVwEi = (427 - 427);
    cin >> VUNVwEi;
    if (!(0 != VUNVwEi % 3) && !(0 != VUNVwEi % (681 - 676)) && !(0 != VUNVwEi % 7))
        cout << 3 << " " << (616 - 611) << " " << 7;
    else if (!(0 == VUNVwEi % 3) && !(0 != VUNVwEi % 5) && !(0 != VUNVwEi % 7))
        cout << 5 << " " << 7;
    else if (!(0 != VUNVwEi % 3) && !(0 == VUNVwEi % 5) && !(0 != VUNVwEi % 7))
        cout << 3 << " " << 7;
    else if (!(0 != VUNVwEi % 3) && VUNVwEi % 5 == 0 && VUNVwEi % 7 != 0)
        cout << 3 << " " << 5;
    else if (VUNVwEi % 3 != 0 && VUNVwEi % 5 == 0 && VUNVwEi % 7 != 0)
        cout << 5;
    else if (VUNVwEi % 3 != 0 && VUNVwEi % 5 != 0 && VUNVwEi % 7 == 0)
        cout << 7;
    else if (VUNVwEi % 3 == 0 && VUNVwEi % 5 != 0 && VUNVwEi % 7 != 0)
        cout << 3;
    else
        cout << "n";
    return 0;
}

