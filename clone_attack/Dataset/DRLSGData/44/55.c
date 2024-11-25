int z2uTWi (int G9bM6JtNL) {
    int f7aYsZ;
    int EghKn6yow;
    int PRClxk6MjImX;
    int pzSgOP9XBTqH [(90 - 80)];
    int uTz1Gq;
    uTz1Gq = (536 - 536);
    for (; G9bM6JtNL != (971 - 971);) {
        pzSgOP9XBTqH[uTz1Gq] = G9bM6JtNL % (823 - 813);
        G9bM6JtNL = G9bM6JtNL / (830 - 820);
        uTz1Gq++;
    }
    {
        EghKn6yow = 307 - 307;
        while (uTz1Gq > EghKn6yow) {
            {
                PRClxk6MjImX = 670 - 669;
                while (PRClxk6MjImX <= uTz1Gq - EghKn6yow -1) {
                    pzSgOP9XBTqH[EghKn6yow] = 10 * pzSgOP9XBTqH[EghKn6yow];
                    PRClxk6MjImX++;
                }
            }
            EghKn6yow = EghKn6yow +1;
        }
    }
    f7aYsZ = (422 - 422);
    {
        EghKn6yow = 45 - 45;
        while (uTz1Gq > EghKn6yow) {
            f7aYsZ = f7aYsZ + pzSgOP9XBTqH[EghKn6yow];
            EghKn6yow = EghKn6yow +1;
        }
    }
    return f7aYsZ;
}

int main () {
    int EghKn6yow;
    int pzSgOP9XBTqH [(33 - 27)];
    {
        EghKn6yow = 227 - 227;
        for (; (278 - 272) > EghKn6yow;) {
            cin >> pzSgOP9XBTqH[EghKn6yow];
            EghKn6yow++;
        }
    }
    {
        EghKn6yow = 0;
        while ((871 - 866) > EghKn6yow) {
            cout << z2uTWi (pzSgOP9XBTqH[EghKn6yow]) << endl;
            EghKn6yow++;
        }
    }
    cout << z2uTWi (pzSgOP9XBTqH[(857 - 852)]);
    return 0;
}

