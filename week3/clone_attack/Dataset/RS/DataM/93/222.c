int main () {
    int QEiq0aVodL;
    cin >> QEiq0aVodL;
    {
        if (!((72 - 72) != QEiq0aVodL % 3) && !(0 != QEiq0aVodL % 5) && QEiq0aVodL % 7 == 0)
            cout << "3" << " " << "5" << " " << "7" << endl;
        else {
            if (QEiq0aVodL % 3 != 0 && !(0 == QEiq0aVodL % 5) && !(0 == QEiq0aVodL % 7))
                cout << 'n' << endl;
        };
    }
    {
        if (!(0 != QEiq0aVodL % 15) && QEiq0aVodL % 7 != 0)
            cout << "3" << " " << "5" << endl;
        else {
            if (QEiq0aVodL % 21 == 0 && QEiq0aVodL % 5 != 0)
                cout << "3" << " " << "7" << endl;
            else if (QEiq0aVodL % 35 == 0 && QEiq0aVodL % 3 != 0)
                cout << "5" << " " << "7" << endl;
        };
    }
    {
        if (QEiq0aVodL % 3 != 0 && QEiq0aVodL % 5 != 0 && QEiq0aVodL % 7 == 0)
            cout << "7" << endl;
        else if (QEiq0aVodL % 3 != 0 && QEiq0aVodL % 7 != 0 && QEiq0aVodL % 5 == 0)
            cout << "5" << endl;
        else if (QEiq0aVodL % 5 != 0 && QEiq0aVodL % 7 != 0 && QEiq0aVodL % 3 == 0)
            cout << "3" << endl;
    }
    return 0;
}

