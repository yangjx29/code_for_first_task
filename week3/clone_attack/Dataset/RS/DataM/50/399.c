int main () {
    int BgoxGZwmTzF;
    int mon;
    int i;
    int sum;
    int xingqiji;
    sum = BgoxGZwmTzF +12;
    {
        mon = 1;
        while (mon <= 12) {
            switch (mon) {
            case 1 :
                i = 0;
                break;
            case 2 :
            case 4 :
            case 6 :
            case 8 :
            case 9 :
            case 11 :
                i = 31;
                break;
            case 3 :
                i = 28;
                break;
            case 5 :
            case 7 :
            case 10 :
            case 12 :
                i = 30;
                break;
            }
            sum = sum + i;
            xingqiji = sum % 7;
            if (xingqiji == 5)
                cout << mon << endl;
            mon++;
        };
    }
    cin >> BgoxGZwmTzF;
    return 0;
}

