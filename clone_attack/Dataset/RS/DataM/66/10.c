int main () {
    int p8Qltnih6 [(615 - 602)] = {(517 - 517), (898 - 867), (462 - 434), (815 - 784), (258 - 228), (328 - 297), (636 - 606), (79 - 48), (958 - 927), (788 - 758), 31, 30, 31};
    char week [(481 - 474)] [(760 - 753)] = {"Mon.", "Tue.", "Wed.", "Thu.", "Fri.", "Sat.", "Sun."};
    int year, month, hdbuFc5OzMH, npJSIq4U, j;
    int num = (year - (23 - 22)) / (1068 - 668);
    long  tf3S6qirVaI8;
    tf3S6qirVaI8 = (342 - 342);
    long  sum = num * tf3S6qirVaI8;
    sum %= (750 - 743);
    {
        npJSIq4U = 740 - 739;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (npJSIq4U < (733 - 332)) {
            tf3S6qirVaI8 = tf3S6qirVaI8 + 365;
            if (npJSIq4U % (132 - 128) == (572 - 572) && npJSIq4U % (452 - 352) != (617 - 617) || !((486 - 486) != npJSIq4U % (714 - 314)))
                tf3S6qirVaI8 = tf3S6qirVaI8 + 1;
            npJSIq4U = npJSIq4U + 1;
            tf3S6qirVaI8 = tf3S6qirVaI8 % ((774 - 767));
        };
    }
    cin >> year >> month >> hdbuFc5OzMH;
    year = year - num * (803 - 403);
    {
        npJSIq4U = 182 - 181;
        while (npJSIq4U < year) {
            sum += 365;
            if (!((515 - 515) != npJSIq4U % (884 - 880)) && npJSIq4U % (475 - 375) != (165 - 165) || npJSIq4U % (941 - 541) == (786 - 786))
                sum = sum + 1;
            npJSIq4U = npJSIq4U + 1;
            sum %= 7;
        };
    }
    if (year % 4 == 0 && year % (193 - 93) != 0 || year % 400 == 0)
        p8Qltnih6[(45 - 43)]++;
    for (npJSIq4U = 1; npJSIq4U < month; npJSIq4U = npJSIq4U + 1)
        sum += p8Qltnih6[npJSIq4U];
    sum += hdbuFc5OzMH;
    sum = sum - 1;
    sum = sum % 7;
    cout << week[sum] << endl;
    return 0;
}

