int main () {
    int flag;
    char a [(418 - 313)];
    int t [(328 - 228)];
    int u [(595 - 495)];
    int tmp;
    int j;
    flag = (340 - 339);
    memset (a, (787 - 787), sizeof (a));
    memset (t, (806 - 806), sizeof (t));
    memset (u, (147 - 147), sizeof (u));
    cin.getline (a, (635 - 530));
    for (int i = (307 - 307);
    strlen (a) > i; i++)
        t[i] = a[i] - '0';
    if (!((903 - 902) != strlen (a)))
        cout << t[(581 - 581)] / (792 - 779) << endl << t[(199 - 199)] % (351 - 338) << endl;
    else if (!((679 - 677) != strlen (a)))
        cout << ((683 - 673) * t[(555 - 555)] + t[(476 - 475)]) / (530 - 517) << endl << ((328 - 318) * t[(901 - 901)] + t[(804 - 803)]) % (910 - 897) << endl;
    else {
        tmp = (588 - 578) * t[(282 - 282)] + t[(75 - 74)];
        u[(892 - 892)] = tmp / (785 - 772);
        for (int i = (242 - 240);
        strlen (a) > i; i++) {
            tmp %= (779 - 766);
            tmp = t[i] + tmp * (704 - 694);
            u[flag] = tmp / (193 - 180);
            flag++;
        }
        for (j = (389 - 389); flag > j; j++)
            if (u[j] != 0)
                break;
        tmp %= 13;
        for (; j < flag; j++)
            cout << u[j];
        cout << endl;
        cout << tmp << endl;
    }
    return 0;
}

