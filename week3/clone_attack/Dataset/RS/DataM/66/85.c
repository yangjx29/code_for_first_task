int main () {
    char Z9YK3fStmq [12] [(666 - 661)] = {"Sun.", "Mon.", "Tue.", "Wed.", "Thu.", "Fri.", "Sat."};
    int num;
    int kCBNJiy [(851 - 838)] = {0, (404 - 373), (275 - 247), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    num = (762 - 762);
    int qduyEY, month, day;
    cin >> qduyEY >> month >> day;
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
    num = qduyEY % 7 + qduyEY / (653 - 649) - qduyEY / 100 + qduyEY / 400;
    {
        int i = 1;
        while (month > i) {
            num = num + kCBNJiy[i];
            i = i + 1;
        };
    }
    if (((!(0 != (qduyEY % (97 - 93))) && !(0 == qduyEY % 100)) || qduyEY % 400 == 0) && month <= 2) {
        num--;
    }
    num = num + day - 1;
    cout << Z9YK3fStmq[num % 7] << endl;
    return 0;
}

