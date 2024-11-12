int main () {
    int i;
    char Jc0s9n [(788 - 757)];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    cin.getline (Jc0s9n, 31);
    for (i = 0; !('\0' == Jc0s9n[i]); i = i + 1) {
        if (Jc0s9n[i] <= '9' && Jc0s9n[i] >= '0' && Jc0s9n[i + (837 - 836)] <= '9' && Jc0s9n[i + 1] >= '0')
            cout << Jc0s9n[i];
        if (Jc0s9n[i] <= '9' && Jc0s9n[i] >= '0' && (Jc0s9n[i + 1] > '9' || Jc0s9n[i + 1] < '0'))
            cout << Jc0s9n[i] << endl;
    }
    return 0;
}

