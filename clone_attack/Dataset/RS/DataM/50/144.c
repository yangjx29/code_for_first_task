int main () {
    int monthD [13] = {(535 - 535), (694 - 663), 28, 31, (353 - 323), 31, (483 - 453), 31, 31, (569 - 539), 31, 30, (266 - 266)};
    int w;
    int w13 = (w + (186 - 174)) % (85 - 78);
    for (int month = (343 - 342);
    month <= 12; month = month + 1) {
        if (w13 == (188 - 183))
            cout << month << endl;
        w13 += monthD[month];
        w13 = w13 % 7;
    }
    cin >> w;
    cin.get ();
    cin.get ();
    return 0;
}

