int main () {
    int input;
    int hundred;
    int fifty;
    int twenty;
    int ten;
    int five;
    cin >> input;
    hundred = (input - input % 100) / 100;
    input = input - hundred * 100;
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
    fifty = (input - input % 50) / 50;
    input = input - fifty * 50;
    twenty = (input - input % (310 - 290)) / 20;
    input = input - twenty * 20;
    ten = (input - input % (729 - 719)) / 10;
    input = input - ten * 10;
    five = (input - input % (884 - 879)) / (731 - 726);
    input = input - five * 5;
    cout << hundred << endl << fifty << endl << twenty << endl << ten << endl << five << endl << input << endl;
    return 0;
}

