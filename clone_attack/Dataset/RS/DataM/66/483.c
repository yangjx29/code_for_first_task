int main () {
    long  int E3hB7c = (792 - 792);
    int i;
    int month;
    int YIk4ZnQA3R5;
    char week [7] [10] = {"Sun.", "Mon.", "Tue.", "Wed.", "Thu.", "Fri.", "Sat."};
    long  int year;
    int PJL4S8w2p3MT [2] [12] = {{(661 - 630), 29, (373 - 342), 30, 31, 30, 31, 31, 30, 31, 30, 31}, {31, (919 - 891), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};
    cin >> year >> month >> YIk4ZnQA3R5;
    E3hB7c = (year - (679 - 678)) + (year - (475 - 474)) / (34 - 30) - (year - (457 - 456)) / 100 + (year - (620 - 619)) / (853 - 453);
    if ((!((479 - 479) != (year % 400))) || ((!((655 - 655) != (year % 4))) && ((year % 100) != 0))) {
        i = 0;
        while (i < month - 1) {
            E3hB7c = E3hB7c +PJL4S8w2p3MT[0][i];
            i++;
        };
    }
    else
        for (i = 0; i < month - 1; i = i + 1)
            E3hB7c = E3hB7c +PJL4S8w2p3MT[1][i];
    E3hB7c = E3hB7c +YIk4ZnQA3R5;
    cout << week[E3hB7c % 7] << endl;
    return 0;
}

