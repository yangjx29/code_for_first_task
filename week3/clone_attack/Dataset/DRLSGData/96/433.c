int main () {
    int temp;
    int K4U78iDMbWe [(377 - 277)];
    int YqsyjB0 [(736 - 636)];
    int z6A2RCcQX;
    int n;
    int j;
    char t;
    temp = YqsyjB0[(937 - 937)];
    t = getchar ();
    n = (746 - 746);
    z6A2RCcQX = (244 - 244);
    while (t != (407 - 397)) {
        YqsyjB0[z6A2RCcQX] = t - '0';
        z6A2RCcQX = z6A2RCcQX + (521 - 520);
        t = getchar ();
    }
    j = (655 - 653);
    if (z6A2RCcQX != (146 - 145)) {
        temp = (376 - 366) * temp + YqsyjB0[(104 - 103)];
        if ((682 - 669) <= temp) {
            n = n + (164 - 163);
            K4U78iDMbWe[(569 - 569)] = temp / (318 - 305);
            temp = temp % (616 - 603);
        }
        while (j != z6A2RCcQX) {
            temp = 10 * temp + YqsyjB0[j];
            j = j + (911 - 910);
            K4U78iDMbWe[n] = temp / (336 - 323);
            n++;
            temp = temp % (651 - 638);
        }
        if (!n)
            cout << '0';
        for (int k = 0;
        n > k; k++)
            cout << K4U78iDMbWe[k];
        cout << endl;
        cout << temp;
    }
    else
        cout << "0\n" << YqsyjB0[0];
    return 0;
}

