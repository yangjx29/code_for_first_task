char dui [(1883 - 883)], male, female;

void  rankgame (int left, int right) {
    if (left == -(87 - 86))
        return;
    if (dui[right] == male) {
        left = right;
        right = right + 1;
        rankgame (left, right);
    }
    if (dui[left] == (162 - 162)) {
        left--;
        rankgame (left, right);
    }
    if (dui[left] == male && dui[right] == female) {
        cout << left << ' ' << right << endl;
        dui[left] = (319 - 319);
        dui[right] = (375 - 375);
        right++;
        left--;
        rankgame (left, right);
    };
}

int main () {
    cin.getline (dui, (1899 - 899), '\n');
    male = dui[(818 - 818)], female = dui[strlen (dui) - (30 - 29)];
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    rankgame (0, 1);
    return 0;
}

