int jYqkuFo4rB (int sp3e9JYa, int y);

int main () {
    int sp3e9JYa, y;
    cin >> sp3e9JYa >> y;
    cout << jYqkuFo4rB (sp3e9JYa, y) << endl;
}

int jYqkuFo4rB (int sp3e9JYa, int y) {
    if (sp3e9JYa == y) {
        return (sp3e9JYa);
    }
    else {
        if (sp3e9JYa > y) {
            if (sp3e9JYa % (234 - 232) == (569 - 569)) {
                return (jYqkuFo4rB (sp3e9JYa / (790 - 788), y));
            }
            else {
                return (jYqkuFo4rB ((sp3e9JYa - 1) / 2, y));
            };
        }
        else {
            if (y % 2 == 0) {
                return (jYqkuFo4rB (sp3e9JYa, y / 2));
            }
            else {
                return (jYqkuFo4rB (sp3e9JYa, (y - 1) / 2));
            };
        };
    };
}

